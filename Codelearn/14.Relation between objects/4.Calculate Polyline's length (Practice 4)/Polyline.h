#pragma once
#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\19.Relation between objects 2\Calculate Polyline's length (Practice 3)\point.h"
#include <vector>
#include <math.h>

class Polyline
{
private:

    /*  DEBUG  */
    static const int DEBUG_LEVEL = 1;

private:

    /*  Class Properties (Private)  */
    std::vector<Point> points;

public:

    /*  Constructors & Destructor  */
    Polyline() {if (DEBUG_LEVEL >= 1) {std::cout << "[*] (Class: Polyline) Default constructor called" << std::endl;}}
    Polyline(std::vector<Point> points): points(points) {if (DEBUG_LEVEL >= 1) {std::cout << "[*] (Class: Polyline) Parameterized 1 constructor called" << std::endl;}}
    ~Polyline() {if (DEBUG_LEVEL >= 1) {std::cout << "[*] (Class: Polyline) Destructor called" << std::endl;}}

public:

    /*  Getters & Setters  */
    void setVPoints(std::vector<Point> points);
    std::vector<Point> getVPoint();

public:

    /*  Class Functions  */
    void appendPoint(Point point);
    void appendPoint(int x, int y);
    double getLength(bool cout = false);

};