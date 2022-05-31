#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\20.Friend\Friend Class\point.h"
#include <iostream>
#include <math.h>

class Line
{
private:

    /*  Class Properties (Private)  */
    Point p1;
    Point p2;

public:

    /*  Constructors & Destructor  */
    Line() {}
    Line(Point p1, Point p2): p1(p1), p2(p2) {}
    Line(double x1, double y1, double x2, double y2) {p1 = Point(x1, y1); p2 = Point(x2, y2);}
    ~Line() {}

public:

    /*  Class Functions  */
    double getLength(bool cout = false);

};