#include "person.h"

void Person::setName(std::string name) 
{
    this->name = name;
}

std::string Person::getName() 
{
    return this->name;
}

void Person::setDob(int dob) 
{
    this->dob = dob;
}

int Person::getDob() 
{
    return this->dob;
}