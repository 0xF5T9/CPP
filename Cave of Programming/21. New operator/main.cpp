/*
* 21.New operator
*/

#include <iostream>	//	Input Output Stream - Standard C++ Library
#include "test.h"
#include "test2.h"

int main() {

	test testObject1;	//	Create a 'test' class object (testObject1) [*1]
	testObject1.SomeString = "Hello world 1"; testObject1.SomeInt = 1; testObject1.SomeDouble = 1.0;	//	Set value for 'testObject1' object
	std::cout << testObject1.SomeString << " " << testObject1.SomeInt << " " << std::fixed << testObject1.SomeDouble << std::endl;	// Cout 'testObject1' property values

	std::cout << std::endl;

	test* testObject2 = new test();	//	Create a 'test' class object & its pointer (testObject2) using "new operator" [*2]
	testObject2->SomeString = "Hello world 2"; testObject2->SomeInt = 2; testObject2->SomeDouble = 2.0;	//	Set value for 'testObject2' object
	std::cout << testObject2->SomeString << " " << testObject2->SomeInt << " " << std::fixed << testObject2->SomeDouble << std::endl;	// Cout 'testObject2' property values

	std::cout << std::endl;

	test2 test2Object1(testObject1);	//	Passing object 'testObject1' reference to object 'test2Object1' | Passed as object because it created as object [*1]
	test2Object1.Print();	// Cout 'testObject1' property values via class function

	std::cout << std::endl;
	
	test2 test2Object2(*testObject2);	//	Passing object 'testObject2' reference to object 'test2Object2' | Passed as pointer because it created via pointer & new operator [*2] 
	test2Object2.Print();	// Cout 'testObject2' property values via class function

	std::cout << std::endl;

	test2Object1.Change();	//	Modify object 'testObject1' property values via class function
	test2Object2.Change();	//	Modify object 'testObject2' property values via class function
	std::cout << testObject1.SomeString << " " << testObject1.SomeInt << " " << std::fixed << testObject1.SomeDouble << std::endl;	// Cout 'testObject1' property values
	std::cout << testObject2->SomeString << " " << testObject2->SomeInt << " " << std::fixed << testObject2->SomeDouble << std::endl;	// Cout 'testObject2' property values

	delete testObject2;	// Object created via new operator must be deleted by "delete <object>;" statement in order for destructor to be called
	return 0;
}