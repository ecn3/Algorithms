/*****************************************
 ** Starter code for COP3014 Project 03 **
 *****************************************/

 /*  Author: TODO
  *  COP3014 - Project 3
  *  Revision #: TODO
  */

#include <iostream>
//#include "transaction.hpp"
#include "ledger.hpp"
#include "textmenu.hpp"

int main() {
	Ledger ledger;
	TextMenu menu(ledger);
	//TextMenu menu;
	menu.run();

	system("pause");
	return 0;

}

