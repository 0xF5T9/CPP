/*
 *  Class: Person
 *  - Is a superclass of: Student, Teacher
 */

#pragma once
#include <iostream>

class Person {
private:

    /*  Class Properties (Private)   */
    std::string name;
    int age;
    std::string address;

public:

    /*  Constructors & Destructor   */
    Person(std::string name, int age, std::string address): name(name), age(age), address(address) {
        std::cout << "[Debug#Person]: Default constructor called" << std::endl;
    }
    ~Person() {
        std::cout << "[Debug#Person]: Destructor called" << std::endl;
    }

public:

    /*  Getters & Setters   */
    void setName(std::string name);
    std::string getName();
    void setAge(int age);
    int getAge();
    void setAddress(std::string address);
    std::string getAddress();

public:

    /*  Class Functions   */
    void display();

};