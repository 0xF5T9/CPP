/*
 *  Class: Student
 *  - Is a derived class of: Person
 */

#pragma once
#include "C:\Users\truon\Desktop\C++\Codelearn\15.Inheritance\Person & Student & Teacher (Practice 3)\person.h"

class Student: public Person {
private:

    /*  Class Properties (Private)   */
    double gpa;

public:

    /*  Constructors & Destructor   */
    Student(std::string name, int age, std::string address, double gpa): Person(name, age, address), gpa(gpa) {
        std::cout << "[Debug#Student]: Default constructor called" << std::endl;
    }
    ~Student() {
        std::cout << "[Debug#Student]: Destructor called" << std::endl;
    }

public:

    /*  Getters & Setters   */
    void setGpa(double gpa);
    double getGpa();

public:

    /*  Class Functions   */
    void display();
    
};