#include <iostream>
#include "Header.h"

void program::Welcome() { // Định nghĩa hàm Welcome()
	std::cout << "Welcome to the program!\n";
	std::cout << std::endl;
}

int program::TinhTong(int x, int y) { // Định nghĩa hàm TinhTong()
	int i = x + y;
	return i;
}

double program::SoPI() { // Định nghĩa hàm SoPI()
	double i = 3.14;
	return i;
}

std::string program::Code() { // Định nghĩa hàm Code()
	std::string i = "P@secretcode159";
	return i;
}
