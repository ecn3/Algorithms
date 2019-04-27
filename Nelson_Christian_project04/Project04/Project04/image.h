#ifndef IMAGE_H
#define IMAGE_H
#include <string>
class image
{
	int numberOfColumns, numberOfRows, highValue;
	std::string infilename, outfilename, version;
	int img[24][7];
public:
	image(); // defualt constructor

	image(std::string infilename, std::string outfilename, std::string version, int numberOfRows, int numberOfColumns, int highValue, int img[24][7]);
	
	std::string getInfilename();
	std::string getOutfilename();
	std::string getVersion();
	int getNumberOfRows();
	int getNumberOfColumns();
	int getHighValue();

	void setInfilename(std::string infilename);
	void setOutfilename(std::string outfilename);
	void setVersion(std::string version);
	void setNumberOfRows(int numberOfRows);
	void setNumberOfColumns(int numberOfColumns);
	void setHighValue(int highValue);
};

#endif