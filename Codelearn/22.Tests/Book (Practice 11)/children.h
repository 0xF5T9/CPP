#pragma once
#include "C:\Users\novar\Documents\GitHub\CPP\Codelearn\22.Tests\Book (Practice 11)\person.h"

class Children : public Person
{
public:
    
    /*  Constructors & Destructor  */
    Children(std::string name = "", int age = 0, std::string add = "", std::vector<Book> vb = {}) : Person(name, age, add, vb) {}
    ~Children() {}

public:

    /*  Class Functions  */
    long MoneyPay();
    void Display();
};