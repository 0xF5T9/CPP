#pragma once
#include <iostream>
#include <string>

class Point
{
private:
	int x;
	int y;
public:
	Point(int x = 0, int y = 0): x(x), y(y) {}
	//Point(int x, int y) : x(x), y(y) {}
	~Point() {}

public:
	void setX(int x);
	int getX();
	void setY(int y);
	int getY();
public:
	void display();
};

