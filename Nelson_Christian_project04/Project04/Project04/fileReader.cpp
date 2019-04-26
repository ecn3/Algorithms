#include "pch.h"
#include "fileReader.h"
#include <iostream>
#include <string>

using namespace std;

int FileReader::readFile()
{
	string fileName;

	cout << "File Reader" << endl;

	cout << "Enter the name of your inputFile: " << endl;
	cin >> fileName;

	while (fileName.length() > 31) {
		cout << "Enter the name of your inputFile, makesure it is less than 31 characters: " << endl;
		cin >> fileName;
	}




	return 0;
}

