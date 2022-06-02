#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\22.Tests\Student (Practice 2)\student.h"

// Class: Student | Getters & Setters Definitions
void Student::setName(std::string name)
{
    this->name = name;
}

std::string Student::getName()
{
    return this->name;
}

void Student::setMath(double math)
{
    this->math = math;
}

double Student::getMath()
{
    return this->math;
}

void Student::setPhysic(double physic)
{
    this->physic = physic;
}

double Student::getPhysic()
{
    return this->physic;
}

void Student::setChemistry(double chemistry)
{
    this->chemistry = chemistry;
}

double Student::getChemistry()
{
    return this->chemistry;
}

// Class: Student | Class Function Definitions
double Student::getAverage()
{
    double ret = (this->math + this->physic + this->chemistry) / 3;
    return ret;
}

void Student::displayInfo()
{
    std::cout << "Name: " << this->name << "\n";
    std::cout << "Point math: " << this->math << "\n";
    std::cout << "Point physic: " << this->physic << "\n";
    std::cout << "Point chemistry: " << this->chemistry << "\n";
    std::cout << "Average: " << this->getAverage() << std::endl;
}

// Class: Student | Static Class Function Definitions
std::vector<Student> Student::getHighestAverageStudents(std::vector<Student> s)
{
    std::vector<Student> ret;
    double ATH = 0;
    // Find the highest average score in the given vector 's'
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i].getAverage() > ATH) ATH = s[i].getAverage();
    }
    // Find and get the students with highest score into return vector
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i].getAverage() == ATH) ret.push_back(s[i]);
    }
    return ret;
}

std::vector<Student> Student::getHighestMathStudents(std::vector<Student> s)
{
    std::vector<Student> ret;
    double ATH = 0;
    // Find the highest math score in the given vector 's'
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i].getMath() > ATH) ATH = s[i].getMath();
    }
    // Find and get the students with highest score into return vector
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i].getMath() == ATH) ret.push_back(s[i]);
    }
    return ret;
}

std::vector<Student> Student::getHighestPhysicStudents(std::vector<Student> s)
{
    std::vector<Student> ret;
    double ATH = 0;
    // Find the highest physic score in the given vector 's'
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i].getPhysic() > ATH) ATH = s[i].getPhysic();
    }
    // Find and get the students with highest score into return vector
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i].getPhysic() == ATH) ret.push_back(s[i]);
    }
    return ret;
}

std::vector<Student> Student::getHighestChemistryStudents(std::vector<Student> s)
{
    std::vector<Student> ret;
    double ATH = 0;
    // Find the highest chemistry score in the given vector 's'
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i].getChemistry() > ATH) ATH = s[i].getChemistry();
    }
    // Find and get the students with highest score into return vector
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i].getChemistry() == ATH) ret.push_back(s[i]);
    }
    return ret;
}