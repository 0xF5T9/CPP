/*
* 18.Pointer and Arrays
*/

#include <iostream>	// Input Output Stream - Standard C++ Library

int main() {
	std::string data[] = { "Ichi","Ni","San" };
	std::string* pdata = data; // Pointer: pointed to the first element of the data[] array | std::string* pdata = &data[0]; is the same thing

	{std::cout << "Method 1:" << std::endl;
	for (int i = 0; i < sizeof(data) / sizeof(std::string); i++) {
		std::cout << data[i];
		if (i < (sizeof(data) / sizeof(std::string)) - 1) std::cout << " ";
	}
	std::cout << std::endl; }

	{std::cout << "Method 2:" << std::endl;
	for (int i = 0; i < sizeof(data) / sizeof(std::string); i++, pdata++) {
		std::cout << *pdata;
		if (i < (sizeof(data) / sizeof(std::string)) - 1) std::cout << " ";
	}
	std::cout << std::endl; pdata = data; } // Reset pointer because it have been modified in for() loop

	{std::cout << "Method 2a:" << std::endl;
	for (int i = 0; i < sizeof(data) / sizeof(std::string); i++, pdata += 1) { // +=1 instead of ++ would work as well
		std::cout << *pdata;
		if (i < (sizeof(data) / sizeof(std::string)) - 1) std::cout << " ";
	}
	std::cout << std::endl; }

	{std::string* pdata2 = &data[0]; // Point to the first of the array
	std::string* pedata2 = &data[2]; // Point to the end of the array
	std::cout << "Method 3:" << std::endl;
	while (true) {
		std::cout << *pdata2;
		if (*pdata2 == *pedata2) break;
		std::cout << " ";
		pdata2++;
	}}

	return 0;
}