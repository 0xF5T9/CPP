#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\19.Set\3.Removing 1D duplicates in 2D Vector via Set\person.h"

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


void Person::Say() const
{
	std::cout << "Hello my name is " << this->name << ", I'm " << this->age << " years old.\n";
}