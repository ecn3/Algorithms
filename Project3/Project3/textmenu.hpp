/*****************************************
 ** Starter code for COP3014 Project 03 **
 *****************************************/

#ifndef TEXTMENU_H
#define TEXTMENU_H
#include "ledger.hpp"
 // TODO: include the head file(s) of the class(es) you designed

class TextMenu {

	// TODO: add instance variable(s) of the class(es) you designed
	//double profit;
	//string name;
	//string date;

	int selectOptions();

	void addTransaction();

	void printSummary();

	void voidTransaction();

public:
	// TODO: constructor definition
	TextMenu(Ledger ledger) {
		//profit = 0;
		//name = " ";
		//date = " ";
	}
	void run();
};


#endif //TEXTMENU_H
