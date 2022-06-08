#pragma once
#include "C:\Users\novar\Documents\GitHub\CPP\Codelearn\22.Tests\Score (Practice 9)\score.h"

class NaturalScore: public Score
{
private:
	
	/*  Class Properties (Private)  */
	const std::string blocktype = "B";
	double physic;
	double chemistry;
	double biology;

public:

	/*  Constructors & Destructor  */
	NaturalScore(std::string name = "", double math = 0, double literature = 0, double english = 0, double physic = 0, double chemistry = 0, double biology = 0) : Score(name, math, literature, english), physic(physic), chemistry(chemistry), biology(biology) {}
	~NaturalScore() {}

public:

	/*  Getters & Setters  */
	void setPhysic(double physic);
	double getPhysic() const;
	void setChemistry(double chemistry);
	double getChemistry() const;
	void setBiology(double biology);
	double getBiology() const;
	std::string getBlockType();

public:
	
	/*  Class Functions  */
	void DisplayInfo();
	double BlockB();
	double AveragePoint();

public:

	/*  Overload Operators  */
	friend std::istream& operator>>(std::istream& in, NaturalScore& ns);
	friend std::ostream& operator<<(std::ostream& out, NaturalScore& ns);
};

inline std::istream& operator>>(std::istream& in, NaturalScore& ns) // In Overload Operator Definition
{
	std::cout << "double'physic': ";
	in >> ns.physic;
	ClearCinBuffer();
	std::cout << "double'chemistry': ";
	in >> ns.chemistry;
	ClearCinBuffer();
	std::cout << "double'biology': ";
	in >> ns.biology;
	ClearCinBuffer();
	return in;
}

inline std::ostream& operator<<(std::ostream& out, NaturalScore& ns) // Out Overload Operator Definition
{
	out << "double'physic': " << ns.physic << "\n";
	out << "double'chemistry': " << ns.chemistry << "\n";
	out << "double'biology': " << ns.biology << "\n";
	return out;
}