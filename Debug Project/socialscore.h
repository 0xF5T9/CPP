#pragma once
#include "score.h"

class SocialScore : public Score
{
private:

	const std::string blocktype = "C";
	double ce;
	double geography;
	double history;

public:

	SocialScore(std::string name = "", double math = 0, double literature = 0, double english = 0, double ce = 0, double geography = 0, double history = 0) : Score(name, math, literature, english), ce(ce), geography(geography), history(history) {}
	~SocialScore() {}

public:

	void setCE(double ce);
	double getCE() const;
	void setGeography(double geography);
	double getGeography() const;
	void setHistory(double history);
	double getHistory() const;
	std::string getBlockType();

public:

	void DisplayInfo();
	double BlockC();
	double AveragePoint();

public:

	friend std::istream& operator>>(std::istream& in, SocialScore& ss);
	friend std::ostream& operator<<(std::ostream& out, SocialScore& ss);
};

inline std::istream& operator>>(std::istream& in, SocialScore& ss)
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

inline std::ostream& operator<<(std::ostream& out, SocialScore& ss)
{
	out << "double'ce': " << ss.ce << "\n";
	out << "double'geography': " << ss.geography << "\n";
	out << "double'history': " << ss.history << "\n";
	return out;
}