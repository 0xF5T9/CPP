#include "food.h"

// Class: Food | Getters & Setters Definitions
void Food::setName(std::string name)
{
	this->name = name;
}

std::string Food::getName() const
{
	return this->name;
}

void Food::setPrice(double price)
{
	this->price = price;
}

double Food::getPrice() const
{
	return this->price;
}

// Class: Food | Class Function Definitions
void Food::DisplayInfo()
{
	std::cout << "Name: " << this->name << "\n";
	std::cout << "Price: $" << this->price << std::endl;
}