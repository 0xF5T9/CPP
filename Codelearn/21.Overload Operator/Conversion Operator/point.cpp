#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\21.Overload Operator\Conversion Operator\point.h"

// Class: Point | Getters & Setters Definitions
void Point::setX(double x)
{
    this->x = x;
}

double Point::getX()
{
    return this->x;
}

void Point::setY(double y)
{
    this->y = y;
}

double Point::getY()
{
    return this->y;
}

// Class: Point | Conversion Operator Definitions
Point::operator double()
{
    return (double)this->x + this->y;
}