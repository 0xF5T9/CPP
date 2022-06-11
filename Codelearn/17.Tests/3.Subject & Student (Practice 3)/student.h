#pragma once
#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\22.Tests\Subject & Student (Practice 3)\subject.h"
#include <vector>
#include <limits>

class Student
{
private:

    /*  Class Properties (Static)  */
    static int TotalStudents;

private:

    /*  Class Properties (Private)  */
    int id;
    std::string name;
    std::vector<Subject> s;

public:

    /*  Constructors & Destructor  */
    Student(std::string name, std::vector<Subject> s): id(TotalStudents), name(name), s(s) {TotalStudents++;}
    ~Student() {TotalStudents--;}

public:

    void setId(int id);
    int getId();
    void setName(std::string name);
    std::string getName();
    void setSV(std::vector<Subject> s);
    std::vector<Subject> getSV();

public:

    /*  Class Functions */
    long getSumMoney();
    double getAverage();
    void display();

public:

    /* Overload Operators  */
    friend std::istream& operator>>(std::istream& in, Student& st);
    friend std::ostream& operator<<(std::ostream& out, Student& st);
};

inline std::istream& operator>>(std::istream& in, Student& st) // In Overload Operator Definition
{
    std::cout << "--\n";
    std::cout << "In Overload Operator\n";
    std::cout << "Enter value for int'id': ";
    in >> st.id;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Enter value for string'name': ";
    std::getline(in, st.name);
    std::cout << "--" << std::endl;
    return in;
}

inline std::ostream& operator<<(std::ostream& out, Student& st) // Out Overload Operator Definition
{
    std::cout << "--\n";
    std::cout << "Out Overload Operator\n";
    out << "int'id': " << st.id << "\n";
    out << "string'name': " << st.name << "\n";
    std::cout << "--" << std::endl;
    return out;
}