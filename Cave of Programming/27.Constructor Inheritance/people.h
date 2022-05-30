#pragma once
class people {
private:
	int DNA;
public:
	people(): DNA(NULL) {	//	Constructor
		std::cout << "[Debug#people]: Constructor called" << std::endl;
	}
	people(int _DNA) : DNA(_DNA) {	//	Constructor
		std::cout << "[Debug#people]: Parameterized Constructor called" << std::endl;
	}
	people(const people& _copy): DNA(NULL) {	//	Copy Constructor
		std::cout << "[Debug#people]: Copy Constructor called" << std::endl;
	}
	~people() {	//	Destructor
		std::cout << "[Debug#people]: Destructor called" << std::endl;
	}
	void ShoutDNA();
	void Breath();
};

class baby: public people {	//	'baby' is a subclass of 'people'
private:
	// int test = this->DNA; // Error: "is inaccessible" | Subclass can't access its superclass properties directly
public:
	baby() {	//	Constructor
		std::cout << "[Debug#baby]: Constructor called" << std::endl;
	}
	baby(int _DNA): people(_DNA) {	// Constructor									//
		std::cout << "[Debug#baby]: Parameterized Constructor called" << std::endl;	//1* → Subclass doesn't inheritance its superclass's constructors, destructor (but can choose which constructor to be called)
	}																				//
	baby(const baby& _copy) {	//	Copy Constructor
		std::cout << "[Debug#baby]: Copy Constructor called" << std::endl;
	}
	~baby() {	//	Destructor
		std::cout << "[Debug#baby]: Destructor called" << std::endl;
	}
	void Cry();
};

class teen: public baby {	//	'teen' is a subclass of 'baby'
private:

public:
	teen() {	//	Constructor
		std::cout << "[Debug#teen]: Constructor called" << std::endl;
	}
	teen(int _DNA) : baby(_DNA) {	// Constructor
		std::cout << "[Debug#teen]: Parameterized Constructor called" << std::endl;	//1*
	}
	/*
	teen(int _DNA) : people(_DNA) {	// Error: indirect nonvirtual base class is not allowed
									// Subclass can only chose constructor from its superclass (in this case 'baby')
	}								
	*/
	teen(const teen& _copy) {	//	Copy Constructor
		std::cout << "[Debug#teen]: Copy Constructor called" << std::endl;
	}
	~teen() {	//	Destructor
		std::cout << "[Debug#teen]: Destructor called" << std::endl;
	}
	void Walk();
};

class adult: public teen {	//	'adult' is a subclass of 'teen'
private:

public:
	adult() {	//	Constructor
		std::cout << "[Debug#adult]: Constructor called" << std::endl;
	}
	adult(int _DNA): teen(_DNA) {	// Constructor
		std::cout << "[Debug#adult]: Parameterized Constructor called" << std::endl;	//1*
	}
	adult(const adult& _copy) {	//	Copy Constructor
		std::cout << "[Debug#adult]: Copy Constructor called" << std::endl;
	}
	~adult() {	//	Destructor
		std::cout << "[Debug#adult]: Destructor called" << std::endl;
	}
	void Fight();
};



