/*****************************************
** Starter code for COP3014 Project 03 **
*****************************************/

#ifndef TRANSACTION_H
#define TRANSACTION_H


class Transaction {

	double profit;
	std::string name;
	int id;

	

public:

	void createTransaction();

	void printSummary();

	void updateTransaction();

	Transaction(double profit, std::string name, int id){} // contructor

};


#endif //TRANSACTION_H
