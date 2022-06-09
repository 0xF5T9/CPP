#pragma once
#include <iostream>
#include <vector>

class Person
{
private:
	std::string name;
	int age;
public:
	Person(std::string name = "", int age = 0) : name(name), age(age) {}
	~Person() {}
public:
	void setName(std::string name)
	{
		this->name = name;
	}
	std::string getName() const
	{
		return this->name;
	}
	void setAge(int age)
	{
		this->age = age;
	}
	int getAge() const
	{
		return this->age;
	}
};

int GetRandInt(int maximum = 100, int minimum = 0)
{
	return rand() % (maximum + 1 - minimum) + minimum;
}

void ShowVectorElements(const std::vector<int>& iv, std::string extra = "")
{
	int sc = 0;
	if (extra != "") std::cout << extra << "\n";
	for (const auto x : iv)
	{
		sc++;
		std::cout << x;
		if (sc != iv.size()) std::cout << " ";
	}
	std::cout << std::endl;
}

void ShowVectorElements(const std::vector<std::string>& sv, std::string extra = "")
{
	int sc = 0;
	if (extra != "") std::cout << extra << "\n";
	for (const auto x : sv)
	{
		sc++;
		std::cout << x;
		if (sc != sv.size()) std::cout << " ";
	}
	std::cout << std::endl;
}

void ShowVectorElements(const std::vector<Person>& p, std::string extra = "")
{
	int sc = 0;
	if (extra != "") std::cout << extra << "\n";
	for (const auto x : p)
	{
		sc++;
		std::cout << x.getName();
		if (sc != p.size()) std::cout << " ";
	}
	std::cout << std::endl;
}

std::vector<int> GetListOfNumbersAppeared(const std::vector<int>& iv)
{
	std::vector<int> result;
	result.push_back(iv.front());

	for (auto x : iv)
	{
		bool existed_in_result = 0;
		for (auto a : result)
		{
			if (x == a) { existed_in_result = 1; break; }
		}
		if (existed_in_result == 1) continue;
		result.push_back(x);
	}

	return result;
}

std::vector<std::string> GetListOfStringAppeared(const std::vector<std::string>& sv)
{
	std::vector<std::string> result;
	result.push_back(sv.front());

	for (auto x : sv)
	{
		bool existed_in_result = 0;
		for (auto a : result)
		{
			if (x == a) { existed_in_result = 1; break; }
		}
		if (existed_in_result == 1) continue;
		result.push_back(x);
	}

	return result;
}

std::vector<Person> GetListOfObjectAppeared(const std::vector<Person>& p)
{
	std::vector<Person> result;
	result.push_back(p.front());

	for (auto x : p)
	{
		bool existed_in_result = 0;
		for (auto a : result)
		{
			if (x.getName() == a.getName()) { existed_in_result = 1; break; }
		}
		if (existed_in_result == 1) continue;
		result.push_back(x);
	}

	return result;
}