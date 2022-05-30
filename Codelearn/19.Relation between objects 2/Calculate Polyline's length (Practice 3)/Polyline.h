#pragma once
#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\19.Relation between objects 2\Calculate Polyline's length (Practice 3)\point.h"
#include <vector>
#include <math.h>

class Polyline
{
private:

    /*  Class Properties (Private)  */
    std::vector<Point> points;

public:

    /*  Constructors & Destructor  */
    Polyline() {}
    Polyline(std::vector<Point> points): points(points) {}
    ~Polyline() {}

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