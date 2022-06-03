#pragma once
#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\22.Tests\Transport & Car (Practice 4)\transport.h"
#include <vector>

void ClearCinBuffer(); // Prototype (Defined in 'func.h')

class Car: public Transport
{
private:

	/*  Class Properties (Private)  */
	int numberSeat;
	std::string engineType;

public:

	/*  Constructors & Destructor  */
	Car(std::string manufacturer, std::string name, int year, int speed, int numberSeat, std::string engineType): Transport(manufacturer, name, year, speed), numberSeat(numberSeat), engineType(engineType) {}
	~Car() {}

public:

	/*  Getters & Setters  */
	void setNumberSeat(int numberSeat);
	int getNumberSeat();
	void setEngineType(std::string engineType);
	std::string getEngineType();

public:

	/*  Class Functions  */
	double getBasicSpeed();
	void display(bool border = 0);

public:

	/*  Class Functions (Static)  */
	static std::vector<Car> getTopSeatCars(std::vector<Car> c);
	static std::vector<Car> getTopSpeedCars(std::vector<Car> c);

public:

	/*  Overload Operators  */
	friend std::istream& operator>>(std::istream& in, Car& c);
	friend std::ostream& operator<<(std::ostream& out, Car& c);
};

inline std::istream& operator>>(std::istream& in, Car& c) // In Overload Operator Definition
{
	std::cout << "--\n";
	std::cout << "In Overload Operator\n";
	std::cout << "Enter value for int'numberSeat': ";
	in >> c.numberSeat;
	ClearCinBuffer();
	std::cout << "Enter value for string'engineType': ";
	std::getline(in, c.engineType);
	std::cout << "--" << std::endl;
	return in;
}

inline std::ostream& operator<<(std::ostream& out, Car& c) // Out Overload Operator Definition
{
	std::cout << "--\n";
	std::cout << "Out Overload Operator\n";
	out << "int'numberSeat': " << c.numberSeat << "\n";
	out << "string'engineType': ";
	if (c.engineType == "") out << "<no value set>\n";
	else out << c.engineType << "\n";
	std::cout << "--" << std::endl;
	return out;
}