#pragma once
#include <iostream>
#include <string>

class Transport
{
private:

	/*  Class Properties (Private)  */
	std::string manufacturer;
	std::string name;
	int year;
	int speed;

public:

	/*  Constructors & Destructor  */
	Transport(std::string manufacturer, std::string name, int year, int speed): manufacturer(manufacturer), name(name), year(year), speed(speed) {}
	virtual ~Transport() {}

public:

	/*  Getters & Setters  */
	void setManufacturer(std::string manufacturer);
	std::string getManufacturer();
	void setName(std::string name);
	std::string getName();
	void setYear(int year);
	int getYear();
	void setSpeed(int speed);
	int getSpeed();

public:

	/*  Class Functions  */
	virtual void display(bool border = 0);

public:

	/*  Overload Operators  */
	friend std::istream& operator>>(std::istream& in, Transport& t);
	friend std::ostream& operator<<(std::ostream& out, Transport& t);
};

inline std::istream& operator>>(std::istream& in, Transport& t) // In Overload Operator Definition
{
	std::cout << "--\n";
	std::cout << "In Overload Operator\n";
	std::cout << "Enter value for string'manufacturer': ";
	std::getline(in, t.manufacturer);
	std::cout << "Enter value for string'name': ";
	std::getline(in, t.name);
	std::cout << "Enter value for int'year': ";
	in >> t.year;
	std::cout << "Enter value for int'speed': ";
	in >> t.speed;
	std::cout << "--" << std::endl;
	return in;
}

inline std::ostream& operator<<(std::ostream& out, Transport& t) // Out Overload Operator Definition
{
	std::cout << "--\n";
	std::cout << "Out Overload Operator\n";
	out << "string'manufacturer': ";
	if (t.manufacturer == "") out << "<no value set>\n";
	else out << t.manufacturer << "\n";
	out << "string'name': ";
	if (t.name == "") out << "<no value set>\n";
	else out << t.name << "\n";
	out << "int'year': " << t.year << "\n";
	out << "int'speed': " << t.speed << "\n";
	std::cout << "--" << std::endl;
	return out;
}