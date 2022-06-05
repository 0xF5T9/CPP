#pragma once
#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\22.Tests\Person & Employees (Practice 6)\employeept.h"
#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\22.Tests\Person & Employees (Practice 6)\employeeft.h"

void ClearCinBuffer()
{
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void ShowVectorElements(std::vector<Person*> p, bool border = 0, std::string extra = "")
{
	if (border == 1) std::cout << "======================\n";
	if (extra != "") std::cout << extra << "\n";
	for (auto x : p)
	{
		x->display();
		if (x != p.back()) std::cout << "--\n";
	}
	if (border == 1) std::cout << "======================" << std::endl;
}

void ShowVectorElements(std::vector<EmployeePT> p, bool border = 0, std::string extra = "")
{
	if (border == 1) std::cout << "======================\n";
	if (extra != "") std::cout << extra << "\n";
	for (auto x : p)
	{
		x.display();
		if (x.getName() != p.back().getName()) std::cout << "--\n";
	}
	if (border == 1) std::cout << "======================" << std::endl;
}

void ShowVectorElements(std::vector<EmployeeFT> p, bool border = 0, std::string extra = "")
{
	if (border == 1) std::cout << "======================\n";
	if (extra != "") std::cout << extra << "\n";
	for (auto x : p)
	{
		x.display();
		if (x.getName() != p.back().getName()) std::cout << "--\n";
	}
	if (border == 1) std::cout << "======================" << std::endl;
}

void FreeMemory(std::vector<Person*> &p)
{
	for (auto x : p)
	{
		delete x;
	}
	p.clear();
}