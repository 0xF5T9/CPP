#include "C:\Users\novar\Documents\GitHub\CPP\Codelearn\22.Tests\Group (Practice 10)\group.h"

// Class: Group | Getters & Setters Definitions
void Group::setNameGr(std::string nameGr)
{
	this->nameGr = nameGr;
}

std::string Group::getNameGr() const
{
	return this->nameGr;
}

void Group::setFamily(std::vector<Family> f)
{
	this->f = f;
}

std::vector<Family> Group::getFamily() const
{
	return this->f;
}

// Class: Group | Class Function Definitions
void Group::display() const
{
	std::cout << "Total families: " << getNumberFamily() << std::endl;
	for (auto x : this->f)
	{
		std::cout << "============================\n";
		std::cout << "Family [" << x.getNameF() << "]\n";
		std::cout << "---------------\n";
		for (auto a : x.getP())
		{
			a.display();
			if (a.getName() != x.getP().back().getName()) std::cout << "--\n";
		}
		std::cout << "============================\n";
		std::cout << std::endl;
	}
}

int Group::getNumberFamily() const
{
	int ret = (int)this->f.size();
	return ret;
}

double Group::avgAgeGroup(const Group& g, bool mode, bool extraendl)
{
	double ret = 0;
	int totalpeople = 0;
	
	for (auto x : g.f)
	{
		totalpeople += (int)x.getP().size();
		for (auto a : x.getP())
		{
			ret += a.getAge();
		}
	}

	ret /= totalpeople;
	if (mode == 1) std::cout << "Average age of the group: " << ret << std::endl;
	if (extraendl == 1) std::cout << std::endl;
	return ret;
}

std::vector<People> Group::getPeopleHaveNotJob(const Group& g)
{
	std::vector<People> ret;
	for (auto x : g.f)
	{
		for (auto a : x.getP())
		{
			if (a.getJob() == "") ret.push_back(a);
		}
	}
	return ret;
}