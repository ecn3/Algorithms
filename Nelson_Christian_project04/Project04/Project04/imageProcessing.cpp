#include "pch.h"
#include "imageProcessing.h"
#include<iostream> 
#include <fstream>
#include <sstream>
#include <stdio.h>
#include <string.h>
#include <iomanip>
#include <ios>
#include <cmath>


#define FALSE 0;
#define TRUE 1;

using namespace std;

ImageProcessing::ImageProcessing() {}

void print() {

}

void ImageProcessing::readImage(string filename) {
	string line;
	ifstream ifstream; //create input file stream

	string infilename = filename;
	string outfilename;
	string version = "P2";

	ifstream.open(filename); //open file
	getline(ifstream, line);
	ifstream >> numberOfColumns >> numberOfRows;
	ifstream >> highValue;
	
	img.setVersion(version);
	img.setNumberOfColumns(numberOfColumns);
	img.setNumberOfRows(numberOfRows);
	img.setHighValue(highValue);

	cout << "Version " << version << endl;
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
			ifstream >> myimg[j][i];
		}
	}
	//send img to img

	Image image(filename, outfilename, version, numberOfRows, numberOfColumns, highValue, myimg);
	//cout << " myimg[1][1]: " << myimg[1][1] << endl; //test for 3
	ifstream.close(); // close fill
}

void ImageProcessing::rotateImage90() {
	cout << "ImageProcessing::rotateImage90" << endl;
}

void ImageProcessing::rotateImage180() {
	cout << "ImageProcessing::rotateImage180" << endl;
}

void  ImageProcessing::rotateImage270() {
	cout << "ImageProcessing::rotateImage270" << endl;

}

void ImageProcessing::verticalFlip(){
	cout << "ImageProcessing::verticalFlip" << endl;
}

void ImageProcessing::horizontalFlip()
{
	cout << "ImageProcessing::horizontalFlip" << endl;
}


void ImageProcessing::grayscale()
{
	int threshold;
	cout << "ImageProcessing::grayscale" << endl;
	cout << "Enter the Threshold: ";
	cin >> threshold;

	for (int i = 0; i < numberOfRows; ++i) {
		for (int j = 0; j < numberOfColumns; ++j) {
			if (myimg[j][i] > threshold) {
				myimg[j][i] = threshold;
			}
			else {
				myimg[j][i] = 0;
			}
		}
	}
}

void ImageProcessing::saveImage(string filename) {
	ofstream myfile;
	myfile.open(filename);
	myfile << img.getVersion() << "\n";
	myfile << img.getNumberOfColumns() << " " << img.getNumberOfRows() << "\n";
	myfile << img.getHighValue() << "\n";

	for (int i = 0; i < numberOfRows; ++i) {
		for (int j = 0; j < numberOfColumns; ++j) {
			myfile << myimg[j][i] << " ";
			if (myimg[j][i] < 10) {
				myfile << " "; // do an extra line when less than 10
			}
		}
		myfile << endl; // new line for row
	}

	myfile.close();
}