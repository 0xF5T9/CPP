#pragma once
#include <iostream>
#include <vector>
#include <string>

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
struct Count
{
	std::string id;
	int times = 0;
	Count(std::string id) : id(id) {}
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
	result.push_back(iv.front());	// Load first 'in' element to 'result' so the first loop can do the compares

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

std::vector<std::string> GetListOfStringsAppeared(const std::vector<std::string>& sv)
{
	std::vector<std::string> result;
	result.push_back(sv.front());	// Load first 'sv' element to 'result' so the first loop can do the compares

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

std::vector<Person> GetListOfObjectsAppeared(const std::vector<Person>& p)
{
	std::vector<Person> result;
	result.push_back(p.front());	// Load first 'p' element to 'result' so the first loop can do the compares

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

std::vector<int> GetListOfNumbersAppearMost(const std::vector<int>& iv)
{
	// Create vector 'list' that contains list of ints appeared in given vector 'iv' | Distinguished by value
	std::vector<int> list = GetListOfNumbersAppeared(iv);

	// Create vector 'ret' contains final results
	std::vector<int> ret;

	// Create struct 'count' contains identifer 'id' and counter 'times'
	std::vector<Count> count;

	// Load id(name) from 'list' to 'count'
	for (int i = 0; i < list.size(); i++)
	{
		count.push_back(Count(std::to_string(list[i])));
	}

	// Counting ...
	for (auto x : iv)
	{
		for (auto& a : count)
		{
			if (x == std::stoi(a.id)) a.times++;
		}
	}


	// Get the maximum number of times same int (distinguished by value) appears.
	int ATH = 0;
	for (auto x : count)
	{
		if (x.times > ATH) ATH = x.times;
	}

	// Load ints that appear the most (based on 'ATH') from 'iv' to 'ret'
	for (auto x : iv)
	{
		for (auto a : count)
		{
			if (x == std::stoi(a.id) && a.times == ATH) ret.push_back(x);
		}
	}

	// Remove duplicates in 'ret'
	ret = GetListOfNumbersAppeared(ret);

	return ret;
}

std::vector<std::string> GetListOfStringsAppearMost(const std::vector<std::string>& sv)
{
	// Create vector 'list' that contains list of strings appeared in given vector 'sv' | Distinguished by value
	std::vector<std::string> list = GetListOfStringsAppeared(sv);

	// Create vector 'ret' contains final results
	std::vector<std::string> ret;

	// Create struct 'count' contains identifer 'id' and counter 'times'
	std::vector<Count> count;

	// Load id(name) from 'list' to 'count'
	for (int i = 0; i < list.size(); i++)
	{
		count.push_back(Count(list[i]));
	}

	// Counting ...
	for (auto x : sv)
	{
		for (auto& a : count)
		{
			if (x == a.id) a.times++;
		}
	}


	// Get the maximum number of times same string (distinguished by value) appears.
	int ATH = 0;
	for (auto x : count)
	{
		if (x.times > ATH) ATH = x.times;
	}

	// Load strings that appear the most (based on 'ATH') from 'p' to 'ret'
	for (auto x : sv)
	{
		for (auto a : count)
		{
			if (x == a.id && a.times == ATH) ret.push_back(x);
		}
	}

	// Remove duplicates in 'ret'
	ret = GetListOfStringsAppeared(ret);

	return ret;
}

std::vector<Person> GetListOfObjectsAppearMost(const std::vector<Person>& p)
{
	// Create vector 'list' that contains list of object types appeared in given vector 'p' | Distinguished by 'name' 
	std::vector<Person> list = GetListOfObjectsAppeared(p);

	// Create vector 'ret' contains final results
	std::vector<Person> ret;

	// Create struct 'count' contains identifer 'id' (in this case using 'name' as id) and counter 'times'
	std::vector<Count> count;

	// Load id(name) from 'list' to 'count'
	for (int i = 0; i < list.size(); i++)
	{
		count.push_back(Count(list[i].getName()));
	}
	
	// Counting ...
	for (auto x : p)
	{
		for (auto& a : count)
		{
			if (x.getName() == a.id) a.times++;
		}
	}


	// Get the maximum number of times same object type (distinguished by 'name') appears.
	int ATH = 0;
	for (auto x : count)
	{
		if (x.times > ATH) ATH = x.times;
	}

	// Load objects that appear the most (based on 'ATH') from 'p' to 'ret'
	for (auto x : p)
	{
		for (auto a : count)
		{
			if (x.getName() == a.id && a.times == ATH) ret.push_back(x);
		}
	}

	// Remove duplicates in 'ret'
	ret = GetListOfObjectsAppeared(ret);

	return ret;
}