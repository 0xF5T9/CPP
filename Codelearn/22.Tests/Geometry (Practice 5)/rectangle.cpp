#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\22.Tests\Geometry (Practice 5)\rectangle.h"

// Class: Rectangle | Getters & Setters Definitions
void Rectangle::setHeight(int height)
{
	this->height = height;
}

int Rectangle::getHeight()
{
	return this->height;
}

void Rectangle::setWidth(int width)
{
	this->width = width;
}

int Rectangle::getWidth()
{
	return this->width;
}

// Class: Triangle | Class Function Definitions
double Rectangle::getPerimeter()
{
	// P = 2 * (l + w)
	double ret = 2 * ((double)this->height + (double)this->width);
	return ret;
}

double Rectangle::getArea()
{
	// A = w * l
	double ret = (double)this->height * (double)this->width;
	return ret;
}