#pragma once
#include "C:\Users\truon\Desktop\C++\Codelearn\17.Relation between objects\Calculate triangle perimeter given three points (Practice 1)\point.h"

class Shape
{
public:

    /*  DEBUG   */
    static const int DEBUG_LEVEL = 2;

public:

    /*  Constructors & Destructor  */
    Shape() {if (DEBUG_LEVEL >= 1) {std::cout << "[*] (Class: Shape) Default constructor called" << std::endl;}}
    virtual ~Shape() {if (DEBUG_LEVEL >= 1) {std::cout << "[*] (Class: Shape) Destructor called" << std::endl;}}

public:

    /*  Class Functions  */
    virtual double CalculatePerimeter(bool cout = true) = 0;

};

class Triangle: public Shape 
{
private:

    /*  Class Properties (Private)  */
    Point vertical1;
    Point vertical2;
    Point vertical3;
    /*
     *  ↑ Triangle class have Point instances as class property
     */

public:

    /*  Constructors & Destructor  */
    Triangle(Point vertical1, Point vertical2, Point vertical3): Shape(), vertical1(vertical1), vertical2(vertical2), vertical3(vertical3) {if (DEBUG_LEVEL >= 1) {std::cout << "[*] (Class: Triangle) Parameterized 1 constructor called" << std::endl;}}
    Triangle(double x1, double y1, double x2, double y2, double x3, double y3): Shape() {this->vertical1 = Point(x1, y1);this->vertical2 = Point(x2, y2);this->vertical3 = Point(x3, y3);if (DEBUG_LEVEL >= 1) {std::cout << "[*] (Class: Triangle) Parameterized 2 constructor called" << std::endl;}}
    ~Triangle() {if (DEBUG_LEVEL >= 1) {std::cout << "[*] (Class: Triangle) Destructor called" << std::endl;}}

public:

    /*  Class Functions  */
    double CalculatePerimeter(bool cout = true);

};