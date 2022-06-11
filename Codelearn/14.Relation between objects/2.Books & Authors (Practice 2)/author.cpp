#include "C:\Users\truon\Desktop\C++\Codelearn\19.Relation between objects 2\Books & Authors (Practice 1)\author.h"

/* Class: Author | Getters & Setters Definitions  */
void Author::setName(std::string name)
{
    this->name = name;
}

std::string Author::getName()
{
    return this->name;
}

void Author::setEmail(std::string email)
{
    this->email = email;
}

std::string Author::getEmail()
{
    return this->email;
}