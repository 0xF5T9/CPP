#include "C:\Users\truon\Desktop\C++\Codelearn\15.Inheritance\Person & Student & Teacher (Practice 3)\student.h"

/*  Getters & Setters   */
void Student::setGpa(double gpa) 
{
    this->gpa = gpa;
}

double Student::getGpa() 
{
    return this->gpa;
}

/*  Class Functions   */
void Student::display() 
{
    Person::display();
    std::cout << "GPA: " << this->getGpa() << std::endl;
}