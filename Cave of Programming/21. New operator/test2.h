#pragma once
#include "test.h"
class test2 {
private:
	test* testObject;
public:
	test2(test& testObject) {	//	Constructor
		this->testObject = &testObject;
		std::cout << "[Debug:#test2] Constructor called" << std::endl;
	}
	~test2() {	//	Destructor
		std::cout << "[Debug:#test2] Destructor called" << std::endl;
	}
	void Print() const {
		std::cout << this->testObject->SomeString << " " << this->testObject->SomeInt << " " << std::fixed << this->testObject->SomeDouble << std::endl;
	}

	void Change() {
		this->testObject->SomeString = "Modified";
		this->testObject->SomeInt = 100;
		this->testObject->SomeDouble = 100.0;
	}
};