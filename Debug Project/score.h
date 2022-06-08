#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <limits>

void ClearCinBuffer();

class Score
{
protected:

	std::string name;
	double math;
	double literature;
	double english;

public:

	Score(std::string name = "", double math = 0, double literature = 0, double english = 0) : name(name), math(math), literature(literature), english(english) {}
	~Score() {}

public:
	
	void setName(std::string name);
	std::string getName() const;
	void setMath(double math);
	double getMath() const;
	void setLiterature(double literature);
	double getLiterature() const;
	void setEnglish(double english);
	double getEnglish() const;
	virtual std::string getBlockType() { return ""; }

public:
	
	virtual void DisplayInfo();
	virtual double BlockA();
	virtual double BlockB();
	virtual double BlockC();
	virtual double AveragePoint() = 0;
	bool IsPass();
	static double GetMaxAvgPoint(const std::vector<Score*> &s, bool mode = 0);
	static double GetMinAvgPoint(const std::vector<Score*> &s, bool mode = 0);
	static double GetMaxBlockA(const std::vector<Score*> &s, bool mode = 0);
	static double GetMaxBlockB(const std::vector<Score*> &s,bool mode = 0);
	static double GetMaxBlockC(const std::vector<Score*> &s,bool mode = 0);

public:

	friend std::istream& operator>>(std::istream& in, Score& s);
	friend std::ostream& operator<<(std::ostream& out, Score& s);
};

inline std::istream& operator>>(std::istream& in, Score& s)
{
	std::cout << "string'name': ";
	std::getline(in, s.name);
	ClearCinBuffer();
	std::cout << "double'math': ";
	in >> s.math;
	ClearCinBuffer();
	std::cout << "double'literature': ";
	in >> s.literature;
	ClearCinBuffer();
	std::cout << "double'english': ";
	in >> s.english;
	ClearCinBuffer();
	return in;
}

inline std::ostream& operator<<(std::ostream& out, Score& s)
{
	out << "string'name': " << s.name << "\n";
	out << "double'math': " << s.math << "\n";
	out << "double'literature': " << s.literature << "\n";
	out << "double'english': " << s.english << "\n";
	return out;
}