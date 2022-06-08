#pragma once
#include "score.h"

class SocialScore : public Score
{
private:

	/*  Class Properties (Private)  */
	const std::string blocktype = "C";
	double ce;
	double geography;
	double history;

public:

	/*  Constructors & Destructor  */
	SocialScore(std::string name = "", double math = 0, double literature = 0, double english = 0, double ce = 0, double geography = 0, double history = 0) : Score(name, math, literature, english), ce(ce), geography(geography), history(history) {}
	~SocialScore() {}

public:

	/*  Getters & Setters  */
	void setCE(double ce);
	double getCE() const;
	void setGeography(double geography);
	double getGeography() const;
	void setHistory(double history);
	double getHistory() const;
	std::string getBlockType();

public:

	/*  Class Functions  */
	void DisplayInfo();
	double BlockC();
	double AveragePoint();

public:

	/*  Overload Operators  */
	friend std::istream& operator>>(std::istream& in, SocialScore& ss);
	friend std::ostream& operator<<(std::ostream& out, SocialScore& ss);
};

inline std::istream& operator>>(std::istream& in, SocialScore& ss) // In Overload Operator Definition
{
	std::cout << "double'ce': ";
	in >> ss.ce;
	ClearCinBuffer();
	std::cout << "double'geography': ";
	in >> ss.geography;
	ClearCinBuffer();
	std::cout << "double'history': ";
	in >> ss.history;
	ClearCinBuffer();
	return in;
}

inline std::ostream& operator<<(std::ostream& out, SocialScore& ss) // Out Overload Operator Definition
{
	out << "double'ce': " << ss.ce << "\n";
	out << "double'geography': " << ss.geography << "\n";
	out << "double'history': " << ss.history << "\n";
	return out;
}