/*
 *  Class: Teacher
 *  - Is a derived class of: Person
 */

#pragma once
#include "C:\Users\truon\Desktop\C++\Codelearn\15.Inheritance\Person & Student & Teacher (Practice 3)\person.h"

class Teacher: public Person {
private:

    /*  Class Properties (Private)   */
    int salary;

public:

    /*  Constructors & Destructor   */
    Teacher(std::string name, int age, std::string address, int salary): Person(name, age, address), salary(salary) {
        std::cout << "[Debug#Teacher]: Default constructor called" << std::endl;
    }
    ~Teacher() {
        std::cout << "[Debug#Teacher]: Destructor called" << std::endl;
    }

public:

    /*  Getters & Setters   */
    void setSalary(int salary);
    int getSalary();

public:

    /*  Class Functions   */
    void display();
    
};