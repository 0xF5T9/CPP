#include "C:\Users\truon\Desktop\C++\Codelearn\16.Polymorphism\(Practice 1)\item.h"

/*  Static Properties   */
int Item::entities = 0;

/*  Getters & Setters   */
void Item::setId(int id) 
{
    this->id = id;
}
int Item::getId() 
{
    return this->id;
}

void Item::setName(std::string name) 
{
    this->name = name;
}
std::string Item::getName() 
{
    return this->name;
}

void Weapon::setAttackDamage(int AttackDamage) 
{
    this->AttackDamage = AttackDamage;
}
int Weapon::getAttackDamage() 
{
    return this->AttackDamage;
}

void Weapon::setAttackSpeed(double AttackSpeed) 
{
    this->AttackSpeed = AttackSpeed;
}
double Weapon::getAttackSpeed() 
{
    return this->AttackSpeed;
}

void Ranged::setAttackRange(int AttackRange) 
{
    this->AttackRange = AttackRange;
}
int Ranged::getAttackRange() 
{
    return this->AttackRange;
}

/* Class Functions  */
int Item::GetTotalItems(bool DEBUG) 
{
    if (DEBUG == 1) {std::cout << "Total existing items: " << entities << std::endl; return entities;}
    else return entities;
}

void Item::ShowInfo() 
{
    
    if (this->getName() != "") std::cout << "Name: " << this->getName() << "\n";
    else std::cout << "Name: <This item is unnamed>\n";
    std::cout << "ID: " << getId() << std::endl;
}