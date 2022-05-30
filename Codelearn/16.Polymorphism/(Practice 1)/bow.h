#pragma once
#include "C:\Users\truon\Desktop\C++\Codelearn\16.Polymorphism\(Practice 1)\item.h"

class Bow: public Ranged 
{
private:

    /*  Class Properties (Private) */

public:

    /*  Constructors & Destructor   */
    Bow(std::string type): Ranged() {Initialize(type);if (DEBUG_LEVEL >= 2) {std::cout << "[*] (Class:Bow) Default constructor called" << std::endl;}}
    Bow(std::string name, std::string type): Ranged(name) {Initialize(type);if (DEBUG_LEVEL >= 2) {std::cout << "[*] (Class:Bow) Constructor 1 called" << std::endl;}}
    virtual ~Bow() {if (DEBUG_LEVEL >= 2) {std::cout << "[*] (Class:Bow) Destructor called" << std::endl;}}

private:

    /*  Initialize Functions    */
    void Initialize(std::string type);

public:

    /* Class Functions */
    void ShowInfo();

};