#include "pch.h"
#include "image.h"
#include <iostream>
#include <string>

using namespace std;

image::image(){}

image::image(std::string infilename, std::string outfilename, std::string version, int numberOfRows, int numberOfColumns, int highValue, int img[24][7]) {
	this->infilename = infilename;
	this->outfilename = outfilename;
	this->version = version;
	this->numberOfRows = numberOfRows;
	this->numberOfColumns = numberOfColumns;
	this->highValue = highValue;
	this->img[24][7] = img[24][7]; // img
}// implement constructor

string image::getInfilename() {
	return this->infilename;
}
string image::getOutfilename() {
	return this->outfilename;
}
string image::getVersion() {
	return this->version;
}
int image::getNumberOfRows() {
	return this->numberOfRows;
}
int image::getNumberOfColumns() {
	return this->numberOfColumns;
}
int image::getHighValue() {
	return this->highValue;
}

void image::setInfilename(string infilename) {
	this->infilename = infilename;
}
void image::setOutfilename(string outfilename) {
	this->outfilename = outfilename;
}
void image::setVersion(string version) {
	this->version = version;
}
void image::setNumberOfRows(int numberOfRows) {
	this->numberOfRows = numberOfRows;
}
void image::setNumberOfColumns(int numberOfColumns) {
	this->numberOfColumns = numberOfColumns;
}
void image::setHighValue(int highValue) {
	this->highValue = highValue;
}