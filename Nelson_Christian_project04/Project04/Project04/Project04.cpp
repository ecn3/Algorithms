#include "pch.h"
#include<iostream>  
#include "menu.h"
#include "Project04.h"

using namespace std;

int main()
{

	FileReader fileReader;
	FileWriter fileWriter;
	Menu menu(fileReader, fileWriter);
	menu.run();
	return 0;
}