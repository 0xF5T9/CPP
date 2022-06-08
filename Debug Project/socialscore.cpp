#include "socialscore.h"

void SocialScore::setCE(double ce)
{
	this->ce = ce;
}
double SocialScore::getCE() const
{
	return this->ce;
}
void SocialScore::setGeography(double geography)
{
	this->geography = geography;
}
double SocialScore::getGeography() const
{
	return this->geography;
}
void SocialScore::setHistory(double history)
{
	this->history = history;
}
double SocialScore::getHistory() const
{
	return this->history;
}
std::string SocialScore::getBlockType()
{
	return this->blocktype;
}


void SocialScore::DisplayInfo()
{
	Score::DisplayInfo();
	std::cout << "[C] CE score: " << this->ce << "\n";
	std::cout << "[C] Geography score: " << this->geography << "\n";
	std::cout << "[C] History score: " << this->history << "\n";
	std::cout << "Average: " << AveragePoint() << " (" << BlockA() + BlockC() << ")" << std::endl;
	std::cout << "Status: ";
	if (IsPass() == 1) std::cout << "Passed" << std::endl;
	else std::cout << "Failed" << std::endl;
}

double SocialScore::BlockC()
{
	double ret = this->ce + this->geography + this->history;
	return ret;
}
double SocialScore::AveragePoint()
{
	double ret = (BlockA() + BlockC()) / 6;
	return ret;
}