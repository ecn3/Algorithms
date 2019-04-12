/*****************************************
** Starter code for COP3014 Project 03 **
*****************************************/

#include <iostream>
#include <string>
#include "ledger.hpp"

using namespace std;



void Ledger::addTransaction(double profit, string name) {
	cout << "ledger.addTransaction" << endl;
	cout << "ledger.name: " + name << endl;
	cout << "ledger.profit: " + std::to_string(profit) << endl;
}

// TODO: constructor implementation here.

void Ledger::printSummary() {
	cout << "ledger.printSummary" << endl;
}

void Ledger::voidTransaction() {
	cout << "ledger.voidTransaction" << endl;
}
