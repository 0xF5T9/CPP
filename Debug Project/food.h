#pragma once
#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
#include <vector>

void ClearCinBuffer(); // PROTOTYPE (Defined in 'func.h')

class Food
{
private:

	/*  Class Properties (Private)  */
	std::string name;
	double price;

public:

	/*  Constructors & Destructor  */
	Food(std::string name = "", double price = 0): name(name), price(price) {}
	virtual ~Food() {}

public:

	/*  Getters & Setters  */
	void setName(std::string name);
	std::string getName() const;
	void setPrice(double price);
	double getPrice() const;

public:

	/*  Class Functions  */
	virtual void DisplayInfo();

public:

	/*  Overload Operators  */
	friend std::istream& operator>>(std::istream& in, Food& f);
	friend std::ostream& operator<<(std::ostream& out, Food& f);
};

inline std::istream& operator>>(std::istream& in, Food& f)
{
	std::cout << "string'name': ";
	in >> f.name;
	ClearCinBuffer();
	std::cout << "double'price': ";
	in >> f.price;
	ClearCinBuffer();
	return in;
}

inline std::ostream& operator<<(std::ostream& out, Food& f)
{
	out << "string'name': " << f.name << "\n";
	out << "double'price': " << f.price << std::endl;
	return out;
}

