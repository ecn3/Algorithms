/*****************************************
** Starter code for COP3014 Project 03 **
*****************************************/

#include <iostream>
#include <string>
#include "textmenu.hpp"
#include "transaction.hpp"
#include "ledger.hpp"

using namespace std;


void TextMenu::run() {
	int choice;

	do {
		choice = selectOptions();
		cout << endl;
		switch (choice) {
		case 1:
			addTransaction();
			break;
		case 2:
			voidTransaction();
			break;
		case 3:
			printSummary();
			break;
		case 4:
			cout << "Thank you for using! Bye!" << endl;
		}
	} while (choice != 4);

}

int TextMenu::selectOptions() {
	int choice;
	cout << endl;
	cout << "Daily ledger managing system:" << endl;
	cout << "1. Add a transaction." << endl;
	cout << "2. Void a transaction." << endl;
	cout << "3. Print summary." << endl;
	cout << "4. Quit." << endl;
	cout << "Input your choice: ";
	cin >> choice;
	while (choice > 4 || choice < 0) {
		cout << "Invalid choice. Input 1 to 4 only!" << endl;
		cout << "Input your choice: ";
		cin >> choice;
	}
	return choice;
}

void TextMenu::addTransaction() {
	int hour, minute, second;
	string name;
	double cost, price, profit;
	cout << "Please input the time as three integers for hour, minute and second separated by space: ";
	cin >> hour >> minute >> second;
	cout << "Please input the item name: ";
	cin >> name;
	cout << "Please input the item cost: ";
	cin >> cost;
	cout << "Please input the item sale price: ";
	cin >> price;

	profit = (price - cost);
	// TODO: Add a transaction. Communicate with the ledger object.
	ledger.addTransaction(profit, name);
	
}

// TODO: constructor implementation here.

TextMenu::TextMenu(Ledger ledger) {

}


void TextMenu::printSummary() {
	int choice;
	cout << endl;
	cout << "Print summary sorted by:" << endl;
	cout << "1. Transaction id" << endl;
	cout << "2. Item name" << endl;
	cout << "3. Profit" << endl;
	cout << "Input your choice: ";
	cin >> choice;
	cout << endl;
	while (choice < 1 || choice > 3) {
		cout << "Invalid choice! Must between 1 and 3!" << endl;
		cout << "Input your choice: ";
		cin >> choice;
	}
	switch (choice) {
	case 1:
		cout << "id: ";
		int id;
		cin >> id;
		cout << "ledger name" + ledger.getTransactionsByIndex(ledger.getTransactionsByID(id)).getName();
		break;
	case 2:
		// TODO: print summary sorted by name
		break;
	case 3:
		// TODO: print summary sorted by profit
		break;
	}
	cout << endl;
}

void TextMenu::voidTransaction() {
	char choice;
	int id;
	bool succeed = false;
	cout << "You must enter the transaction id to void the transaction." << endl;
	while (true) {
		cout << "Do you want to print the summary first? (y/n)" << endl;
		cin >> choice;
		if (choice == 'y' or choice == 'n')
			break;
		cout << "You must input y for yes or n for no!" << endl;
	}
	if (choice == 'y')
		//ledger.printSummary();
	cout << "Please input the transaction id of the transaction you want to void: ";
	cin >> id;
	// TODO: Remove a transaction. Set the succeed flag.
	if (succeed) {
		cout << "Transaction voided!" << endl;
	}
	else {
		cout << "Invalid transaction id!" << endl;
	}
}
