/*****************************************
** Starter code for COP3014 Project 03 **
*****************************************/

#include <iostream>
#include <string>
#include <random>
#include <cstdlib>
#include "ledger.hpp"

using namespace std;



void Ledger::addTransaction(double profit, string name) {
	cout << "ledger.addTransaction" << endl;
	cout << "ledger.name: " + name << endl;
	cout << "ledger.profit: " + std::to_string(profit) << endl;
	int id = 0;
	id = randomGenerator(id);
	cout << "ledger.id: " + std::to_string(id) << endl;
}

// TODO: constructor implementation here.

void Ledger::printSummary() {
	cout << "ledger.printSummary" << endl;
}

void Ledger::voidTransaction() {
	cout << "ledger.voidTransaction" << endl;
}


int Ledger::randomGenerator(int id) {
	id = rand()% 2000 + 1000;
	return id;
}