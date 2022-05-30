#include <C:\Users\truon\Desktop\C++\Codelearn\15.Inheritance\Person & Student (Practice 1)\student.h>

void Student::setGPA(double GPA) 
{
    this->GPA = GPA;
}

double Student::getGPA() 
{
    return this->GPA;
}

void Student::Info() 
{
    std::cout << "Name: " << this->getName() << "\n";
    std::cout << "Date of birth: " << this->getDob() << "\n";
    std::cout << "GPA: " << this->getGPA() << std::endl;
}