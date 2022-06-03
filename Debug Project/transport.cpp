#include "transport.h"

// Class: Transport | Getters & Setters Definitions
void Transport::setManufacturer(std::string manufacturer)
{
	this->manufacturer = manufacturer;
}

std::string Transport::getManufacturer()
{
	return this->manufacturer;
}

void Transport::setName(std::string name)
{
	this->name = name;
}

std::string Transport::getName()
{
	return this->name;
}

void Transport::setYear(int year)
{
	this->year = year;
}

int Transport::getYear()
{
	return this->year;
}

void Transport::setSpeed(int speed)
{
	this->speed = speed;
}

int Transport::getSpeed()
{
	return this->speed;
}

// Class: Transport | Class Function Definitions
void Transport::display(bool border)
{
	if (border == 1) std::cout << "----------\n";
	std::cout << "Manufacturer: " << this->manufacturer << "\n";
	std::cout << "Name: " << this->name << "\n";
	std::cout << "Year of manufacturer: " << this->year << "\n";
	std::cout << "Speed: " << this->speed << std::endl;
	if (border == 1) std::cout << "----------" << std::endl;
}