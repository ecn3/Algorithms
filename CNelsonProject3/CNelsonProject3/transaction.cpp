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

Transaction::Transaction() {}// defualt constructor

Transaction::Transaction(double profit, string name, int id, double cost, double price, string time) {
	this->profit = profit;
	this->name = name;
	this->id = id;
	this->cost = cost;
	this->price = price;
	this->time = time;
}// implement constructor




double Transaction::getProfit(){
	return this->profit;
}
string Transaction::getName() {
	return this->name;
}
int Transaction::getId() {
	return this->id;
}


double Transaction::getCost() {
	return this->cost;
}
double Transaction::getPrice() {
	return this->cost;
}
string Transaction::getTime() {
	return this->time;
}



void Transaction::setProfit(double profit) {
	this->profit = profit;
}
void Transaction::setName(string name) {
	this->name = name;
}
void Transaction::setId(int id) {
	this->id = id;
}


void Transaction::setCost(double cost) {
	this->cost = cost;
}
void Transaction::setPrice(double price) {
	this->price = price;
}
void Transaction::setTime(string time) {
	this->name = time;
}