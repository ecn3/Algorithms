#include "pch.h"
#include "fileWriter.h"
#include <iostream>
#include <string>

using namespace std;

int FileWriter::writeFile()
{
	string fileName;

	cout << "File Writer" << endl;

	cout << "Enter the name of your outputFile: " << endl;
	cin >> fileName;

	while (fileName.length() > 31) {
		cout << "Enter the name of your outputFile, makesure it is less than 31 characters: " << endl;
		cin >> fileName;
	}

	return 0;
}

