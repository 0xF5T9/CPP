#include "employeept.h"

// Class: EmployeePT | Getters & Setters Defintions
void EmployeePT::setHour(int hour)
{
	this->hour = hour;
}

int EmployeePT::getHour()
{
	return this->hour;
}

void EmployeePT::setMoney(long money)
{
	this->money = money;
}

long EmployeePT::getMoney()
{
	return this->money;
}

// Class: EmployeePT | Class Function Definitions
long EmployeePT::salary()
{
	long ret = this->hour * this->money;
	return ret;
}

void EmployeePT::display()
{
	Person::display();
	std::cout << "Working hour(s): " << this->hour << "\n";
	std::cout << "Pay per hour: " << this->money << "\n";
	std::cout << "Salary: " << this->salary() << std::endl;
}

std::vector<EmployeePT> EmployeePT::getMaxSalary(std::vector<EmployeePT> e)
{
	std::vector<EmployeePT> ret;
	long ATH = 0;
	for (auto x : e)
	{
		if (x.salary() > ATH) ATH = x.salary();
	}
	for (auto x : e)
	{
		if (x.salary() == ATH) ret.push_back(x);
	}
	return ret;
}