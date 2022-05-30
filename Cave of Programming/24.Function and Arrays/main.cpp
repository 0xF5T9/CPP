/*
* 24.Function and Arrays
*/

#include <iostream>
#include <iomanip>
#include <string>
#include "func.h"

int main() {

	/*	Create variables via function	*/
	int* SomeInt = CreateVar(100);
	float* SomeFloat = CreateVar((float)10.0);
	double* SomeDouble = CreateVar(100.0);
	std::string* SomeString = CreateVar("Hello world");
	char* SomeChar = CreateVar('a');

	std::cout << std::endl;

	std::cout << "SomeInt: " << *SomeInt << std::endl;
	std::cout << "SomeFloat: " << std::fixed << std::setprecision(2) << *SomeFloat << std::endl;
	std::cout << "SomeDouble: " << std::fixed << std::setprecision(2) << *SomeDouble << std::endl;
	std::cout << "SomeString: " << *SomeString << std::endl;
	std::cout << "SomeChar: " << *SomeChar << std::endl;

	std::cout << std::endl;

	/*	Create array variables via function	*/
	int* SomeIntArr = CreateVarIntA(5); for (int i = 0, a = 0; i < 5; i++, a++) { SomeIntArr[i] = 100 + a; }
	float* SomeFloatArr = CreateVarFloatA(5); {float a = 0.0; for (int i = 0; i < 5; i++, a++) { SomeFloatArr[i] = 10.0 + a; }}
	double* SomeDoubleArr = CreateVarDoubleA(5); {double a = 0.0; for (int i = 0; i < 5; i++, a++) { SomeDoubleArr[i] = 100.0 + a; }}
	std::string* SomeStringArr = CreateVarStringA(5); for (int i = 0, a = 1; i < 5; i++, a++) { SomeStringArr[i] = "Hello " + std::to_string(a); }
	char* SomeCharArr = CreateVarCharA(5); for (int i = 0; i < 5; i++) { SomeCharArr[i] = (i + 97); }

	std::cout << std::endl;

	std::cout << "SomeIntArr: "; for (int i = 0; i < 5; i++) { std::cout << SomeIntArr[i] << " "; }; std::cout << std::endl;
	std::cout << "SomeFloatArr: "; for (int i = 0; i < 5; i++) { std::cout << std::fixed << std::setprecision(2) << SomeFloatArr[i] << " "; }; std::cout << std::endl;
	std::cout << "SomeDoubleArr: "; for (int i = 0; i < 5; i++) { std::cout << std::fixed << std::setprecision(2) << SomeDoubleArr[i] << " "; }; std::cout << std::endl;
	std::cout << "SomeStringArr: "; for (int i = 0; i < 5; i++) { std::cout << SomeStringArr[i] << " "; }; std::cout << std::endl;
	std::cout << "SomeCharArr: "; for (int i = 0; i < 5; i++) { std::cout << SomeCharArr[i] << " "; }; std::cout << std::endl;

	std::cout << std::endl;

	/*	Deallocate memory for variables created via new operator	*/
	FreeMem(SomeInt);
	FreeMem(SomeFloat);
	FreeMem(SomeDouble);
	FreeMem(SomeString);
	FreeMem(SomeChar);
	FreeMemA(SomeIntArr);
	FreeMemA(SomeFloatArr);
	FreeMemA(SomeDoubleArr);
	FreeMemA(SomeStringArr);
	FreeMemA(SomeCharArr);
	return 0;
}