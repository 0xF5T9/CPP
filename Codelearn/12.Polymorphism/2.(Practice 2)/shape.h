#pragma once
#include <iostream>

class Shape
{
public:

    /*  DEBUG   */
    static const int DEBUG_LEVEL = 2;

public:

    /*  Constructors & Destructor   */
    Shape() {if (DEBUG_LEVEL >= 1) {std::cout << "[*] (Class:Shape) Default constructor called" << std::endl;}}
    virtual ~Shape() {if (DEBUG_LEVEL >= 1) {std::cout << "[*] (Class:Shape) Destructor called" << std::endl;}}

public:

    /*  Class Functions (Abstract)  */
    virtual double CalculateArea(bool cout = true) = 0;
    virtual double CalculatePerimeter(bool cout = true) = 0;
    // "Shape" become a abstract class because abstract functions is declared
    // You can't create object with abstract class directly
    // Classes that inherit astract class must define abstract functions

};

class Rectangle: public Shape
{
private:

    /*  Class Properties (Private)  */
    double width = 0;
    double length = 0;

public:

    /*  Constructors & Destructor   */
    Rectangle(): Shape() {if (DEBUG_LEVEL >= 2) {std::cout << "[*] (Class:Rectangle) Default constructor called" << std::endl;}}
    Rectangle(double width, double length): Shape(), width(width), length(length) {if (DEBUG_LEVEL >= 2) {std::cout << "[*] (Class:Rectangle) Parameterized constructor called" << std::endl;}}
    ~Rectangle() {if (DEBUG_LEVEL >= 2) {std::cout << "[*] (Class:Rectangle) Destructor called" << std::endl;}}

public:

    /*  Getters & Setters  */
    void setWidth(double width);
    double getWidth();
    void setLength(double length);
    double getLength();
public:

    /*  Class Functions  */
    double CalculateArea(bool cout = true);
    double CalculatePerimeter(bool cout = true);
    
};