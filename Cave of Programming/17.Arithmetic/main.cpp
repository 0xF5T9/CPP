/*
* 17.Arithmetic
*/

#include <iostream>	//	Input Output Stream - Standard C++ Library

/*
* +
* -
* *
* /
* +=
* -=
* *=
* /=
* %
* %=
* precedebce
*/

int main() {

	double value1 = (double)7 / 2;
	std::cout << value1 << std::endl;

	int value2 = (int)7.3;
	std::cout << value2 << std::endl;

	int value3 = 8;
	value3 += 1;
	std::cout << value3 << std::endl;

	int value4 = 10;
	value4 /= 5;
	std::cout << value4 << std::endl;

	int value5 = 13 % 5;
	std::cout << value5 << std::endl;

	double equation = ((5 / 4) % 2) + (2.3 * 6);
	std::cout << equation << std::endl;
	return 0;
}