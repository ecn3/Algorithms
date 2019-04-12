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
	Transaction transactions[10];

public:
	// TODO: constructor definition

	

	int numTransaction = 0;

	void addTransaction(double profit, std::string name);

	void printSummary();

	bool voidTransaction(int id);

	int getTransactionsByID(int id);
	Transaction getTransactionsByIndex(int num);

	int randomGenerator(int id);



	Ledger();

	//Ledger(Transaction transactions[]);

};


#endif //LEDGER_H
