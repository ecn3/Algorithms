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

	int manipulatedImg[7][24];

	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 24; j++)
		{
			myimg[i][j] = myimg[6 - j][i];
			cout << setfill(' ') << setw(2) << myimg[i][j];
		}
	}



	for (int i = 0; i < 24 / 2; i++)
	{
		for (int j = i; j < 24 - i - 1; j++)
		{
			int temp = manipulatedImg[i][j];
			manipulatedImg[i][j] = manipulatedImg[24 - 1 - j][i];
			manipulatedImg[24 - 1 - j][i] = manipulatedImg[24 - 1 - i][24 - 1 - j];
			manipulatedImg[24 - 1 - i][24 - 1 - j] = manipulatedImg[j][24 - 1 - i];
			manipulatedImg[j][24 - 1 - i] = temp;
			cout << setfill(' ') << setw(2) << manipulatedImg[i][j] << endl;
		}
	}

	img.setImgMatrix90(manipulatedImg);
}

void ImageProcessing::rotateImage180() {
	cout << "ImageProcessing::rotateImage180" << endl;

	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 24; j++)
		{
			myimg[i][j] = myimg[i][6 - j];
			cout << setfill(' ') << setw(2) << myimg[j][i];
		}
	}
	img.setImgMatrix(myimg);
}

void  ImageProcessing::rotateImage270() {
	cout << "ImageProcessing::rotateImage270" << endl;

	int manipulatedImg[7][24];

	for (int i = 0; i < 24; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			manipulatedImg[6 - i][j] = manipulatedImg[i][j];
			cout << setfill(' ') << setw(2) << myimg[i][j];
		}
	}
	img.setImgMatrix(myimg);
}

void ImageProcessing::verticalFlip(){

	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; i < 24; j++)
		{
			myimg[i][j] = myimg[i][6 - j];
			cout << setfill(' ') << setw(2) << myimg[i][j];
		}
	}

	img.setImgMatrix(myimg);
}

void ImageProcessing::horizontalFlip()
{

	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 24; j++)
		{
			cout << setfill(' ') << setw(2) << myimg[i][j];
		}
	}
	img.setImgMatrix(myimg);
}

void ImageProcessing::grayscale()
{
	int threshold;
	cout << "Enter the threshold: ";
	cin >> threshold;
	int manipulatedImg[24][7];

	for (int i = 0; i < 24; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (manipulatedImg[i][j] > threshold) {
				manipulatedImg[i][j] = threshold; // if is greater than threshold set to threshold
			}
			else{
				manipulatedImg[i][j] = 0; // when less than or equal set to 0
			}
		}
	}
	img.setImgMatrix(manipulatedImg);
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
		}
		myfile << endl; // new line for row
	}

	myfile.close();
}