#ifndef MENU_H
#define MENU_H

#include "fileReader.h"

class Menu
{
	int selectOptions();

	void loadImage();

	void saveImage();

	void rotateImage();

	void flipVerticallyImage();

	void flipHorizontallyImage();

	void greyscaleImage();

public:
	FileReader fileReader;

	Menu(FileReader fileReader);

	void run();
};

#endif //MENU_H