#ifndef IMAGEPROCESSING_H
#define IMAGEPROCESSING_H

#include <string>

void print();

class ImageProcessing {

public:
	//variables
	int numberOfColumns, numberOfRows, numberOfBands, highValue, totalPixels;
		//bands rpg

	int** readImage(std::string filename); // returns 2darray
	// takes in filename
	int** rotateImage90(std::string filename); // returns 2darray
	int** rotateImage180(std::string filename); // returns 2darray
	int** rotateImage270(std::string filename); // returns 2darray
};

#endif