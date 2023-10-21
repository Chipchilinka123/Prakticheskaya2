#pragma once
#include <fstream>
#include <vector>
#include <string>
#include "Date.h"

struct items 
{
	std::string name;
	std::string value;
	Date date;

	items(const std::string& name, const std::string& value, const Date& date)
		: name(name), value(value), date(date) {}

	static items readTwoFromStream(std::istream& inputStream);
	void printTwoToStream(std::ostream& outputStream, const std::vector<items>& objects) const;
};
