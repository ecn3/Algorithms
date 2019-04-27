#include "pch.h"
#include "imageProcessing.h"
#include<iostream> 
#include <fstream>
#include <sstream>
#include <stdio.h>
#include <string.h>

#define FALSE 0;
#define TRUE 1;

using namespace std;

void print() {

}

void ImageProcessing::readImage(string filename) {
	int finishedReading = FALSE; // had to define
	string line;
	ifstream ifstream; //create input file stream

	ifstream.open(filename, ios::binary); //open file
	stringstream ss;

	getline(ifstream, line); // read in P2
	cout << "Version: " << line << endl; //diplay P2

	getline(ifstream, line); // read in 24 7

	char c = ' ';
	string col;
	string row;

	for (int i = 0; i < line.length(); i++) {
		if (line.at(i) == c) { // when is space
			col = line.substr(0, i); // sets from 0 to i
			row = line.substr((i + 1), line.length()); // sets froi to length
		}

	}

	numberOfColumns = stoi(col);
	numberOfRows = stoi(row);
	totalPiixels = numberOfColumns * numberOfRows;
	cout << "columns: " << numberOfColumns << " rows: " << numberOfRows << endl;

	getline(ifstream, line); // reads in 15
	highValue = stoi(line);
	cout << "highval " << highValue << endl;

	// dynamic allocation
	int** img = new int*[numberOfColumns];
	for (int i = 0; i < numberOfColumns; ++i) {
		img[i] = new int[numberOfRows];
	}

	cout << "columns: " << numberOfColumns << " rows: " << numberOfRows << endl;

	string* allNumberLines = new string[numberOfRows]; // all lines oif number

	int* numbers = new int[totalPiixels]; // create list of numbers
	int lines = 0;

	while (!ifstream.eof()) //read in the rest of the lines
	{
		getline(ifstream, line);
		allNumberLines[lines] = line;
		cout << line << endl;
		lines++;
	}
	for (int i = 0; i < numberOfRows; i++) {
		cout << "all nums" << allNumberLines[i] << endl;
	}

	ifstream.close(); // close file
}