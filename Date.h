#pragma once
#include <fstream>
#include <vector>

struct Date
{
	int day;
	int month;
	int year;

	Date(int y, int m, int d) : year(y), month(m), day(d) {}

	static Date readOneFromStream(std::istream& inputStream);
	void printOneToStream(std::ostream& outputStream) const;
};