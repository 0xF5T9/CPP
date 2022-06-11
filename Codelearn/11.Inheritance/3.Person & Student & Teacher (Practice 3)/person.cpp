#include "C:\Users\truon\Desktop\C++\Codelearn\15.Inheritance\Person & Student & Teacher (Practice 3)\person.h"

/*  Getters & Setters   */
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

/*  Class Functions   */
void Person::display() 
{
    std::cout << "Name: " << this->getName() << "\n";
    std::cout << "Age: " << this->getAge() << "\n";
    std::cout << "Address: " << this->getAddress() << std::endl;
}