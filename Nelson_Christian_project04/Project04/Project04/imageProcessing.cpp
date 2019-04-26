#include "pch.h"
#include "imageProcessing.h"
#include<iostream> 
#include <cstdlib>
#define FALSE 0;
#define TRUE 1;

using namespace std;

void print() {

}

void ImageProcessing::readImage(char **argv) {
	FILE * filePointer;
	char *string;
	int finishedReading = FALSE; // had to define
	char c;

	filePointer = fopen(argv[1], "rb");

	if (filePointer == NULL) {
		cerr << "That file doesnt exist"; //c error
		exit;
	}

	string = (char *)calloc(256, 1); //allcoate chars 
	while (!finishedReading && (c = (char)fgetc(filePointer)) != '\0') {
		// reads in P2
		c = (char)fgetc(filePointer); // 2 of P2
		this->numberOfBands = 1;
		//pgm plain
		c = (char)fgetc(filePointer); //gets next info 2 [24 7]
		if (c != 0x0A) { //c not equal to newline
			ungetc(c, filePointer); // put back
		}
		else {
			ungetc(c, filePointer); // put back
			fgets(string, 256, filePointer);
			cout << "File you entered is " << string << endl; // this is for when we have a #filename.pgm
		}
		switch (c) { // now lets read in the next line
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			ungetc(c, filePointer);
			fscanf(filePointer, "%d %d %d", this->numberOfColumns, this->numberOfRows, this->highValue);
			finishedReading = TRUE;
			fgetc(filePointer);
			break;
		}
	}
		this->totalPiixels = this->numberOfRows*this->numberOfRows*this->numberOfBands;
		this->image = (unsigned char *)malloc(this->totalPiixels);
		fread(this->image, 1, this->totalPiixels, filePointer);

}