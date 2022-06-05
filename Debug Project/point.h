#pragma once
#include <iostream>
#include <string>
#include <math.h>

void ClearCinBuffer(); // PROTOTYPE (Defined in 'func.h')

class Point
{
private:
	
	/*  Class Properties (Private)  */
	double x;
	double y;

public:

	/*  Constructors & Destructor  */
	Point(double x = 0, double y = 0): x(x), y(y) {}
	~Point() {}

public:

	/*  Getters & Setters  */
	void setX(double x);
	double getX() const;
	void setY(double y);
	double getY() const;

public:

	/*  Class Functions  */
	static double Distance(const Point& p1, const Point& p2);

public:

	/* Overload Operators  */
	friend std::istream& operator>>(std::istream& in, Point& p);
	friend std::ostream& operator<<(std::ostream& out, Point& p);
	friend Point operator-(const Point& p1, const Point& p2);
};

inline std::istream& operator>>(std::istream& in, Point& p)
{
	std::cout << "double'x': ";
	in >> p.x;
	ClearCinBuffer();
	std::cout << "double'y': ";
	in >> p.y;
	ClearCinBuffer();
	return in;
}

inline std::ostream& operator<<(std::ostream& out, Point& p)
{
	out << "double'x': " << p.x << "\n";
	out << "double'y': " << p.y << "\n";
	return out;
}

/*
* Point somepoint;
* Point p1;
* Point p2;
* somepoint = p1 - p2;
*/
inline Point operator-(const Point& p1, const Point& p2)
{
	Point ret;
	ret.x = p1.x - p2.x;
	ret.y = p1.y - p2.y;
	return ret;
}