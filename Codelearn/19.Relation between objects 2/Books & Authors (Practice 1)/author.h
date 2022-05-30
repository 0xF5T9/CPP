#pragma once
#include <iostream>
#include <vector>

class Author
{
private:

    /*  DEBUG  */
    static const int DEBUG_LEVEL = 1;

private:

    /*  Class Properties (Private)  */
    std::string name;
    std::string email;

public:

    /*  Constructors & Destructor  */
    Author(std::string name, std::string email): name(name), email(email) {if (DEBUG_LEVEL >= 1) {std::cout << "[*] (Class: Author) Parameterized 1 constructor called" << std::endl;}}
    ~Author() {if (DEBUG_LEVEL >= 1) {std::cout << "[*] (Class: Author) Destructor called" << std::endl;}}

public:

    /*  Getters & Setters  */
    void setName(std::string name);
    std::string getName();
    void setEmail(std::string email);
    std::string getEmail();

};