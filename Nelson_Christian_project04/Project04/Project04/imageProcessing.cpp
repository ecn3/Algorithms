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

	//myimg = img;

	return img;
}

void ImageProcessing::rotateImage90(string filename) {
	cout << "ImageProcessing::rotateImage90" << endl;

	int img90rotate[7][24];

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
			int temp = img90rotate[i][j];
			img90rotate[i][j] = img90rotate[24 - 1 - j][i];
			img90rotate[24 - 1 - j][i] = img90rotate[24 - 1 - i][24 - 1 - j];
			img90rotate[24 - 1 - i][24 - 1 - j] = img90rotate[j][24 - 1 - i];
			img90rotate[j][24 - 1 - i] = temp;
			cout << setfill(' ') << setw(2) << img90rotate[i][j] << endl;
		}
	}

}

void ImageProcessing::rotateImage180(string filename) {
	cout << "ImageProcessing::rotateImage180" << endl;

	int img90rotate[24][7];

	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 24; j++)
		{
			myimg[i][j] = myimg[i][6 - j];
			cout << setfill(' ') << setw(2) << myimg[j][i];
		}
	}

}

void  ImageProcessing::rotateImage270(string filename) {
	cout << "ImageProcessing::rotateImage270" << endl;

	int img90rotate[24][7];

	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; i < 24; j++)
		{
			myimg[i][j] = myimg[i][6 - j];
			cout << setfill(' ') << setw(2) << myimg[i][j];
		}
	}
	
}