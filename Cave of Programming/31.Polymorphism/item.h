#pragma once
#include <iostream>

class item {
private:

public:
	item() {						
		std::cout << "[Debug#item]: Constructor called" << std::endl;
		++CountCreatedItem;
	}
	item(const item& _copy) { exit(1); } //* Copy constructor shouldn't be called
	virtual ~item() {	//* Destructor should be virtual when abstract class is involved
		std::cout << "[Debug#item]: Destructor called" << std::endl;
	}
	static int CountCreatedItem;
	//* Class will become Abstract Class when a virtual function is declared like this:
	virtual void ShowStats() = 0;	//* Its child class will be forced to define the function.
};

class sword: public item {
private:

public:
	sword() : ID(item::CountCreatedItem), Name(""), AttackDamage(NULL), AttackSpeed(NULL) {
		std::cout << "[Debug#item-sword]: Constructor called" << std::endl;
	}
	sword(const sword& _copy) { exit(1); } 
	virtual ~sword() {					
		std::cout << "[Debug#item-sword]: Destructor called" << std::endl;
	}
	int ID;
	std::string Name;
	int AttackDamage;
	int AttackSpeed;
	virtual void ShowStats() = 0; //* This class become abstract and its child class must define the function
};

class wooden_sword : public sword {
private:

public:
	wooden_sword() {
		std::cout << "[Debug#item-sword-wooden_sword]: Constructor called" << std::endl;
		InitStats();
	}
	wooden_sword(std::string _Name) {
		std::cout << "[Debug#item-sword-wooden_swordN]: Constructor called" << std::endl;
		this->Name = _Name;
		InitStats();
	}
	wooden_sword(const wooden_sword& _copy) { exit(1); } 
	virtual ~wooden_sword() {
		std::cout << "[Debug#item-sword-wooden_sword]: Destructor called" << std::endl;
	}
	virtual void InitStats() {
		if (this->Name == "") this->Name = "Wooden Sword";
		this->AttackDamage = 4;
		this->AttackSpeed = 2;
	}
	virtual void ShowStats();
};

class stone_sword : public sword {
private:

public:
	stone_sword() {
		std::cout << "[Debug#item-sword-stone_sword]: Constructor called" << std::endl;
		InitStats();
	}
	stone_sword(std::string _Name) {
		std::cout << "[Debug#item-sword-stone_swordN]: Constructor called" << std::endl;
		this->Name = _Name;
		InitStats();
	}
	stone_sword(const stone_sword& _copy) { exit(1); }
	virtual ~stone_sword() {
		std::cout << "[Debug#item-sword-stone_sword]: Destructor called" << std::endl;
	}
	virtual void InitStats() {
		if (this->Name == "") this->Name = "Stone Sword";
		this->AttackDamage = 7;
		this->AttackSpeed = 3;
	}
	virtual void ShowStats();
};

class iron_sword : public sword {
private:

public:
	iron_sword() {
		std::cout << "[Debug#item-sword-iron_sword]: Constructor called" << std::endl;
		InitStats();
	}
	iron_sword(std::string _Name) {
		std::cout << "[Debug#item-sword-iron_swordN]: Constructor called" << std::endl;
		this->Name = _Name;
		InitStats();
	}
	iron_sword(const iron_sword& _copy) { exit(1); }
	virtual ~iron_sword() {
		std::cout << "[Debug#item-sword-iron_sword]: Destructor called" << std::endl;
	}
	virtual void InitStats() {
		if (this->Name == "") this->Name = "Iron Sword";
		this->AttackDamage = 11;
		this->AttackSpeed = 4;
	}
	virtual void ShowStats();
};

