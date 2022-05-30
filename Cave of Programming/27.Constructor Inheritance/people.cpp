#include <iostream>
#include "people.h"

void people::ShoutDNA() {
	std::cout << "My DNA is: " << this->DNA << std::endl;
}

void people::Breath() {
	std::cout << "Breathing..." << std::endl;
}

void baby::Cry() {
	std::cout << "Crying..." << std::endl;
}

void teen::Walk() {
	std::cout << "Walking..." << std::endl;
}

void adult::Fight() {
	std::cout << "Fighting..." << std::endl;
}