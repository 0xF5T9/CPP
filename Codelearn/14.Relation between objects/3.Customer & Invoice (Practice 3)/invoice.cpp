#include "C:\Users\truon\Desktop\C++\Codelearn\19.Relation between objects 2\Customer & Invoice (Practice 2)\invoice.h"

/*  Initialize Default Static Value */
int Invoice::CountTotalInvoice = 0;

/*  Class: Invoice | Getters & Setters Definitions  */
void Invoice::setId(int id)
{
    this->id = id;
}

int Invoice::getId()
{
    return this->id;
}

void Invoice::setCustomer(Customer customer)
{
    this->customer = customer;
}

Customer Invoice::getCustomer()
{
    return this->customer;
}

void Invoice::setAmount(double amount)
{
    this->amount = amount;
}

double Invoice::getAmount()
{
    return this->amount;
}

/*  Class: Invoice | Class Function Definitions  */
std::string Invoice::getCustomerName(bool cout)
{
    if (cout == true)
        std::cout << "Customer name: " << this->customer.getName() << std::endl;
    return this->customer.getName();
}

double Invoice::getAmountAfterDiscount(bool cout)
{
    if (cout == true) std::cout << "Invoice " << this->getId() << " amount(w/discount " << this->customer.getDiscount() << "%): " << this->amount - (this->amount * this->customer.getDiscount() / 100) << std::endl;
    return this->amount - (this->amount / 100 * this->customer.getDiscount());
}