#pragma once
#include "person.h"

class Student: public Person 
{
private:
    double GPA;
public:
    Student(std::string name, int dob, double GPA) {
        setName(name);
        setDob(dob);
        setGPA(GPA);
        std::cout << "[Debug#Student]: Default constructor called" << std::endl;
    }
    ~Student() {
        std::cout << "[Debug#Student]: Destructor called" << std::endl;
    }
public:
    void setGPA(double GPA);
    double getGPA();
    void Info();
};