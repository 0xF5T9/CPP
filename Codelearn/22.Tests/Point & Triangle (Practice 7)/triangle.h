#pragma once
#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\22.Tests\Point & Triangle (Practice 7)\point.h"

class Triangle
{
private:

	/*  Class Properties (Private)  */
	Point A;
	Point B;
	Point C;

public:

	/*  Constructors & Destructor  */
	Triangle(Point A = Point(0, 0), Point B = Point(0, 0), Point C = Point(0,0)): A(A), B(B), C(C) {} // Constructor 1
	Triangle(double x1, double y1, double x2, double y2, double x3, double y3):
		A(Point(x1, y1)), B(Point(x2, y2)), C(Point(x3, y3)) {}	// Constructor 2
	~Triangle() {}

public:

	/*  Class Functions  */
	double GetPerimeter(bool cout = 0);
	double GetArea(bool cout = 0);
	Point GetCenterCoor(bool cout = 0);
	bool IsValidTriangle(bool cout = 0);
	void DisplayInfo(bool border = 0, bool cout = 1);

public:

	/*  Getters & Setters  */
	void setA(Point A);
	Point getA();
	void setB(Point B);
	Point getB();
	void setC(Point C);
	Point getC();
};

