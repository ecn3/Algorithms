/*****************************************
** Starter code for COP3014 Project 03 **
*****************************************/

#include <iostream>
#include <string>
#include "transaction.hpp"

using namespace std;


void Transaction::createTransaction() {
	cout << "Transaction.createTransaction" << endl;
}
void Transaction::printSummary() {
	cout << "Transaction.printSummary" << endl;
}
void Transaction::updateTransaction() {
	cout << "Transaction.updateTransaction" << endl;
}

Transaction::Transaction(double profit, string name, int id) {
	profit = getProfit();
	name = getName();
	id = getId();
}// implement constructor


double Transaction::getProfit(){
	return profit;
}
string Transaction::getName() {
	return name;
}
int Transaction::getId() {
	return id;
}

void Transaction::setProfit(double profit) {
	profit = this->profit;
}
void Transaction::setName(string name) {
	name = this->name;
}
void Transaction::setId(int id) {
	id = this->id;
}


