#ifndef MENU_H
#define MENU_H

#include "fileReader.h"
#include "fileWriter.h"

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
	FileWriter fileWriter;

	Menu(FileReader fileReader, FileWriter fileWriter);

	void run();
};

#endif //MENU_H