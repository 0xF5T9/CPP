#include "adult.h"

// Class: Adult | Class Function Definitions
long Adult::MoneyPay()
{
    long ret = (this->getVB().size()) * 5000;
    return ret;
}

void Adult::Display()
{
    std::cout << "Adult!" << std::endl;
    Person::Display();
}