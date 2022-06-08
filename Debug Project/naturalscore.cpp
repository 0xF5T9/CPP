#include "naturalscore.h"

// Class: NaturalScore | Getters & Setters Definitions
void NaturalScore::setPhysic(double physic)
{
	this->physic = physic;
}

double NaturalScore::getPhysic() const
{
	return this->physic;
}

void NaturalScore::setChemistry(double chemistry)
{
	this->chemistry = chemistry;
}

double NaturalScore::getChemistry() const
{
	return this->chemistry;
}

void NaturalScore::setBiology(double biology)
{
	this->biology = biology;
}

double NaturalScore::getBiology() const
{
	return this->biology;
}

std::string NaturalScore::getBlockType()
{
	return this->blocktype;
}

// Class: NaturalScore | Class Function Definitions
void NaturalScore::DisplayInfo()
{
	Score::DisplayInfo();
	std::cout << "[B] Physic score: " << this->physic << "\n";
	std::cout << "[B] Chemistry score: " << this->chemistry << "\n";
	std::cout << "[B] Biology score: " << this->biology << "\n";
	std::cout << "Average: " << AveragePoint() << " (" << BlockA() + BlockB() << ")" << std::endl;
	std::cout << "Status: ";
	if (IsPass() == 1) std::cout << "Passed" << std::endl;
	else std::cout << "Failed" << std::endl;
}

double NaturalScore::BlockB()
{
	double ret = this->physic + this->chemistry + this->biology;
	return ret;
}

double NaturalScore::AveragePoint()
{
	double ret = (BlockA() + BlockB()) / 6;
	return ret;
}