#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\22.Tests\Transport & Car (Practice 4)\car.h"

// Class: Car | Getters & Setters Definitions
void Car::setNumberSeat(int numberSeat)
{
	this->numberSeat = numberSeat;
}

int Car::getNumberSeat()
{
	return this->numberSeat;
}

void Car::setEngineType(std::string engineType)
{
	this->engineType = engineType;
}

std::string Car::getEngineType()
{
	return this->engineType;
}

// Class: Car | Class Function Definitions
double Car::getBasicSpeed()
{
	double ret = this->getSpeed() / this->getNumberSeat();
	return ret;
}

void Car::display(bool border)
{
	if (border == 1) std::cout << "----------\n";
	Transport::display();
	std::cout << "Number Seat: " << this->numberSeat << "\n";
	std::cout << "Engine Type: " << this->engineType << "\n";
	std::cout << "Basic Speed: " << this->getBasicSpeed() << std::endl;
	if (border == 1) std::cout << "----------" << std::endl;
}

// Class: Car | Static Class Function Definitions
std::vector<Car> Car::getTopSeatCars(std::vector<Car> c)
{
	std::vector<Car> ret;
	int ATH = 0;
	for (auto x : c)
	{
		if (x.getNumberSeat() > ATH) ATH = x.getNumberSeat(); // Loop through every car in the vector to find the highest seat slots record
	}
	for (auto x : c)
	{
		if (x.getNumberSeat() == ATH) ret.push_back(x); // Get cars with highest seat slots record to 'ret' vector
	}
	return ret;
}

std::vector<Car> Car::getTopSpeedCars(std::vector<Car> c)
{
	std::vector<Car> ret;
	double ATH = 0;
	for (auto x : c)
	{
		if (x.getBasicSpeed() > ATH) ATH = x.getBasicSpeed(); // Loop through every car in the vector to find the highest speed record
	}
	for (auto x : c)
	{
		if (x.getBasicSpeed() == ATH) ret.push_back(x); // Get cars with highest speed record to 'ret' vector
	}
	return ret;
}