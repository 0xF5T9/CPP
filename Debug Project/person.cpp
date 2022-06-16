#include "person.h"

void Person::setName(std::string name)
{
	this->name = name;
}
std::string Person::getName() const
{
	return this->name;
}
void Person::setAge(int age)
{
	this->age = age;
}
int Person::getAge() const
{
	return this->age;
}


void Person::Say()
{
	std::cout << "Hello my name is " << this->name << ", I'm " << this->age << " years old.\n";
}