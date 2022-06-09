#pragma once
#include "person.h"

class Adult : public Person
{
public:

    /*  Constructors & Destructor  */
    Adult(std::string name = "", int age = 0, std::string add = "", std::vector<Book> vb = {}) : Person(name, age, add, vb) {}
    ~Adult() {}

public:

    /*  Class Functions  */
    long MoneyPay();
    void Display();
};