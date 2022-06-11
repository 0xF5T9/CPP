#pragma once
#include <iostream>
#include <vector>
#include <string>

class Student
{
private:

    /*  Class Properties (Private)  */
    std::string name = "";
    double math = 0;
    double physic = 0;
    double chemistry = 0;

public:

    /*  Constructors & Destructor  */
    Student() {}
    Student(std::string name) {}
    Student(std::string name, double math, double physic, double chemistry): name(name), math(math), physic(physic), chemistry(chemistry) {}

public:
    
    /*  Getters & Setters  */
    void setName(std::string name);
    std::string getName();
    void setMath(double math);
    double getMath();
    void setPhysic(double physic);
    double getPhysic();
    void setChemistry(double chemistry);
    double getChemistry();

public:

    /*  Class Functions  */
    double getAverage();
    void displayInfo();

public:

    /*  Class Functions (Static)  */
    static std::vector<Student> getHighestAverageStudents(std::vector<Student> s);
    static std::vector<Student> getHighestMathStudents(std::vector<Student> s);
    static std::vector<Student> getHighestPhysicStudents(std::vector<Student> s);
    static std::vector<Student> getHighestChemistryStudents(std::vector<Student> s);

public:

    /*  Class Overload Operators  */
    friend std::istream& operator>>(std::istream& in, Student& s);
    friend std::ostream& operator<<(std::ostream& out, Student& s);

};

inline std::istream& operator>>(std::istream& in, Student& s)
{
    std::cout << "--\n";
    std::cout << "In Overload Operator\n";
    std::cout << "Enter value for string'name': ";
    std::getline(in, s.name);
    std::cout << "Enter value for double'math': ";
    in >> s.math;
    std::cout << "Enter value for double'physic': ";
    in >> s.physic;
    std::cout << "Enter value for doube'chemistry': ";
    in >> s.chemistry;
    return in;
}

inline std::ostream& operator<<(std::ostream& out, Student& s)
{
    std::cout << "--\n";
    std::cout << "Out Overload Operator\n";
    out << "string'name': ";
    if (s.name == "") out << "<unset>\n";
    else out << s.name << "\n";
    out << "double'math': " << s.math << "\n";
    out << "double'physic': " << s.physic << "\n";
    out << "double'chemistry': " << s.chemistry << std::endl;
    return out;
}