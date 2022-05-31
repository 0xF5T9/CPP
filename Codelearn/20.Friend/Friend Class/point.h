#pragma once

class Point // Each instance presents a point (w/x & y)
{
private:

    /*  Class Properties (Private)  */
    double x;
    double y;

public:

    /*  Constructor & Destructor  */
    Point(double x = 0, double y = 0): x(x), y(y) {}
    ~Point() {}

public:

    /*  Getters & Setters  */
    // For demonstration purposes, no getters & setters will be declared.
    // 'friend' shouldn't be abused, otherwise it will break the concept of encapsulation in OOP

public:

    /*  Class Friends  */

    // Recognize class 'Line' as a friend, allowing direct access to class private properties
    friend class Line; 

};