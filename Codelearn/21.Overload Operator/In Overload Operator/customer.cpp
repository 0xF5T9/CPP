#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\21.Overload Operator\In Overload Operator\customer.h"

// Class: Customer | Getters & Setters Definitions
void Customer::setName(std::string name)
{
    this->name = name;
}

std::string Customer::getName()
{
    return this->name;
}

void Customer::setDiscount(int discount)
{
    this->discount = discount;
}

int Customer::getDiscount()
{
    return this->discount;
}