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
			col = line;
		}

	}

	numberOfColumns = stoi(col);
	numberOfRows = stoi(row);

	cout << "columns: " << numberOfColumns << " rows: " << numberOfRows << endl;

	ifstream.close();
}