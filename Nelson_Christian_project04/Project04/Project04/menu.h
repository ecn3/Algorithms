#ifndef MENU_H
#define MENU_H

class Menu
{

	int numberOfColumns, numberOfRows, numberOfBands, highValue, totalPixels;
	int *img[24][7];

public:
	int selectOptions();

	void saveImage();

	void rotateImage();

	void flipVerticallyImage();

	void flipHorizontallyImage();

	void greyscaleImage();

	void loadImage();

	void run();
private:

};

#endif //MENU_H