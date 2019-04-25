#include "pch.h"
#include "menu.h"
#include <iostream>
#include <string>

using namespace std;

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
	} while (choice != 4);

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


void Menu::loadImage() {
	cout << "loadImage" << endl;
}

void Menu::saveImage() {
	cout << "saveImage" << endl;
}


void Menu::rotateImage() {
	cout << "rotateImage" << endl;
}

void Menu::flipVerticallyImage() {
	cout << "flipVerticallyImage" << endl;
}
void Menu::flipHorizontallyImage() {
	cout << "flipHorizontallyImage" << endl;
}
void Menu::greyscaleImage() {
	cout << "greyscaleImage" << endl;
}