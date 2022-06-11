#pragma once
#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\22.Tests\Food (Practice 8)\food.h"

class CannedFood: public Food
{
private:

	/*  Class Properties (Private)  */
	int numberBox;

public:

	/*  Constructors & Destructor  */
	CannedFood(std::string name = "", double price = 0, int numberBox = 0): Food(name, price), numberBox(numberBox) {}
	~CannedFood() {}

public:

	/*  Getters & Setters  */
	void setNumberBox(int numberBox);
	int getNumberBox() const;

public:

	/*  Class Functions  */
	void DisplayInfo();
	static void SortByNumberBox(std::vector<CannedFood>& cf);
	static void SortByNumberBox(std::vector<Food*>& cf); // test

public:

	/*  Overload Operators  */
	friend std::istream& operator>>(std::istream& in, CannedFood& cf);
	friend std::ostream& operator<<(std::ostream& out, CannedFood& cf);
};

inline std::istream& operator>>(std::istream& in, CannedFood& cf)
{
	std::cout << "int'numberBox': ";
	in >> cf.numberBox;
	ClearCinBuffer();
	return in;
}

inline std::ostream& operator<<(std::ostream& out, CannedFood& cf)
{
	out << "int'numberBox': " << cf.numberBox << std::endl;
	ClearCinBuffer();
	return out;
}