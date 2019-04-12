/*****************************************
** Starter code for COP3014 Project 03 **
*****************************************/

#ifndef LEDGER_H
#define LEDGER_H

#include <string>
// TODO: include the head file(s) of the class(es) you designed

class Ledger {

	// TODO: add instance variable(s) of the class(es) you designed
	//double profit;
	//string name;

public:
	// TODO: constructor definition

	void addTransaction(double profit, std::string name);

	void printSummary();

	void voidTransaction();

	int randomGenerator(int id);


};


#endif //LEDGER_H
