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
	// swap i j
	// rotate 90 x,y = y,-x
	//int arrary90[7][24];
	// [0-7][0] = 1 = 6 2 = 5  =4
	int h = 6;
	for (int k = 0; k < numberOfColumns; k++) {
		for (int i = 0; i < numberOfRows; ++i) {
			arrary90[i][k] = myimg[k][h];
			h--;
		} // swaps first set of is
		h = 6;
	}
	rotated = TRUE;
}

void ImageProcessing::rotateImage180() {
	cout << "ImageProcessing::rotateImage180" << endl;
	//horizontal flip then vertical flip
	horizontalFlip();
	verticalFlip();
}

void  ImageProcessing::rotateImage270() {
	cout << "ImageProcessing::rotateImage270" << endl;
	//rotate 90 then vertical flip
	rotateImage90();

	int temp[7][24]; //create temp
	int k = 6;

	for (int i = 0; i < numberOfColumns; ++i) {
		for (int j = 0; j < numberOfRows; ++j) {
			temp[k][i] = arrary90[j][i];
			k--; //count down
		}
		k = 6; //reset
	}
	for (int i = 0; i < numberOfColumns; ++i) {
		for (int j = 0; j < numberOfRows; ++j) {
			arrary90[j][i] = temp[j][i]; // set to new

		}
	}


}

void ImageProcessing::verticalFlip(){
	cout << "ImageProcessing::verticalFlip" << endl;
	//myimg[23][6] = myimg[23][0]
	//if j = 6 k = 0
	int temp[24][7]; //create temp
	int k = 6;
	for (int i = 0; i < numberOfRows; ++i) {
		for (int j = 0; j < numberOfColumns; ++j) {
			temp[j][k] = myimg[j][i];
		}
		k--; //count down
	}
	for (int i = 0; i < numberOfRows; ++i) {
		for (int j = 0; j < numberOfColumns; ++j) {
			myimg[j][i] = temp[j][i]; // set to new
		}
	}
	
}

void ImageProcessing::horizontalFlip()
{
	cout << "ImageProcessing::horizontalFlip" << endl;
	//myimg[23][6] = myimg[0][6]
	//if j = 6 k = 0
	int temp[24][7]; //create temp
	int k = 23;

	for (int i = 0; i < numberOfRows; ++i) {
		for (int j = 0; j < numberOfColumns; ++j) {
			temp[k][i] = myimg[j][i];
			k--; //count down
		}
		k = 23; //reset
	}
	for (int i = 0; i < numberOfRows; ++i) {
		for (int j = 0; j < numberOfColumns; ++j) {
			myimg[j][i] = temp[j][i]; // set to new

		}
	}
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
	if (rotated < 1) { // when not rotated
	for (int i = 0; i < numberOfRows; ++i) {
		for (int j = 0; j < numberOfColumns; ++j) {
			myfile << myimg[j][i] << " ";
			if (myimg[j][i] < 10) {
				myfile << " "; // do an extra line when less than 10
			}
		}
		myfile << endl; // new line for row
	}
	}
	else {
		for (int i = 0; i < numberOfColumns; ++i) {
			for (int j = 0; j < numberOfRows; ++j) {
				myfile << arrary90[j][i] << " ";
				if (arrary90[j][i] < 10) {
					myfile << " "; // do an extra line when less than 10
				}
			}
			myfile << endl; // new line for row
		}
	}
	myfile.close();
}