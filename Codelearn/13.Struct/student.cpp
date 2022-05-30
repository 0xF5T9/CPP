#include "student.h"

void Students::SetInfo() 
{
    std::cout << "Set name: ";
    std::getline(std::cin, this->name);
    std::cout << "Set age: ";
    std::cin >> this->age;
    std::cout << std::endl;

    // Clear cin buffer
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void Students::ShowInfo() 
{
    std::cout << "My name is " << this->name << ", I'm " << this->age << " years old." << std::endl;
}