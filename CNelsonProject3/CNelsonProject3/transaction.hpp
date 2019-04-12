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

	double getProfit();
	std::string getName();
	int getId();

	void setProfit(double profit);
	void setName(std::string name);
	void setId(int it);

};


#endif //TRANSACTION_H
