#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include "Date.h"
#include "Items.h"
using namespace std;

void printList(const vector<items>& objects)
{
	for (const items& obj : objects) {
		obj.printTwoToStream(std::cout, objects);
	}
}

int main() {
	setlocale(LC_ALL, "Russian");

	vector<items> objects;
	ifstream inputFile("input.txt");
	string input;

	if (!inputFile.is_open())
		cout << "Файл не открыт!" << endl;

	while (inputFile.good()) {
		objects.emplace_back(items::readTwoFromStream(inputFile));
		inputFile.ignore();	
	}

	printList(objects);
}

// git
// readme описание к проекту 
// код стайл