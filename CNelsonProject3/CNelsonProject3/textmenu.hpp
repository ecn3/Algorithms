/*****************************************
** Starter code for COP3014 Project 03 **
*****************************************/

#ifndef TEXTMENU_H
#define TEXTMENU_H

// TODO: include the head file(s) of the class(es) you designed
//#include "transaction.hpp"
#include "ledger.hpp"

class TextMenu {

	// TODO: add instance variable(s) of the class(es) you designed

	int selectOptions();

	void addTransaction();

	void printSummary();

	void voidTransaction();

public:
	// TODO: constructor definition

	Ledger ledger[10];

	TextMenu(Ledger ledger[])
	{
		
	}

	void run();
};


#endif //TEXTMENU_H
