#include "triangle.h"

// Class: Triangle | Getters & Setters Definitions
void Triangle::setA(int a)
{
	this->a = a;
}

int Triangle::getA()
{
	return this->a;
}

void Triangle::setB(int b)
{
	this->b = b;
}

int Triangle::getB()
{
	return this->b;
}

void Triangle::setC(int c)
{
	this->c = c;
}

int Triangle::getC()
{
	return this->c;
}

// Class: Triangle | Class Function Definitions
double Triangle::getPerimeter()
{
	// P = a + b + c
	double ret = this->a + this->b + this->c;
	return ret;
}

double Triangle::getArea()
{
	// Area = √[s(s-a)(s-b)(s-c)]
	// s = (a + b + c) / 2
	double p = this->getPerimeter() / 2;
	double ret = std::sqrt(p * (p - a) * (p - b) * (p - c));
	return ret;
}