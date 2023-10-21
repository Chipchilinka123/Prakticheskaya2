#include <iostream> 
#include <string>

#include "Items.h"
#include "Date.h"

using namespace std;

items items::readTwoFromStream(std::istream& inputStream)
{
	string name, value;
	inputStream
		>> name
		>> value;

	Date date =
		Date::readOneFromStream(
			inputStream);

	return items(
		name, 
		value, 
		date
	);
}

void items::printTwoToStream(std::ostream& outputStream, const vector<items>& objects) const
{
		outputStream << "Название: " << name << endl;
		outputStream << "Количество: " << value << endl;
		outputStream << "Дата получения: ";
		date.printOneToStream(std::cout);
		outputStream << endl << "________________" << endl;
}
