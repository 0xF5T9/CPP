#pragma once
#include <iostream>
#include <string>

class Subject
{
private:

    /*  Class Properties (Private)  */
    std::string nameSub;
    double point;
    int numberCredit;
    long moneyPerCredit;

public:

    /*  Constructors & Destructor  */
    Subject(std::string nameSub, double point, int numberCredit, long moneyPerCredit): nameSub(nameSub), point(point), numberCredit(numberCredit), moneyPerCredit(moneyPerCredit) {}
    ~Subject() {}

public:

    /*  Getters & Setters  */
    void setNameSub(std::string nameSub);
    std::string getNameSub();
    void setPoint(double point);
    double getPoint();
    void setNumberCredit(int numberCredit);
    int getNumberCredit();
    void setMoneyPerCredit(long moneyPerCredit);
    long getMoneyPerCredit();

public:

    /*  Class Functions  */
    void display();

public:

    /*  Overload Operators  */
    friend std::istream& operator>>(std::istream& in, Subject& s);
    friend std::ostream& operator<<(std::ostream& out, Subject& s);
};

inline std::istream& operator>>(std::istream& in, Subject& s) // In Overload Definition
{
    std::cout << "--\n";
    std::cout << "In Overload Operator\n";
    std::cout << "Enter value for string'nameSub': ";
    std::getline(in, s.nameSub);
    std::cout << "Enter value for double'point': ";
    in >> s.point;
    std::cout << "Enter value for int'numberCredit': ";
    in >> s.numberCredit;
    std::cout << "Enter value for long'moneyPerCredit': ";
    in >> s.moneyPerCredit;
    std::cout << "--" << std::endl;
    return in;
}

inline std::ostream& operator<<(std::ostream& out, Subject& s) // Out Overload Definition
{
    std::cout << "--\n";
    std::cout << "Out Overload Operator\n";
    out << "string'nameSub': " << s.nameSub << "\n";
    out << "double'point': " << s.point << "\n";
    out << "int'numberCredit': " << s.numberCredit << "\n";
    out << "long'moneyPerCredit': " << s.moneyPerCredit << "\n";
    std::cout << "--" << std::endl;
    return out;
}