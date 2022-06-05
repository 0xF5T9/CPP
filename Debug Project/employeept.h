#pragma once
#include "person.h"

class EmployeePT: public Person
{
private:
	
	/*  Class Properties (Private)  */
	int hour;
	long money;

public:

	/*  Constructors & Destructor  */
	EmployeePT(std::string name = "", int age = 0, std::string address = "", std::string tel = "", std::string sex = "", int hour = 0, long money = 0): Person(name, age, address, tel, sex), hour(hour), money(money) {}
	~EmployeePT() {}

public:

	/*  Getters & Setters  */
	void setHour(int hour);
	int getHour();
	void setMoney(long money);
	long getMoney();

public:

	/*  Class Functions  */
	long salary();
	void display();
	static std::vector<EmployeePT> getMaxSalary(std::vector<EmployeePT> e);

public:

	/*  Overload Operators  */
	friend std::istream& operator>>(std::istream& in, EmployeePT& e);
	friend std::ostream& operator<<(std::ostream& out, EmployeePT& e);
};

inline std::istream& operator>>(std::istream& in, EmployeePT& e) // In Overload Operator Definition
{
	std::cout << "--\n";
	std::cout << "In Overload Operator\n";
	std::cout << "Enter value for int'hour': ";
	in >> e.hour;
	ClearCinBuffer();
	std::cout << "Enter value for long'money': ";
	in >> e.money;
	ClearCinBuffer();
	std::cout << "--" << std::endl;
	return in;
}

inline std::ostream& operator<<(std::ostream& out, EmployeePT& e) // Out Overload Operator Definition
{
	std::cout << "--\n";
	std::cout << "Out Overload Operator\n";
	out << "int'hour': " << e.hour << "\n";
	out << "long'money': " << e.money << "\n";
	std::cout << "--" << std::endl;
	return out;
}

