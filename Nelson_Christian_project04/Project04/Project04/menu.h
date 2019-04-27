#ifndef MENU_H
#define MENU_H

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
	void run();
};

#endif //MENU_H