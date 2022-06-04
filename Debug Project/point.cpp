#include "point.h"

void Point::setX(int x)
{
	this->x = x;
}
int Point::getX()
{
	return this->x;
}

void Point::setY(int y)
{
	this->y = y;
}
int Point::getY()
{
	return this->y;
}

void Point::display()
{
	std::cout << this->x << " " << this->y << std::endl;
}