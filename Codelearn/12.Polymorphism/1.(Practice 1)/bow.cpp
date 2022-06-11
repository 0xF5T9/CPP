#include "C:\Users\truon\Desktop\C++\Codelearn\16.Polymorphism\(Practice 1)\bow.h"

void Bow::Initialize(std::string type)
{
    if (type == "WOODEN") {setAttackDamage(11);setAttackSpeed(0.4);setAttackRange(10);if (getName() == "") {setName("Wooden Bow");}}
    else {std::cout << "[*] (Class:Bow) Invalid type, creating default item" << std::endl;setAttackDamage(11);setAttackSpeed(0.4);setAttackRange(10);if (getName() == "") {setName("Wooden Bow");}}
}

void Bow::ShowInfo() 
{
    Item::ShowInfo();
    std::cout << "Attack Damage: " << this->getAttackDamage() << "\n";
    std::cout << "Attack Speed: " << this->getAttackSpeed() << "\n";
    std::cout << "Attack Range: " << this->getAttackRange() << std::endl;
}