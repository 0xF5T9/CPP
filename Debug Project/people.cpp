#include "people.h"

// Class: People | Getters & Setters Definitions
void People::setName(std::string name)
{
	this->name = name;
}

std::string People::getName() const
{
	return this->name;
}

void People::setAge(int age)
{
	this->age = age;
}

int People::getAge() const
{
	return this->age;
}

void People::setJob(std::string job)
{
	this->job = job;
}

std::string People::getJob() const
{
	return this->job;
}

void People::setId(std::string id)
{
	this->id = id;
}

std::string People::getId() const
{
	return this->id;
}

// Class: People | Class Function Definitions
void People::display() const
{
	std::cout << "Name: " << this->name << "\n";
	std::cout << "Age: " << this->age << "\n";
	std::cout << "Job: ";
	if (this->job == "") std::cout << "<No Job>\n";
	else std::cout << this->job << "\n";
	std::cout << "Id: " << this->id << "\n";
}