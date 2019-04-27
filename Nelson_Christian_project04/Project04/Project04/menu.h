#ifndef MENU_H
#define MENU_H

class Menu
{
	int selectOptions();

	void saveImage();

	void rotateImage();

	void flipVerticallyImage();

	void flipHorizontallyImage();

	void greyscaleImage();

public:
	int numberOfColumns, numberOfRows, numberOfBands, highValue, totalPixels;

	int** loadImage();

	void run();
};

#endif //MENU_H