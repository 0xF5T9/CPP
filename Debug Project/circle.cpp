#include "circle.h"

//#define M_PI 3.14159265358979323846 

// Class: Circle | Getters & Setters Definitions
void Circle::setR(int r)
{
	this->r = r;
}

int Circle::getR()
{
	return this->r;
}

// Class: Circle | Class Function Definitions
double Circle::getPerimeter()
{
	// C = 2 * π * r
	double ret = this->r * 2 * M_PI; 
	return ret;
}

double Circle::getArea()
{
	// A = π * r2
	double ret = std::pow(this->r, 2) * M_PI;
	return ret;
}