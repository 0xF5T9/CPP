#pragma once
#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\22.Tests\Person & Employees (Practice 6)\person.h"

class EmployeeFT: public Person
{
private:

	/*  Class Properties (Private)  */
	int day;
	long money;

public:

	/*  Constructors & Destructor  */
	EmployeeFT(std::string name = "", int age = 0, std::string address = "", std::string tel = "", std::string sex = "", int day = 0, long money = 0) : Person(name, age, address, tel, sex), day(day), money(money) {}
	~EmployeeFT() {}

public:

	/*  Getters & Setters  */
	void setDay(int day);
	int getDay();
	void setMoney(long money);
	long getMoney();

public:

	/*  Class Functions  */
	long salary();
	void display();
	static std::vector<EmployeeFT> getMaxSalary(std::vector<EmployeeFT> e);

public:

	/*  Overload Operators  */
	friend std::istream& operator>>(std::istream& in, EmployeeFT& e);
	friend std::ostream& operator<<(std::ostream& out, EmployeeFT& e);
};

inline std::istream& operator>>(std::istream& in, EmployeeFT& e) // In Overload Operator Definition
{
	std::cout << "--\n";
	std::cout << "In Overload Operator\n";
	std::cout << "Enter value for int'day': ";
	in >> e.day;
	ClearCinBuffer();
	std::cout << "Enter value for long'money': ";
	in >> e.money;
	ClearCinBuffer();
	std::cout << "--" << std::endl;
	return in;
}

inline std::ostream& operator<<(std::ostream& out, EmployeeFT& e) // Out Overload Operator Definition
{
	std::cout << "--\n";
	std::cout << "Out Overload Operator\n";
	out << "int'day': " << e.day << "\n";
	out << "long'money': " << e.money << "\n";
	std::cout << "--" << std::endl;
	return out;
}

