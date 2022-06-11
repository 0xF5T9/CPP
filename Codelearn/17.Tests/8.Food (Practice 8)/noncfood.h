#pragma once
#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\22.Tests\Food (Practice 8)\food.h"

class NonCFood : public Food
{
private:

	/*  Class Properties (Private)  */
	double weight;

public:

	/*  Constructors & Destructor  */
	NonCFood(std::string name = "", double price = 0, double weight = 0) : Food(name, price), weight(weight) {}
	~NonCFood() {}

public:

	/*  Getters & Setters  */
	void setWeight(double weight);
	double getWeight() const;

public:

	/*  Class Functions  */
	void DisplayInfo();
	static void SortByWeight(std::vector<NonCFood>& ncf);
	static void SortByWeight(std::vector<Food*>& ncf);

public:

	/*  Overload Operators  */
	friend std::istream& operator>>(std::istream& in, NonCFood& ncf);
	friend std::ostream& operator<<(std::ostream& out, NonCFood& ncf);
};

inline std::istream& operator>>(std::istream& in, NonCFood& ncf)
{
	std::cout << "double'weight': ";
	in >> ncf.weight;
	ClearCinBuffer();
	return in;
}

inline std::ostream& operator<<(std::ostream& out, NonCFood& ncf)
{
	out << "double'weight': " << ncf.weight << std::endl;
	ClearCinBuffer();
	return out;
}