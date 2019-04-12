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



void Ledger::addTransaction(double profit, string name, double cost, double price, string time) {

	int id = 0;
	id = randomGenerator(id);

	// only create 10 transactions
	if (numTransaction == 10) {
		cout << "Max transactions" << endl;
	}// makes sure dont add if we have 10 transactions
	else {
		Transaction transaction(profit, name, id, cost, price, time); // creates new transaction
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
	for (int i = 0; i < numTransaction; i++) {

		cout << "Time: " << transactions[i].getTime() << endl;

		cout << "Id: " << transactions[i].getId() << endl;
		cout << "Name: " << transactions[i].getName() << endl;

		cout << "Cost: " << transactions[i].getCost() << endl;
		cout << "Selling Price: " << transactions[i].getPrice() << endl;

		cout << "Profit: " << transactions[i].getProfit() << endl << endl;

	}
}

bool Ledger::voidTransaction(int id) {
	cout << "ledger.voidTransaction" << endl;
	try {
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
	catch (exception e) {
		cout << "No delation allowed you dont have any transactions";
			return false;
	}
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


void Ledger::sortByid() {
	cout << "ledger.sortByid" << endl;

	Transaction temp; // temporary transaction

	for (int i = 0; i < numTransaction; i++){
		for (int j = 0; j < numTransaction - 1; j++){
			if (transactions[j].getId() > transactions[j + 1].getId()){
				temp = transactions[j];

				transactions[j] = transactions[j + 1];

				transactions[j + 1] = temp;
			}
		}
	}

}

void Ledger::sortByName() {
	cout << "ledger.sortByid" << endl;

	Transaction temp; // temporary transaction

	for (int i = 0; i < numTransaction; i++) {
		for (int j = 0; j < numTransaction - 1; j++) {
			if (transactions[j].getName() > transactions[j + 1].getName()) {
				temp = transactions[j];

				transactions[j] = transactions[j + 1];

				transactions[j + 1] = temp;
			}
		}
	}

}

void Ledger::sortByProfit() {
	cout << "ledger.sortByid" << endl;

	Transaction temp; // temporary transaction

	for (int i = 0; i < numTransaction; i++) {
		for (int j = 0; j < numTransaction - 1; j++) {
			if (transactions[j].getProfit() < transactions[j + 1].getProfit()) {
				temp = transactions[j];

				transactions[j] = transactions[j + 1];

				transactions[j + 1] = temp;
			}
		}
	}

}