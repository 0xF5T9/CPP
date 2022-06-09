#pragma once
#include "family.h"

class Group
{
private:

	/*  Class Properties (Private)  */
	std::string nameGr;
	std::vector<Family> f;

public:
	Group(std::string nameGr = "", std::vector<Family> f = {}): nameGr(nameGr), f(f) {}
	~Group() {}

public:

	/*  Getters & Setters  */
	void setNameGr(std::string nameGr);
	std::string getNameGr() const;
	void setFamily(std::vector<Family> f);
	std::vector<Family> getFamily() const;

public:

	/*  Class Functions  */
	void display() const;
	int getNumberFamily() const;
	static double avgAgeGroup(const Group& g, bool mode = 0, bool extraendl = 0);
	static std::vector<People> getPeopleHaveNotJob(const Group& g);

public:

	/*  Overload Operators  */
	friend std::istream& operator>>(std::istream& in, Group& g);
	friend std::ostream& operator<<(std::ostream& out, Group& g);
};

inline std::istream& operator>>(std::istream& in, Group& g)	// In Overload Operator
{
	std::cout << "string'nameGr': \n";
	std::getline(in, g.nameGr);
	ClearCinBuffer();
	return in;
}

inline std::ostream& operator<<(std::ostream& out, Group& g)	// Out Overload Operator
{
	out << "string'nameGr': " << g.nameGr << "\n";
	return out;
}