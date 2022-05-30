/*
* 31.Polymorphism (Abstract Class)
* https://codelearn.io/sharing/abstract-class-va-interface-trong-cpp
*/

#include <iostream>
#include "item.h"

int main() {

	item* Sword = new wooden_sword();
	item* Sword2 = new stone_sword();
	item* Sword3 = new iron_sword();
	item* Sword4 = new wooden_sword("Hien Vien Kiem");
	item* Sword5 = new stone_sword("Tam Hop Kiem");
	item* Sword6 = new iron_sword("Kiem Tre Trau");

	std::cout << "-------------------------------" << std::endl; std::cout << std::endl;
	Sword->ShowStats(); std::cout << std::endl;
	Sword2->ShowStats(); std::cout << std::endl;
	Sword3->ShowStats(); std::cout << std::endl;
	Sword4->ShowStats(); std::cout << std::endl;
	Sword5->ShowStats(); std::cout << std::endl;
	Sword6->ShowStats(); std::cout << std::endl;
	std::cout << "-------------------------------" << std::endl;

	delete Sword;
	delete Sword2;
	delete Sword3;
	delete Sword4;
	delete Sword5;
	delete Sword6;
	return 0;
}