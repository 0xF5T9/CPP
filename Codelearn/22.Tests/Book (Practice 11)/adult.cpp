#include "C:\Users\novar\Documents\GitHub\CPP\Codelearn\22.Tests\Book (Practice 11)\adult.h"

// Class: Adult | Class Function Definitions
long Adult::MoneyPay()
{
    long ret = ((long)this->getVB().size()) * 5000;
    return ret;
}

void Adult::Display()
{
    std::cout << "Adult!" << std::endl;
    Person::Display();
}