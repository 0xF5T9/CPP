#include "C:\Users\novar\Documents\GitHub\CPP\Codelearn\22.Tests\Book (Practice 11)\children.h"

// Class: Children | Class Function Definitions
long Children::MoneyPay()
{
    long ret = ((long)this->getVB().size()) * 5000;
    return ret;
}

void Children::Display()
{
    std::cout << "Children!" << std::endl;
    Person::Display();
}