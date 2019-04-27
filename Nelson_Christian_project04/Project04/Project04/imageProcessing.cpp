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

int** ImageProcessing::readImage(string filename) {
	string line;
	ifstream ifstream; //create input file stream

	ifstream.open(filename); //open file
	getline(ifstream, line);
	ifstream >> numberOfColumns >> numberOfRows;
	ifstream >> highValue;

	cout << "numberOfColumns " << numberOfColumns << endl;
	cout << "numberOfRows " << numberOfRows << endl;
	cout << "highValue " << highValue << endl;

	// dynamic allocation
	int** img = new int*[numberOfColumns];
	for (int i = 0; i < numberOfColumns; ++i) {
		img[i] = new int[numberOfRows];
	}

	//fill array
	for (int i = 0; i < numberOfRows; i++)
	{
		for (int j = 0; j < numberOfColumns; j++)
		{
			ifstream >> img[j][i];
		}
	}

	
	ifstream.close(); // close file
	return img;
}

int** ImageProcessing::rotateImage90(string filename) {

	//delete the below
	int** img[24][7];
	return img[24][7];
}

int** ImageProcessing::rotateImage180(string filename) {
	
	//delete the below
	int** img[24][7];
	return img[24][7];
}

int** ImageProcessing::rotateImage270(string filename) {
	
	//delete the below
	int** img[24][7];
	return img[24][7];
}