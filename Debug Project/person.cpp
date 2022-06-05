#include "person.h"

// Class: Person | Getters & Setters Definitions
void Person::setName(std::string name)
{
	this->name = name;
}

std::string Person::getName()
{
	return this->name;
}
void Person::setAge(int age)
{
	this->age = age;
}

int Person::getAge()
{
	return this->age;
}

void Person::setAddress(std::string address)
{
	this->address = address;
}
std::string Person::getAddress()
{
	return this->address;
}

void Person::setTel(std::string tel)
{
	this->tel = tel;
}

std::string Person::getTel()
{
	return this->tel;
}

void Person::setSex(std::string sex)
{
	this->sex = sex;
}

std::string Person::getSex()
{
	return this->sex;
}

// Class: Person | Class Function Definitions
void Person::display()
{
	std::cout << "Name: " << this->name << "\n";
	std::cout << "Age: " << this->age << "\n";
	std::cout << "Address: " << this->address << "\n";
	std::cout << "Tel: " << this->tel << "\n";
	std::cout << "Sex: " << this->sex << std::endl;
}

std::vector<Person*> Person::getPersonFromHanoi(std::vector<Person*> p)
{
	std::vector<Person*> ret;
	for (auto x : p)
	{
		if (x->getAddress() == "Hanoi") ret.push_back(x);
	}
	return ret;
}