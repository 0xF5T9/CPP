/*
 *  Class: Point
 *  - Each instance presents a point (x , y)
 */

#pragma once
#include <iostream>

class Point
{
private:

    /*  DEBUG  */
    static const int DEBUG_LEVEL = 1;

private:

    /*  Class Properties (Private)  */
    int x;
    int y;

public:

    /*  Constructors & Destructor  */
    Point() {if (DEBUG_LEVEL >= 1) {std::cout << "[*] (Class: Point) Default constructor called" << std::endl;}}
    Point(int x, int y): x(x), y(y) {std::cout << "[*] (Class: Point) Parameterized 1 constructor called" << std::endl;}
    ~Point() {std::cout << "[*] (Class: Point) Destructor called" << std::endl;}

public:

    void setX(int x);
    int getX();
    void setY(int y);
    int getY();

};