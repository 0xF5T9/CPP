#pragma once
class test {
private:

public:
	/*	Class Properties	*/
	std::string SomeString;
	int SomeInt;
	double SomeDouble;

	test(): SomeString(""), SomeInt(0), SomeDouble(0.0) {	//	Constructor
		std::cout << "[Debug:#test] Constructor called" << std::endl;
	}
	~test() {	// Destructor
		std::cout << "[Debug:#test] Destructor called" << std::endl;
	}
};

