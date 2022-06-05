#include "triangle.h"

// Class: Triangle | Getters & Setters Definitions
void Triangle::setA(Point A)
{
	this->A = A;
}

Point Triangle::getA()
{
	return this->A;
}

void Triangle::setB(Point B)
{
	this->B = B;
}

Point Triangle::getB()
{
	return this->B;
}

void Triangle::setC(Point C)
{
	this->C = C;
}

Point Triangle::getC()
{
	return this->C;
}

// Class: Triangle | Class Function Definitions
double Triangle::GetPerimeter(bool cout)
{
	// Triangle perimeter is sum of all three sides.
	double AB = Point::Distance(this->A, this->B);
	double BC = Point::Distance(this->B, this->C);
	double CA = Point::Distance(this->C, this->A);
	double ret = AB + BC + CA;
	if (cout == true) std::cout << "Perimeter: " << ret << std::endl;
	return ret;
}

double Triangle::GetArea(bool cout)
{
	/*
	* Triangle area is square root of s(s - a)(s - b)(s - c) | √[s(s-a)(s-b)(s-c)]
	* 's' is half of the triangle perimeter
	* a, b, c are sides of the triangle
	*/
	double AB = Point::Distance(this->A, this->B);
	double BC = Point::Distance(this->B, this->C);
	double CA = Point::Distance(this->C, this->A);
	double s = this->GetPerimeter() / 2;
	
	double ret = std::sqrt(s * (s - AB) * (s - BC) * (s - CA));
	if (cout == true) std::cout << "Area: " << ret << std::endl;
	return ret;
}

Point Triangle::GetCenterCoor(bool cout)
{
	Point ret;
	ret.setX((this->A.getX() + this->B.getX() + this->C.getX()) / 3);
	ret.setY((this->A.getY() + this->B.getY() + this->C.getY()) / 3);
	if (cout == true) std::cout << "Center Coordinate: x(" << ret.getX() << ") y(" << ret.getY() << ")" << std::endl;
	return ret;
}

bool Triangle::IsValidTriangle(bool cout)
{
	double AB = Point::Distance(this->A, this->B);
	double BC = Point::Distance(this->B, this->C);
	double CA = Point::Distance(this->C, this->A);
	if (AB + BC > CA && BC + CA > AB && CA + AB > BC && AB > 0 && BC > 0 && CA > 0)
	{
		if (cout == true) std::cout << "The triangle is valid" << std::endl;
		return true;
	}
	else
	{
		if (cout == true) std::cout << "The triangle is invalid" << std::endl;
		return false;
	}
}

void Triangle::DisplayInfo(bool border, bool cout)
{
	if (border == 1) std::cout << "------------------------------\n";
	this->GetPerimeter(cout);
	this->GetArea(cout);
	this->GetCenterCoor(cout);
	this->IsValidTriangle(cout);
	if (border == 1) std::cout << "------------------------------" << std::endl;
}