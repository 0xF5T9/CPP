/*
 *	14.Class | Account class (Practice)
 */

#include <iostream>
#include "account.h"

int main() {
	Account account1(1000, "Tuan", 2000);
	account1.display();
	account1.withdraw(2100);
	account1.deposit(600);
	std::cout << "Balance: " << account1.getBalance() << std::endl;
	account1.withdraw(2100);
	std::cout << "Balance: " << account1.getBalance() << std::endl;
	return 0;
}