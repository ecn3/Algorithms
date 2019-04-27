#ifndef IMAGEPROCESSING_H
#define IMAGEPROCESSING_H

#include <string>
#include "image.h"
#define FALSE 0;
#define TRUE 1;

void print();

class ImageProcessing {
	Image img;
	int myimg[24][7];
	bool rotated = FALSE;
	int arrary90[7][24];
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