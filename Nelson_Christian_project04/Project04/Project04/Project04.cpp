#include "pch.h"
#include<iostream>  
#include "menu.h"
#include "Project04.h"

using namespace std;

int main()
{
	ImageProcessing imageProcessing;
	Menu menu(imageProcessing);
	menu.run();
	return 0;
}