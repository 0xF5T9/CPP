#pragma once
class people {
public: //	Public static const variables | 1*
	int static const MAX = 99;		
	//	int static const MAX;	// Compile errors, const variable must be define where it declared

public: //	Public static variables | 2*
	std::string static sString;		
	//	std::string static sString = "default";	//	Compile errors, static variable value can't be define here, defined in 'people.cpp'

private: //	Private static variables
	int static TotalObject;		
	//	int static TotalObject = 0;	//	Compile errors, static variable value can't be define here, defined in 'people.cpp'

public: //	Public static functions
	//int static GetTotalObject();	//	Public static function to access private static variable
	static int GetTotalObject();

private:
	
public:
	people() {	//	Constructor
		TotalObject++;	//	Modify static variable via constuctor, in this case for counting total object created
		std::cout << "[Debug#people]: Constructor called" << std::endl;
	}
	people(const people& _copy) {	//	Copy Constructor
		TotalObject++;
		std::cout << "[Debug#people]: Copy Constructor called" << std::endl;
	}
	~people() {	//	Destructor
		std::cout << "[Debug#people]: Destructor called" << std::endl;
	}
};

