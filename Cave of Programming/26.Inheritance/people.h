#pragma once
class people {
private:

public:
	people() {	//	Constructor

	}
	people(const people& _copy) {	//	Copy Constructor

	}
	~people() {	//	Destructor

	}
	void Breath();
};

class baby: public people {	//	'baby' is a subclass of 'people' & 'people' is a super class of 'baby'
private:

public:
	baby() {	//	Constructor

	}
	baby(const baby& _copy) {	//	Copy Constructor

	}
	~baby() {	//	Destructor

	}
	void Cry();
};

class teen : public baby {	//	'teen' is a subclass of 'baby' & 'baby' is a super class of 'teen'
private:

public:
	teen() {	//	Constructor

	}
	teen(const teen& _copy) {	//	Copy Constructor

	}
	~teen() {	//	Destructor

	}
	void Walk();
};

class adult: public teen {	//	'adult' is a subclass of 'teen' & 'teen' is a super class of 'adult'
private:

public:
	adult() {	//	Constructor

	}
	adult(const adult& _copy) {	//	Copy Constructor

	}
	~adult() {	//	Destructor

	}
	void Fight();
};