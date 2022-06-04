#pragma once
#include "geometry.h"

void ClearCinBuffer(); // Prototype (Defined in 'func.h')

class Triangle: public Geometry
{
private:

	/*  Class Properties (Private & Const)  */
	const std::string type = "Triangle";

private:

	/*  Class Properties (Private)  */
	int a;
	int b;
	int c;

public:

	/*  Constructors & Destructor  */
	Triangle(int a, int b, int c): Geometry(), a(a), b(b), c(c) {}
	~Triangle() {}

public:

	/*  Getters & Setters  */
	std::string getType(bool extra)
	{
		std::string ret = this->type + " (a: " + std::to_string(a) + ", b: " + std::to_string(b) + ", c: " + std::to_string(c) + ")";
		if (extra == 1) return ret;
		else return this->type;
	}
	void setA(int a);
	int getA();
	void setB(int b);
	int getB();
	void setC(int c);
	int getC();

public:

	/*  Class Functions  */
	double getPerimeter();
	double getArea();

public:

	/*  Overload Operators  */
	friend std::istream& operator>>(std::istream& in, Triangle& t);
	friend std::ostream& operator<<(std::ostream& out, Triangle& t);
};

inline std::istream& operator>>(std::istream& in, Triangle& t) // In Overload Operator Definition
{
	std::cout << "--\n";
	std::cout << "In Overload Operator\n";
	std::cout << "Enter value for int'a': ";
	in >> t.a;
	ClearCinBuffer();
	std::cout << "Enter value for int'b': ";
	in >> t.b;
	ClearCinBuffer();
	std::cout << "Enter value for int'c': ";
	in >> t.c;
	ClearCinBuffer();
	std::cout << "--" << std::endl;
	return in;
}

inline std::ostream& operator<<(std::ostream& out, Triangle& t) // Out Overload Operator Definition
{
	std::cout << "--\n";
	std::cout << "Out Overload Operator\n";
	out << "int'a': " << t.a << "\n";
	out << "int'b': " << t.b << "\n";
	out << "int'c': " << t.c << "\n";
	std::cout << "--" << std::endl;
	return out;
}