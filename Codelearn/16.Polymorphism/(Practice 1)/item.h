#pragma once
#include <iostream>

class Item 
{
public: 
static const int DEBUG_LEVEL = 0;
private:

    /*  Class Properties (Private)  */
    static int entities;
    int id;
    std::string name = "";

public:

    /*  Constructors & Destructor   */
    Item() {this->entities++;this->id = entities;if (DEBUG_LEVEL >= 1) {std::cout << "[*] (Class:Item) Default constructor called" << std::endl;}}
    Item(std::string name): name(name) {this->entities++;this->id = entities;if (DEBUG_LEVEL >= 1) {this->id++;std::cout << "[*] (Class:Item) Constructor 1 called" << std::endl;}}
    virtual ~Item() {if (DEBUG_LEVEL >= 1) {this->id--;std::cout << "[*] (Class:Item) Destructor called" << std::endl;}}

public:

    /*  Getters & Setters   */
    void setId(int id);
    int getId();
    void setName(std::string name);
    std::string getName();

public:

    /*  Class Functions */
    static int GetTotalItems(bool DEBUG = 0);
    virtual void ShowInfo();

};

class Weapon: public Item
{
private:

    /*  Class Properties (Private) */
    int AttackDamage = 0;
    double AttackSpeed = 0;

public:

    /*  Constructors & Destructor   */
    Weapon(): Item() {if (DEBUG_LEVEL >= 2) {std::cout << "[*] (Class:Weapon) Default constructor called" << std::endl;}}
    Weapon(std::string name): Item(name) {if (DEBUG_LEVEL >= 2) {std::cout << "[*] (Class:Weapon) Constructor 1 called" << std::endl;}}
    virtual ~Weapon() {if (DEBUG_LEVEL >= 2) {std::cout << "[*] (Class:Weapon) Destructor called" << std::endl;}}

public:

    /*  Getters & Setters   */
    void setAttackDamage(int AttackDamage);
    int getAttackDamage();
    void setAttackSpeed(double AttackSpeed);
    double getAttackSpeed();

};

class Melee: public Weapon 
{
private:

    /*  Class Properties (Private)  */

public:

    /*  Constructors & Destructor   */
    Melee(): Weapon() {if (DEBUG_LEVEL >= 2) {std::cout << "[*] (Class:Melee) Default constructor called" << std::endl;}}
    Melee(std::string name): Weapon(name) {if (DEBUG_LEVEL >= 2) {std::cout << "[*] (Class:Melee) Constructor 1 called" << std::endl;}}
    virtual ~Melee() {if (DEBUG_LEVEL >= 2) {std::cout << "[*] (Class:Melee) Destructor called" << std::endl;}}

public:

    /*  Getters & Setters   */

};

class Ranged: public Weapon 
{
private:

    /*  Class Properties (Private)  */
    int AttackRange = 0;

public:

    /*  Constructors & Destructor   */
    Ranged(): Weapon() {if (DEBUG_LEVEL >= 2) {std::cout << "[*] (Class:Ranged) Default constructor called" << std::endl;}}
    Ranged(std::string name): Weapon(name) {if (DEBUG_LEVEL >= 2) {std::cout << "[*] (Class:Ranged) Constructor 1 called" << std::endl;}}
    virtual ~Ranged() {if (DEBUG_LEVEL >= 2) {std::cout << "[*] (Class:Ranged) Destructor called" << std::endl;}}

public:

    /*  Getters & Setters   */
    void setAttackRange(int AttackRange);
    int getAttackRange();

};