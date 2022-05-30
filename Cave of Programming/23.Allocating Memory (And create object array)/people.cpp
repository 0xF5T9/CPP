#include <iostream>
#include "people.h"

void people::Shout() {
	std::cout << "My name is " << this->name << " and I'm " << this->age << " years old" << std::endl;
}

void people::SetIdentify(char _name, int _age) {
	this->name = _name;
	this->age = _age;
}