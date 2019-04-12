/*****************************************
** Starter code for COP3014 Project 03 **
*****************************************/

#include <iostream>
#include <string>
#include <random>
#include <cstdlib>
#include "ledger.hpp"
#include "transaction.hpp"

using namespace std;



void Ledger::addTransaction(double profit, string name) {

	int id = 0;
	id = randomGenerator(id);

	// only create 10 transactions
	if (numTransaction == 9) {
		cout << "Max transactions" << endl;
	}// makes sure dont add if we have 10 transactions
	else {
		Transaction transaction(profit, name, id); // creates new transaction
		transactions[numTransaction] = transaction; // sets transactions array index of num to transaction
		numTransaction++; // increases num transaction
	}
	//test me
	cout << "ledger.addTransaction" << endl;
	cout << "ledger.name: " + name << endl;
	cout << "ledger.profit: " + std::to_string(profit) << endl;
	cout << "ledger.id: " + std::to_string(id) << endl;
}

Ledger::Ledger() {}

Ledger::Ledger(Transaction transactions[]) {


}



void Ledger::printSummary() {
	cout << "ledger.printSummary" << endl;
}

void Ledger::voidTransaction() {
	cout << "ledger.voidTransaction" << endl;

	numTransaction--;
}


int Ledger::randomGenerator(int id) {
	id = rand()% 2000 + 1000;

	return id;
}

Transaction Ledger::getTransactionsByID(int id) {
	try
	{
		return transactions[id];
	}
	catch (exception e) {
		cout << "incorrect id";
	}
}