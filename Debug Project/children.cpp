#include "children.h"

// Class: Children | Class Function Definitions
long Children::MoneyPay()
{
    long ret = (this->getVB().size()) * 5000;
    return ret;
}

void Children::Display()
{
    std::cout << "Children!" << std::endl;
    Person::Display();
}