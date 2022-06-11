#pragma once
#include <iostream>

class Person 
{
private:
    std::string name;
    int dob;
public:
    Person(std::string name, int dob): name(name), dob(dob) {
        std::cout << "[Debug#Person]: Default constructor called" << std::endl;
    }
    ~Person() {
        std::cout << "[Debug#Person]: Destructor called" << std::endl;
    }
public:
    void setName(std::string name);
    std::string getName();
    void setDob(int dob);
    int getDob();
};