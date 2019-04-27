#ifndef IMAGE_H
#define IMAGE_H
#include <string>
class Image
{
	int numberOfColumns, numberOfRows, highValue;
	std::string infilename, outfilename, version;
	int img[24][7];
public:
	Image(); // defualt constructor

	Image(std::string infilename, std::string outfilename, std::string version, int numberOfRows, int numberOfColumns, int highValue, int img[24][7]);
	
	std::string getInfilename();
	std::string getOutfilename();
	std::string getVersion();
	int getNumberOfRows();
	int getNumberOfColumns();
	int getHighValue();

	int getImgMatrix();

	void setInfilename(std::string infilename);
	void setOutfilename(std::string outfilename);
	void setVersion(std::string version);
	void setNumberOfRows(int numberOfRows);
	void setNumberOfColumns(int numberOfColumns);
	void setHighValue(int highValue);
	void setImgMatrix(int img[24][7]);
	void setImgMatrix90(int img[7][24]);
};

#endif