#include "point.h"

// Class: Point | Getters & Setters Definitions
void Point::setX(double x)
{
	this->x = x;
}

double Point::getX() const
{
	return this->x;
}

void Point::setY(double y)
{
	this->y = y;
}

double Point::getY() const
{
	return this->y;
}

// Class: Point | Class Function Defintions
double Point::Distance(const Point& p1, const Point& p2)
{
	double ret = std::sqrt(pow(p2.getX() - p1.getX(), 2) + pow(p2.getY() - p1.getY(), 2) * 1.0);
	return ret;
}