#pragma once
#include "C:\Users\truon\Desktop\C++\Codelearn\19.Relation between objects 2\Customer & Invoice (Practice 2)\customer.h"

class Invoice
{
private:

    /*  Static Properties  */
    static int CountTotalInvoice;

private:

    /*  Class Properties (Private)  */
    int id;
    Customer customer;
    double amount;

public:

    /*  Constructors & Destructor  */
    Invoice(Customer customer, double amount): id(CountTotalInvoice), customer(customer), amount(amount) {CountTotalInvoice++;}
    Invoice(int id, Customer customer, double amount): id(id), customer(customer), amount(amount) {CountTotalInvoice++;}
    ~Invoice() {}

public:

    /*  Getters & Setters  */
    void setId(int id);
    int getId();
    void setCustomer(Customer customer);
    Customer getCustomer();
    void setAmount(double amount);
    double getAmount();

public:

    /*  Class Functions  */
    std::string getCustomerName(bool cout = false);
    double getAmountAfterDiscount(bool cout = false);

};