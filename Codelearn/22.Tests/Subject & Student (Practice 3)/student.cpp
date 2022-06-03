#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\22.Tests\Subject & Student (Practice 3)\student.h"

// Class: Student | Static Class Function/Property Definitions
int Student::TotalStudents = 0;

// Class: student | Getters & Setters Defintions
void Student::setId(int id)
{
    this->id = id;
}

int Student::getId()
{
    return this->id;
}

void Student::setName(std::string name)
{
    this->name = name;
}

std::string Student::getName()
{
    return this->name;
}

void Student::setSV(std::vector<Subject> s)
{
    this->s = s;
}

std::vector<Subject> Student::getSV()
{
    return this->s;
}

// Class: Student | Class Function Definitions
long Student::getSumMoney()
{
    long ret = 0;
    for (auto x : this->s)
    {
        ret += (x.getNumberCredit() * x.getMoneyPerCredit());
    }
    return ret;
}

double Student::getAverage()
{
    double ret = 0;
    for (auto x : this->s)
    {
        ret += x.getPoint();
    }
    ret /= this->s.size();
    return ret;
}

void Student::display()
{
    std::cout << "Student id: " << this->id << "\n";
    std::cout << "Student name: " << this->name << "\n";
    std::cout << "--[Participated Subjects]--\n";
    for (auto x : this->s)
    {
        x.display();
    }
    std::cout << "--[END]--\n";
    std::cout << "Total paid: " << this->getSumMoney() << "\n";
    std::cout << "Average: " << this->getAverage() << std::endl;
}