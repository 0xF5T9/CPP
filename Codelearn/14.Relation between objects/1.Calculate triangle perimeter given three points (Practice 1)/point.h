/*
 *  Class: Point
 *  Each instance represent a point with x & y
 */

#pragma once
#include <iostream>
#include <math.h>

class Point
{
private:

    /*  DEBUG   */
    static const int DEBUG_LEVEL = 1;

private:

    /*  Class Properties (Private)  */
    double x;
    double y;

public:

    /* Constructors & Destructor */
    Point(): x(0.0), y(0.0) {if (DEBUG_LEVEL >= 1) {std::cout << "[*] (Class: Point) Default constructor called" << std::endl;}}
    Point(double x, double y): x(x), y(y) {if (DEBUG_LEVEL >= 1) {std::cout << "[*] (Class: Point) Parameterized constructor called" << std::endl;}}
    ~Point() {if (DEBUG_LEVEL >= 1) {std::cout << "[*] (Class: Point) Destructor called" << std::endl;}}

public:

    /*  Getters & Setters  */
    void setX(double x);
    double getX();
    void setY(double y);
    double getY();

};