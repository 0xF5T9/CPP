#include <iostream>
#include "people.h"

void people::Breath() {
	std::cout << "- Breathing..." << std::endl;
}

void baby::Cry() {
	std::cout << "- Crying..." << std::endl;
}

void teen::Walk() {
	std::cout << "- Walk..." << std::endl;
}

void adult::Fight() {
	std::cout << "- Fighting..." << std::endl;
}