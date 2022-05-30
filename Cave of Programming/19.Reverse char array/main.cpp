/*
* 19.Reverse char array
*/

#include <iostream>	//	Input Output Stream - Standard C++ Library
#include <string>	// string - Standard C++ Library
#include <Windows.h>	// WinAPI - Standard C++ Library

int main() {
	char Hello[] = "Hello world";	//	Char Array
	char* sPointer = &Hello[0];	//	Start Pointer: point to first of the array
	int length = sizeof(Hello) - 1;	//	Get array length, minus '\0'
	char* ePointer = sPointer + length - 1;	//	End Pointer: point to last character of the array

	while (sPointer < ePointer) {
		char save = *sPointer;
		*sPointer = *ePointer;
		*ePointer = save;
		sPointer++;
		ePointer--;
	}
	std::cout << Hello << std::endl;
	return 0;
}
