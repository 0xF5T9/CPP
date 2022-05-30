#include "C:\Users\truon\Desktop\C++\Codelearn\19.Relation between objects 2\Customer & Invoice (Practice 2)\customer.h"


/*  Initialize Default Static Value */
int Customer::CountTotalCustomer = 0;

/*  Class: Customer | Getters & Setters Definitions  */
void Customer::setId(int id) 
{
    this->id = id;
}

int Customer::getId()
{
    return this->id;
}

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