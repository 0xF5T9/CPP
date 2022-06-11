/*
 *  16.Polymorphism | 1.(Practice 1)
 */

#include <iostream>
#include "C:\Users\truon\Desktop\C++\Codelearn\16.Polymorphism\(Practice 1)\func.h"

int main() 
{
    system("cls"); // Clear Vscode Terminal

    /*  Create objects (Up-casting)  */
    Item* sword1 = new Sword("WOODEN");
    Item* sword2 = new Sword("Just a sword", "IRON");
    Item* sword3 = new Sword("", "DIAMOND");
    Item* bow1 = new Bow("WOODEN");
    Item* bow2 = new Bow("DeathWing", "WOODEN");

    std::cout << std::endl;
    sword1->ShowInfo();
    std::cout << std::endl;
    sword2->ShowInfo();
    std::cout << std::endl;
    sword3->ShowInfo();
    std::cout << std::endl;
    bow1->ShowInfo();
    std::cout << std::endl;
    bow2->ShowInfo();
    std::cout << std::endl;

    delete sword1;
    delete sword2;
    delete sword3;
    delete bow1;
    delete bow2;
    return 0;
}