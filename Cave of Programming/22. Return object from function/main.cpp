/*
* 22.Return object from function
*/

#include <iostream>	//	Input Output Stream - Standard C++ Library
#include "people.h"
#include "object.h"	//	The header defines create object functions

int main() {

	/*	Create object using function	*/
	people* PeopleMO = CreateObject("Vi", 26);
	PeopleMO->Shout();

	delete PeopleMO;	//	Object created via 'new' operator must be deallocate manually using delete; statement
	return 0;
}