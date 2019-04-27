#ifndef MENU_H
#define MENU_H
#include "imageProcessing.h"
class Menu
{

public:

	int selectOptions();

	void saveImage();

	void rotateImage();

	void flipVerticallyImage();

	void flipHorizontallyImage();

	void greyscaleImage();

	void loadImage();

	void run();

	ImageProcessing imageProcessing;

	Menu(ImageProcessing imageProcessing);

private:

};

#endif //MENU_H