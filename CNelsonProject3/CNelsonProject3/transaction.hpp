/*****************************************
** Starter code for COP3014 Project 03 **
*****************************************/

#ifndef TRANSACTION_H
#define TRANSACTION_H


class Transaction {

	double profit, cost, price;
	std::string name, time;
	int id;

public:

	Transaction(); // default constructor

	Transaction(double profit, std::string name, int id, double cost, double price, std::string time); // contructor

	double getProfit();
	std::string getName();
	int getId();

	void setProfit(double profit);
	void setName(std::string name);
	void setId(int it);

	double getCost();
	double getPrice();
	std::string getTime();


	void setCost(double cost);
	void setPrice(double profit);
	void setTime(std::string time);


};


#endif //TRANSACTION_H
