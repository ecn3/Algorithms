#include "pch.h"
#include "image.h"
#include <iostream>
#include <string>

image::image(){}

image::image(std::string infilename, std::string outfilename, std::string version, int numberOfRows, int numberOfColumns, int highValue) {
	this->infilename = infilename;
	this->outfilename = outfilename;
	this->version = version;
	this->numberOfRows = numberOfRows;
	this->numberOfColumns = numberOfColumns;
	this->highValue = highValue;
}// implement constructor
