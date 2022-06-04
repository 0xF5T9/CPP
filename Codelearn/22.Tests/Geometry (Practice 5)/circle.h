#pragma once
#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\22.Tests\Geometry (Practice 5)\geometry.h"

void ClearCinBuffer(); // Prototype (Defined in 'func.h')

class Circle: public Geometry
{
private:

	/*  Class Properties (Private & Const)  */
	const std::string type = "Circle";

private:

	/*  Class Properties (Private)  */
	int r;

public:

	/*  Constructors & Destructor  */
	Circle(int r): Geometry(), r(r) {}
	~Circle() {}

public:

	/*  Getters & Setters  */
	std::string getType(bool extra)
	{
		std::string ret = this->type + " (radius: " + std::to_string(r) + ")";
		if (extra == 1) return ret;
		else return this->type;
	}
	void setR(int r);
	int getR();

public:

	/*  Class Functions  */
	double getPerimeter();
	double getArea();

public:

	/*  Overload Operators  */
	friend std::istream& operator>>(std::istream& in, Circle& c);
	friend std::ostream& operator<<(std::ostream& out, Circle& c);
};

inline std::istream& operator>>(std::istream& in, Circle& c) // In Overload Operator Definition
{
	std::cout << "--\n";
	std::cout << "In Overload Operator\n";
	std::cout << "Enter value for int'r': ";
	in >> c.r;
	ClearCinBuffer();
	std::cout << "--" << std::endl;
	return in;

}

inline std::ostream& operator<<(std::ostream& out, Circle& c) // Out Overload Operator Definition
{
	std::cout << "--\n";
	std::cout << "Out Overload Operator\n";
	out << "int'r': " << c.r << "\n";
	std::cout << "--" << std::endl;
	return out;
}