#pragma once
#define _USE_MATH_DEFINES // Must define before include <math.h> | Enable using predefines such as M_PI
#include <iostream>
#include <string>
#include <limits>
#include <math.h>


class Geometry
{
private:

	/*  Class Properties (Private)  */

public:

	/*  Constructors & Destructor  */
	Geometry() {}
	virtual ~Geometry() {}

public:

	/*  Class Functions  */
	virtual void display(bool border = 0);
	virtual std::string getType(bool extra = 0) = 0;
	virtual double getPerimeter() = 0;
	virtual double getArea() = 0;

};

