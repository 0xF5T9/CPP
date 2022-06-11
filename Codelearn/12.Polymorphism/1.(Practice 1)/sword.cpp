#include "C:\Users\truon\Desktop\C++\Codelearn\16.Polymorphism\(Practice 1)\sword.h"

void Sword::Initialize(std::string type)
{
    if (type == "WOODEN") {setAttackDamage(4);setAttackSpeed(1.6);if (getName() == "") {setName("Wooden Sword");}}
    else if (type == "GOLDEN") {setAttackDamage(4);setAttackSpeed(1.6);if (getName() == "") {setName("Golden Sword");}}
    else if (type == "STONE") {setAttackDamage(5);setAttackSpeed(1.6);if (getName() == "") {setName("Stone Sword");}}
    else if (type == "IRON") {setAttackDamage(6);setAttackSpeed(1.6);if (getName() == "") {setName("Iron Sword");}}
    else if (type == "DIAMOND") {setAttackDamage(7);setAttackSpeed(1.6);if (getName() == "") {setName("Diamond Sword");}}
    else if (type == "NETHERITE") {setAttackDamage(8);setAttackSpeed(1.6);if (getName() == "") {setName("Netherite Sword");}}
    else {std::cout << "[*] (Class:Sword) Invalid type, creating default item" << std::endl;setAttackDamage(4);setAttackSpeed(1.6);if (getName() == "") {setName("Wooden Sword");}}
}

void Sword::ShowInfo() 
{
    Item::ShowInfo();
    std::cout << "Attack Damage: " << this->getAttackDamage() << "\n";
    std::cout << "Attack Speed: " << this->getAttackSpeed() << std::endl;
}