/*
 *  Class: Point
 *  - Each instance presents a point (x , y)
 */

#pragma once
#include <iostream>

class Point
{
private:

    /*  Class Properties (Private)  */
    int x;
    int y;

public:

    /*  Constructors & Destructor  */
    Point() {}
    Point(int x, int y): x(x), y(y) {}
    ~Point() {}

public:

    void setX(int x);
    int getX();
    void setY(int y);
    int getY();

};