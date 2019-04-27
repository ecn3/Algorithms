#ifndef IMAGEPROCESSING_H
#define IMAGEPROCESSING_H

#include <string>

void print();

class ImageProcessing {

public:
	//variables
	int numberOfColumns, numberOfRows, numberOfBands, highValue, totalPiixels;
		//bands rpg
	unsigned char * image;
		//because reading char from file

	void readImage(std::string filename);
	// takes in filename
};

#endif