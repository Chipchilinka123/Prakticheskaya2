#include "Date.h"
#include <fstream>

Date Date::readOneFromStream(std::istream& inputStream)
{
	int year, month, day;
	char dash;
	inputStream 
		>> year >> dash
		>> month >> dash
		>> day;

	Date result(year, month, day);
	return result;
}

void Date::printOneToStream(std::ostream& outputStream) const
{
	outputStream << year << "." << month << "." << day;
}