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
	if (numTransaction == 10) {
		cout << "Max transactions" << endl;
	}// makes sure dont add if we have 10 transactions
	else {
		Transaction transaction(profit, name, id); // creates new transaction
		transactions[numTransaction] = transaction; // sets transactions array index of num to transaction
		numTransaction++; // increases num transaction
	}
	//test me
	cout << "ledger.name: " + getTransactionsByIndex(0).getName() << endl;
	cout << "transaction.name: " + transactions[0].getName() << endl;
	cout << "ledger.profit: " + std::to_string(profit) << endl;
	cout << "ledger.id: " + std::to_string(id) << endl;
}

Ledger::Ledger() {}
/*
Ledger::Ledger(Transaction transactions[]) {


}
*/


void Ledger::printSummary() {
	cout << "ledger.printSummary" << endl;
}

bool Ledger::voidTransaction(int id) {
	cout << "ledger.voidTransaction" << endl;
	int index;

	for (int i = 0; i < numTransaction; i++) {
		if (transactions[i].getId() == id) {
			index = i;
		}
	}// takes in id returns index


	for (int i = index; i < numTransaction; ++i) {
		transactions[i] = transactions[i + 1];
	} // delete by index

	numTransaction--;

	return true;
}


int Ledger::randomGenerator(int id) {
	id = rand()% 2000 + 1000;

	return id;
}

int Ledger::getTransactionsByID(int id) {
	int i;
	for (i = 0; i < numTransaction; i++) {
		if (transactions[i].getId() == id) {
			return i;
		}

		}


}

Transaction Ledger::getTransactionsByIndex(int num) {

		return transactions[num];

}