/*
* 26.Inheritance
*/

#include <iostream>
#include "people.h"

int main() {

	people SomePeople;
	std::cout << "[People]: " << std::endl;
	SomePeople.Breath();

	std::cout << std::endl;

	baby SomeBaby;
	std::cout << "[Baby]: " << std::endl;
	SomeBaby.Breath();	//	Subclass will inheritance all of its superclass
	SomeBaby.Cry();		//	Subclass will inheritance all of its superclass

	std::cout << std::endl;

	teen SomeTeen;
	std::cout << "[Teen]: " << std::endl;
	SomeTeen.Breath();	//	Subclass will inheritance all of its superclass
	SomeTeen.Walk();	//	Subclass will inheritance all of its superclass

	std::cout << std::endl;

	adult SomeAdult;
	std::cout << "[Adult]: " << std::endl;
	SomeAdult.Breath();	//	Subclass will inheritance all of its superclass
	SomeAdult.Walk();	//	Subclass will inheritance all of its superclass
	SomeAdult.Fight();	//	Subclass will inheritance all of its superclass

	return 0;
}