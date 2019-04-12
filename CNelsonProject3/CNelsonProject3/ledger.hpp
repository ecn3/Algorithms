/*****************************************
** Starter code for COP3014 Project 03 **
*****************************************/

#ifndef LEDGER_H
#define LEDGER_H

#include <string>
// TODO: include the head file(s) of the class(es) you designed
#include "transaction.hpp"

class Ledger {

	// TODO: add instance variable(s) of the class(es) you designed
	//double profit;
	//string name;

public:
	// TODO: constructor definition

	Transaction transactions[10];

	int numTransaction = 0;

	void addTransaction(double profit, std::string name);

	void printSummary();

	void voidTransaction();

	Transaction getTransactionsByID(int id);


	int randomGenerator(int id);


	Ledger();


};


#endif //LEDGER_H
