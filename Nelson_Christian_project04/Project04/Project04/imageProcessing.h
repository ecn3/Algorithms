#ifndef IMAGEPROCESSING_H
#define IMAGEPROCESSING_H

#include <string>
#include "image.h"

void print();

class ImageProcessing {
	image img;
	int myimg[24][7];
public:
	//variables
	int numberOfColumns, numberOfRows, numberOfBands, highValue, totalPixels;
		//bands rpg
	void readImage(std::string filename); 
	void rotateImage90(); 
	void rotateImage180(); 
	void rotateImage270(); 
	void verticalFlip();
	void horizontalFlip();
	void grayscale();
	void saveImage(std::string filename);
	ImageProcessing(); // constructor
};

#endif