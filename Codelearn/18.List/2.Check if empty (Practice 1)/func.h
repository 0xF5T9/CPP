#pragma once
#include <iostream>
#include <string>
#include <limits>
#include <list>

void ClearCinBuffer()
{
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Requires <limits>
}
int GetRandInt(int minimum = 0, int maxmimum = 100)
{
	return rand() % (maxmimum + 1 - minimum) + minimum;
}

class Point {
private:
	int x;
	int y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}
	~Point() {}
public:
	void setX(int x)
	{
		this->x = x;
	}
	int getX() const
	{
		return this->x;
	}
	void setY(int y)
	{
		this->y = y;
	}
	int getY() const
	{
		return this->y;
	}
public:
	void Display() const
	{
		std::cout << "x: " << this->x << " y: " << this->y << std::endl;
	}
public:
	friend std::istream& operator>>(std::istream& in, Point& p)
	{
		std::cout << "int'x': ";
		in >> p.x;
		ClearCinBuffer();
		std::cout << "int'y': ";
		in >> p.y;
		ClearCinBuffer();
		return in;
	}
	friend std::ostream& operator<<(std::ostream& out, Point& p)
	{
		std::cout << "int'x': " << p.x << "\n";
		std::cout << "int'y': " << p.y << "\n";
		return out;
	}
};

void ShowListElements(std::list<int> li, std::string extra = "", bool extraendl = 0)
{
	/*
	* Loop through the given list 'li' via const auto&
	* use 'const' because this function is meant for read-only tasks
	* use 'auto&' for direct access to original items instead of creating copies (Because we need correct memory address to do the compares *)
	*/
	if (extra != "") std::cout << extra;
	for (const auto& x : li)
	{
		std::cout << x;
		if (&x != &li.back()) std::cout << "-"; // * Cout "-" if the current x's memory address isn't match the memory address of 'li' last element
	}
	std::cout << std::endl;
	if (extraendl == 1) std::cout << std::endl;
}

void ShowListElements(std::list<Point> lp, std::string extra = "", bool extraendl = 0)
{
	if (extra != "") std::cout << extra;
	for (const auto& x : lp)
	{
		x.Display();
	}
	if (extraendl == 1) std::cout << std::endl;
}