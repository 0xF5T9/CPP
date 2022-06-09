#include "C:\Users\novar\Documents\GitHub\CPP\Codelearn\22.Tests\Group (Practice 10)\family.h"

// Class: Family | Getters & Setters Definitions
void Family::setNameF(std::string nameF)
{
	this->nameF = nameF;
}

std::string Family::getNameF() const
{
	return this->nameF;
}

void Family::setStatus(std::string status)
{
	this->status = status;
}

std::string Family::getStatus() const
{
	return this->status;
}

void Family::setAdd(std::string add)
{
	this->add = add;
}

std::string Family::getAdd() const
{
	return this->add;
}

void Family::setP(std::vector<People> p)
{
	this->p = p;
}

std::vector<People> Family::getP() const
{
	return this->p;
}

// Class: Family | Class Function Definitions
void Family::display() const
{
	std::cout << "householder's name: " << this->nameF << "\n";
	std::cout << "Number Member: " << this->p.size() << "\n";
	std::cout << "Address: " << this->add << "\n";
	std::cout << "Status: " << this->status << "\n";
	std::cout << "List Information Member" << "\n";
	for (auto x : this->p)
	{
		x.display();
	}
}

std::vector<Family> Family::getPoorHousehold(const std::vector<Family>& f)
{
	std::vector<Family> ret;
	for (auto x : f)
	{
		if (x.status == "poor") ret.push_back(x);
	}
	return ret;
}

std::vector<Family> Family::findFamilySurname(const std::vector<Family>& f, std::string surname)
{
	std::vector<Family> ret;
	for (auto x : f)
	{
		if (x.nameF == surname) ret.push_back(x);
	}
	return ret;
}