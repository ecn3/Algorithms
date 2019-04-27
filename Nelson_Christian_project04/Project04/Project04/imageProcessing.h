#ifndef IMAGEPROCESSING_H
#define IMAGEPROCESSING_H

#include <string>

void print();

class ImageProcessing {
	int myimg[24][7]; // global img
public:
	//variables
	int numberOfColumns, numberOfRows, numberOfBands, highValue, totalPixels;
		//bands rpg

	int** readImage(std::string filename); // returns 2darray
	// takes in filename
	void rotateImage90(std::string filename); // returns 2darray
	void rotateImage180(std::string filename); // returns 2darray
	void rotateImage270(std::string filename); // returns 2darray
	void verticalFlip(std::string filename);
	void horizontalFlip(std::string filename);
	void grayscale(std::string filename);
};

#endif