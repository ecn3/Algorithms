#include "pch.h"
#include "image.h"
#include <iostream>
#include <string>

using namespace std;

Image::Image(){}

Image::Image(std::string infilename, std::string outfilename, std::string version, int numberOfRows, int numberOfColumns, int highValue, int img[24][7]) {
	this->infilename = infilename;
	this->outfilename = outfilename;
	this->version = version;
	this->numberOfRows = numberOfRows;
	this->numberOfColumns = numberOfColumns;
	this->highValue = highValue;
	this->img[24][7] = img[24][7]; // img
}// implement constructor

string Image::getInfilename() {
	return this->infilename;
}
string Image::getOutfilename() {
	return this->outfilename;
}
string Image::getVersion() {
	return this->version;
}
int Image::getNumberOfRows() {
	return this->numberOfRows;
}
int Image::getNumberOfColumns() {
	return this->numberOfColumns;
}
int Image::getHighValue() {
	return this->highValue;
}

int Image::getImgMatrix() {
	return this->img[24][7];
}

void Image::setInfilename(string infilename) {
	this->infilename = infilename;
}
void Image::setOutfilename(string outfilename) {
	this->outfilename = outfilename;
}
void Image::setVersion(string version) {
	this->version = version;
}
void Image::setNumberOfRows(int numberOfRows) {
	this->numberOfRows = numberOfRows;
}
void Image::setNumberOfColumns(int numberOfColumns) {
	this->numberOfColumns = numberOfColumns;
}
void Image::setHighValue(int highValue) {
	this->highValue = highValue;
}

void Image::setImgMatrix(int img[24][7]) {
	this->img[24][7] = img[24][7];
}


void Image::setImgMatrix90(int img[7][24]) {
	this->img[7][24] = img[7][24];
}