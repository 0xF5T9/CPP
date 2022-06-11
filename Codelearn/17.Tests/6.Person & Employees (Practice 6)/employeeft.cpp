#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\22.Tests\Person & Employees (Practice 6)\employeeft.h"

// Class: EmployeeFT | Getters & Setters Definitions
void EmployeeFT::setDay(int day)
{
	this->day = day;
}

int EmployeeFT::getDay()
{
	return this->day;
}

void EmployeeFT::setMoney(long money)
{
	this->money = money;
}

long EmployeeFT::getMoney()
{
	return this->money;
}

// Class: EmployeeFT | Class Function Definitions
long EmployeeFT::salary()
{
	long ret = this->day * this->money;
	return ret;
}

void EmployeeFT::display()
{
	Person::display();
	std::cout << "Working day(s): " << this->day << "\n";
	std::cout << "Pay per day: " << this->money << "\n";
	std::cout << "Salary: " << this->salary() << std::endl;
}

std::vector<EmployeeFT> EmployeeFT::getMaxSalary(std::vector<EmployeeFT> e)
{
	std::vector<EmployeeFT> ret;
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