/*****************************************
 ** Starter code for COP3014 Project 03 **
 *****************************************/

/*  Author: Christian Nelon
 *  COP3014 - Project 3
 *  Revision #: TODO
 */

#include <iostream>
#include "transaction.hpp"
#include "ledger.hpp"
#include "textmenu.hpp"

int main() {
    Ledger ledger;
    TextMenu menu(ledger);
    menu.run();
}

