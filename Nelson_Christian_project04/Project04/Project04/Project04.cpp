#include "pch.h"
#include<iostream>  
#include "menu.h"
#include "Project04.h"

using namespace std;

int main()
{
	FileReader filereader;
	Menu menu(filereader);
	menu.run();
	return 0;
}