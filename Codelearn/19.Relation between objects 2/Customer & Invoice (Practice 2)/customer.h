#pragma once
#include <iostream>

class Customer
{
public:

    /*  Static Properties  */
    static int CountTotalCustomer;

private:

    /*  Class Properties (Private)  */
    int id;
    std::string name;
    int discount = 0;

public:

    /*  Constructors & Destructor  */
    Customer(): id(CountTotalCustomer) {CountTotalCustomer++;}
    Customer(std::string name): name(name), id(CountTotalCustomer) {CountTotalCustomer++;}
    Customer(std::string name, int discount): name(name), discount(discount), id(CountTotalCustomer) {CountTotalCustomer++;}
    ~Customer() {CountTotalCustomer--;}

public:

    /*  Getters & Setters  */
    void setId(int id);
    int getId();
    void setName(std::string name);
    std::string getName();
    void setDiscount(int discount);
    int getDiscount();

};