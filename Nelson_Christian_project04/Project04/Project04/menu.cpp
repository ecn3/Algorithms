#include "pch.h"
#include "menu.h"
#include <iostream>
#include <string>
#include "imageProcessing.h"

using namespace std;

ImageProcessing imgProcessor;
string filename;

void Menu::run() {
	int choice;

	do {
		choice = selectOptions();
		cout << endl;
		switch (choice) {
		case 1:
			cout << choice << endl;
			loadImage();
			break;
		case 2:
			cout << choice << endl;
			saveImage();
			break;
		case 3:
			cout << choice << endl;
			rotateImage();
			break;
		case 4:
			cout << choice << endl;
			flipVerticallyImage();
			break;
		case 5:
			cout << choice << endl;
			flipHorizontallyImage();
			break;
		case 6:
			cout << choice << endl;
			greyscaleImage();
			break;
		case 7:
			cout << "Thank you for using! Bye!" << endl;
			
		}
	} while (choice != 7);

}

int Menu::selectOptions() {
	int choice;
	cout << endl;
	cout << "Welcome to the PGM File Editor:" << endl;
	cout << "1. Load an image." << endl;
	cout << "2.Save Image." << endl;
	cout << "3. Rotate image." << endl;
	cout << "4. Flip image Vertically(x-axis)." << endl;
	cout << "5. Flip image Horizontally(y-axis)." << endl;
	cout << "6. Convert to greyscale." << endl;
	cout << "7. Quit." << endl;
	cout << "Input your choice: ";
	cin >> choice;
	while (choice > 7 || choice < 0) {
		cout << "Invalid choice. Input 1 to 7 only!" << endl;
		cout << "Input your choice: ";
		cin >> choice;
	}
	return choice;
}

Menu::Menu(ImageProcessing imageProcessing) {

}

void Menu::loadImage() {
	cout << "loadImage" << endl;
	//enter file name
	string filename;
		//= "proj4testimage.pgm";

	cout << "Enter filename followed by .pgm: ";
	cin >> filename;

	while (filename.length() > 31) {
		cout << "Enter filename followed by .pgm, must be less than 31 characters: ";
		cin >> filename;
	}

	imgProcessor.readImage(filename);
}

void Menu::saveImage() {
	cout << "saveImage" << endl;

	string filename;

	cout << "Enter filename followed by .pgm: ";
	cin >> filename;

	while (filename.length() > 31) {
		cout << "Enter filename followed by .pgm, must be less than 31 characters: ";
		cin >> filename;
	}

	imgProcessor.saveImage(filename);
}


void Menu::rotateImage() {

	// get user choice of rotation
	int choice;
	cout << endl;
	cout << "Roate my image:" << endl;
	cout << "1. 90 degrees clockwise." << endl;
	cout << "2. 180 degrees clockwise." << endl;
	cout << "3. 270 degrees clockwise." << endl;
	cout << "4. Quit." << endl;
	cout << "Input your choice: ";
	cin >> choice;
	while (choice > 4 || choice < 0) {
		cout << "Invalid choice. Input 1 to 4 only!" << endl;
		cout << "Input your choice: ";
		cin >> choice;
	}
	switch (choice) {
	case 1:
		cout << choice << endl;
		imgProcessor.rotateImage90();
		break;
	case 2:
		cout << choice << endl;
		imgProcessor.rotateImage180();
		break;
	case 3:
		cout << choice << endl;
		imgProcessor.rotateImage270();
		break;
	}
}

void Menu::flipVerticallyImage() {
	cout << "flipVerticallyImage" << endl;
	imgProcessor.verticalFlip();

}
void Menu::flipHorizontallyImage() {
	cout << "flipHorizontallyImage" << endl;
	imgProcessor.horizontalFlip();
}
void Menu::greyscaleImage() {
	cout << "greyscaleImage" << endl;
	imgProcessor.grayscale();
}
