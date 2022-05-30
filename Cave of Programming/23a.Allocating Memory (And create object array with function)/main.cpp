/*
* 23.Allocating Memory & Create Object Array with function
*/

#include <iostream>	//	Input Output Stream - Standard C++ Library
#include "object.h"
#include "people.h"


int main() {

	int* x = new int(); *x = 26; //	Create int variable that will be the total number of object array
	people* peopleMO = CreateObjectArray(*x);	//	Create 'people' object array via function

	{char a = 97; int random = 22 + (rand() % 13);	//	Char variable for name and get random age from ran() function
	for (int i = 0; i < *x; i++, a++, random = 22 + (rand() % 13)) {
		peopleMO[i].SetIdentify(a, random);
	}}
	std::cout << std::endl;
	{for (int i = 0; i < *x; i++) {
		peopleMO[i].Shout();
	}std::cout << std::endl;}

	delete x;	//	Variable created via new operator must be deallocate manually using delete; statement
	delete[] peopleMO;	//	Object created via new operator must be deallocate manually using delete; statement
	return 0;
}