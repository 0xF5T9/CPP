#pragma once
#include <iostream>
#include <string>

class Customer
{
private:

    /*  Class Properties (Private)  */
    std::string name;
    int discount = 0;

public:

    /*  Constructors & Destructor  */
    Customer(std::string name): name(name) {}
    Customer(std::string name, int discount): name(name), discount(discount) {}
    ~Customer() {}

public:

    /*  Getters & Setters  */
    void setName(std::string name);
    std::string getName();
    void setDiscount(int discount);
    int getDiscount();

public:

    /*  Class Operators  */
    friend std::istream &operator>>(std::istream &in, Customer &c);     // In Overload Operator
    friend std::ostream &operator<<(std::ostream &out, Customer &c);    // Out Overload Operator
};

inline std::istream &operator>>(std::istream &in, Customer &c)
{
    std::cout << "--\nEnter value for string'name': ";
    std::getline(in, c.name); // Alternative: in >> c.name; | getline is recommended for string datatype
    std::cout << "Enter value for int'discount': ";
    in >> c.discount;
    std::cout << "--\n";
    return in;
}

inline std::ostream &operator<<(std::ostream &out, Customer &c)
{
    out << "Name: ";
    if (c.name == "") out << "<no value set> ()\n";
    else out << c.name << "\n";
    out << "Discount: ";
    if (c.discount == 0) out << "<no value set> (0)\n";
    else out << c.discount << "%\n";
    return out;
}