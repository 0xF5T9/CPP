#pragma once
class people {
private:

public:
	/* Class Properties	*/
	std::string name;
	int age;
	people(): name(""), age(0) {	//	Constructor
		std::cout << "[Debug#people] Constructor called" << std::endl;
	}
	people(const people& _copy): name(_copy.name), age(_copy.age) {	//	Copy Constructor
		std::cout << "[Debug#people] Copy Constructor called" << std::endl;
	}
	~people() {	//	Destructor
		std::cout << "[Debug#people] Destructor called" << std::endl;
	}
	void SetIdentify(char _name, int _age);
	void Shout();
};

