#pragma once
#include "C:\Users\truon\Desktop\C++\Codelearn\16.Polymorphism\(Practice 1)\item.h"

class Sword: public Melee 
{
private:

    /*  Class Properties (Private) */

public:

    /*  Constructors & Destructor   */
    Sword(std::string type): Melee() {Initialize(type);if (DEBUG_LEVEL >= 2) {std::cout << "[*] (Class:Sword) Default constructor called" << std::endl;}}
    Sword(std::string name, std::string type): Melee(name) {Initialize(type);if (DEBUG_LEVEL >= 2) {std::cout << "[*] (Class:Sword) Constructor 1 called" << std::endl;}}
    virtual ~Sword() {if (DEBUG_LEVEL >= 2) {std::cout << "[*] (Class:Sword) Destructor called" << std::endl;}}

private:

    /*  Initialize Functions    */
    void Initialize(std::string type);

public:

    /* Class Functions */
    void ShowInfo();

};