#pragma once
#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\22.Tests\Geometry (Practice 5)\geometry.h"

void ClearCinBuffer(); // Prototype (Defined in 'func.h')

class Rectangle: public Geometry
{
private:

	/*  Class Properties (Private & Const)  */
	const std::string type = "Rectangle";

private:

	/*  Class Properties (Private)  */
	int height;
	int width;

public:

	/*  Constructors & Destructor  */
	Rectangle(int height, int width): Geometry(), height(height), width(width) {}
	~Rectangle() {}

public:

	/*  Getters & Setters  */
	std::string getType(bool extra)
	{
		std::string ret = this->type + " (height: " + std::to_string(height) + ", width: " + std::to_string(width) + ")";
		if (extra == 1) return ret;
		else return this->type;
	}
	void setHeight(int height);
	int getHeight();
	void setWidth(int width);
	int getWidth();

public:

	/*  Class Functions  */
	double getPerimeter();
	double getArea();

public:

	/*  Overload Operators  */
	friend std::istream& operator>>(std::istream& in, Rectangle& r);
	friend std::ostream& operator<<(std::ostream& out, Rectangle& r);
};

inline std::istream& operator>>(std::istream& in, Rectangle& r) // In Overload Operator Definition
{
	std::cout << "--\n";
	std::cout << "In Overload Operator\n";
	std::cout << "Enter value for int'height': ";
	in >> r.height;
	ClearCinBuffer();
	std::cout << "Enter value for int'width': ";
	in >> r.width;
	ClearCinBuffer();
	std::cout << "--" << std::endl;
	return in;

}

inline std::ostream& operator<<(std::ostream& out, Rectangle& r) // Out Overload Operator Definition
{
	std::cout << "--\n";
	std::cout << "Out Overload Operator\n";
	out << "int'height': " << r.height << "\n";
	out << "int'width': " << r.width << "\n";
	std::cout << "--" << std::endl;
	return out;
}