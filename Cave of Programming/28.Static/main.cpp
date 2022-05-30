/*
* 28.Static
*/

#include <iostream>
#include "people.h"

int main() {

	std::cout << "Int static const (MAX): " << people::MAX << std::endl;	//	Static const variable should be placed in public access specifiers (*1 'people.h')
	std::cout << "String static (sString): " << people::sString << std::endl;	//	Access public static variable (2* 'people.h')
	people::sString = "Hello world 1"; std::cout << "String static (sString): " << people::sString << std::endl;	//	Modify public static variable (2* 'people.h')

	std::cout << std::endl;

	std::cout << "Total object (people): " << people::GetTotalObject() << std::endl;	//	Accessing private static variable via private static function
	people pp1;	//	Private static variable being modified via constructor
	std::cout << "Total object (people): " << people::GetTotalObject() << std::endl;	//	Accessing private static variable via private static function
	people pp2;
	std::cout << "Total object (people): " << people::GetTotalObject() << std::endl;	//	Accessing private static variable via private static function

	return 0;
}