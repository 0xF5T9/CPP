#include "score.h"

void Score::setName(std::string name)
{
	this->name = name;
}
std::string Score::getName() const
{
	return this->name;
}
void Score::setMath(double math)
{
	this->math = math;
}
double Score::getMath() const
{
	return this->math;
}
void Score::setLiterature(double literature)
{
	this->literature = literature;
}
double Score::getLiterature() const
{
	return this->literature;
}
void Score::setEnglish(double english)
{
	this->english = english;
}
double Score::getEnglish() const
{
	return this->english;
}


void Score::DisplayInfo()
{
	std::cout << "Name: " << this->name << "\n";
	std::cout << "Registered Block (Elective Subjects): " << getBlockType() << "\n";
	std::cout << "[A] Math score: " << this->math << "\n";
	std::cout << "[A] Literature score: " << this->literature << "\n";
	std::cout << "[A] English score: " << this->english << "\n";
}

double Score::BlockA()
{
	double ret = this->math + this->literature + this->english;
	return ret;
}

double Score::BlockB() { return 0; }

double Score::BlockC() { return 0; }

bool Score::IsPass()
{
	if (AveragePoint() > 5.0) return 1;
	else return 0;
}

double Score::GetMaxAvgPoint(const std::vector<Score*> &s, bool mode)
{
	double ATH = s.front()->AveragePoint();
	std::string name = s.front()->name;
	for (auto x : s)
	{
		if (x->AveragePoint() > ATH) { ATH = x->AveragePoint(); name = x->name; }
	}
	if (mode == 1) std::cout << "The best average score: " << ATH << " | " << name << "\n";
	return ATH;
}

double Score::GetMinAvgPoint(const std::vector<Score*> &s, bool mode)
{
	double ATL = s.front()->AveragePoint();
	std::string name = s.front()->name;
	for (auto x : s)
	{
		if (x->AveragePoint() < ATL) { ATL = x->AveragePoint(); name = x->name; }
	}
	if (mode == 1) std::cout << "The lowest average score: " << ATL << " | " << name << "\n";
	return ATL;
}

double Score::GetMaxBlockA(const std::vector<Score*>& s, bool mode)
{
	double ATH = s.front()->BlockA();
	std::string name = s.front()->name;
	for (auto x : s)
	{
		if (x->BlockA() > ATH) { ATH = x->BlockA(); name = x->name; }
	}
	if (mode == 1) std::cout << "The best score of Block A (Compulsory): " << ATH << " | " << name << "\n";
	return ATH;
}

double Score::GetMaxBlockB(const std::vector<Score*>& s, bool mode)
{
	double ATH = s.front()->BlockB();
	std::string name = s.front()->name;
	for (auto x : s)
	{
		if (x->BlockB() > ATH) { ATH = x->BlockB(); name = x->name; }
	}
	if (mode == 1) std::cout << "The best score of Block B (Elective Subjects): " << ATH << " | " << name << "\n";
	return ATH;
}

double Score::GetMaxBlockC(const std::vector<Score*>& s, bool mode)
{
	double ATH = s.front()->BlockC();
	std::string name = s.front()->name;
	for (auto x : s)
	{
		if (x->BlockC() > ATH) { ATH = x->BlockC(); name = x->name; }
	}
	if (mode == 1) std::cout << "The best score of Block C (Elective Subjects): " << ATH << " | " << name << "\n";
	return ATH;
}