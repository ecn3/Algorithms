#ifndef IMAGE_H
#define IMAGE_H

class image
{
	int numberOfColumns, numberOfRows, highValue;
	std::string filename, version;
public:
	image(); // defualt constructor

	image(std::string filename, std::string version, int numberOfRows, int numberOfColumns, int highValue);
};

#endif