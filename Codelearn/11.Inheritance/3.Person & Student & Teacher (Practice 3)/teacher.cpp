#include "C:\Users\truon\Desktop\C++\Codelearn\15.Inheritance\Person & Student & Teacher (Practice 3)\teacher.h"

/*  Getters & Setters   */
void Teacher::setSalary(int salary) 
{
    this->salary = salary;
}

int Teacher::getSalary() 
{
    return this->salary;
}

/*  Class Functions   */
void Teacher::display() 
{
    Person::display();
    std::cout << "Salary: $" << this->getSalary() << std::endl;
}