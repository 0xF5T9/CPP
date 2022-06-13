#pragma once
#include <iostream>
#include <string>
#include <limits>
#include <list>

void ClearCinBuffer()
{
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
int GetRandInt(int minimum = 0, int maxmimum = 100)
{
	return rand() % (maxmimum + 1 - minimum) + minimum;
}

class Point {
private:
	int x;
	int y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}
	~Point() {}
public:
	void setX(int x)
	{
		this->x = x;
	}
	int getX() const
	{
		return this->x;
	}
	void setY(int y)
	{
		this->y = y;
	}
	int getY() const
	{
		return this->y;
	}
public:
	void Display() const
	{
		std::cout << "x: " << this->x << " y: " << this->y << std::endl;
	}
public:
	friend std::istream& operator>>(std::istream& in, Point& p)
	{
		std::cout << "int'x': ";
		in >> p.x;
		ClearCinBuffer();
		std::cout << "int'y': ";
		in >> p.y;
		ClearCinBuffer();
		return in;
	}
	friend std::ostream& operator<<(std::ostream& out, Point& p)
	{
		std::cout << "int'x': " << p.x << "\n";
		std::cout << "int'y': " << p.y << "\n";
		return out;
	}
};
class Person
{
private:
	static int total_person;
	int id;
	std::string name;
public:
	Person(std::string name) : id(total_person), name(name) { total_person++; }
	~Person() { total_person--; }
public:
	void setName(std::string name)
	{
		this->name = name;
	}
	std::string getName() const
	{
		return this->name;
	}
	int getId() const
	{
		return this->id;
	}
public:
	void Display() const
	{
		std::cout << "[ID: " << this->id << "] " << "Name: " << this->name << std::endl;
	}
public:
	friend std::istream& operator>>(std::istream& in, Person& p)
	{
		std::cout << "int'id': ";
		in >> p.id;
		ClearCinBuffer();
		std::cout << "string'name': ";
		std::getline(in, p.name);
		ClearCinBuffer();
		return in;
	}
	friend std::ostream& operator<<(std::ostream& out, Person& p)
	{
		out << "int'id': " << p.id << "\n";
		out << "string'name': " << p.name << std::endl;
		return out;
	}
};
int Person::total_person = 1;

void ShowListElements(std::list<int> li, std::string extra = "", bool extraendl = 0)
{
	/*
	* Loop through the given list 'li' via const auto&
	* use 'const' because this function is meant for read-only tasks
	* use 'auto&' for direct access to original items instead of creating copies (Because we need correct memory address to do the compares *)
	*/
	if (extra != "") std::cout << extra;
	for (const auto& x : li)
	{
		std::cout << x;
		if (&x != &li.back()) std::cout << "-"; // * Cout "-" if the current x's memory address isn't match the memory address of 'li' last element
	}
	std::cout << std::endl;
	if (extraendl == 1) std::cout << std::endl;
}

void ShowListElements(std::list<std::string> ls, std::string extra = "", bool extraendl = 0)
{
	if (extra != "") std::cout << extra;
	for (const auto& x : ls)
	{
		std::cout << x;
		if (&x != &ls.back()) std::cout << "-";
	}
	std::cout << std::endl;
	if (extraendl == 1) std::cout << std::endl;
}

void ShowListElements(std::list<Point> lp, std::string extra = "", bool extraendl = 0)
{
	if (extra != "") std::cout << extra;
	for (const auto& x : lp)
	{
		x.Display();
	}
	if (extraendl == 1) std::cout << std::endl;
}

void ShowListElements(std::list<Person> lp, std::string extra = "", bool extraendl = 0)
{
	if (extra != "") std::cout << extra;
	for (const auto& x : lp)
	{
		x.Display();
	}
	if (extraendl == 1) std::cout << std::endl;
}

void RemoveElementByPos(std::list<int>& li, int position_1, int position_2 = 0)
{
	std::list<int>::iterator it1 = li.begin();
	std::list<int>::iterator it2 = li.begin();
	std::advance(it1, position_1 - 1);
	std::advance(it2, position_2);
	if (position_2 == 0) li.erase(it1);
	else li.erase(it1, it2);
}

void RemoveElementByPos(std::list<Person>& lp, int position_1, int position_2 = 0)
{
	std::list<Person>::iterator it1 = lp.begin();
	std::list<Person>::iterator it2 = lp.begin();
	std::advance(it1, position_1 - 1);
	std::advance(it2, position_2);
	if (position_2 == 0) lp.erase(it1);
	else lp.erase(it1, it2);
}

void RemoveElementByVal(std::list<int>& li, int value)
{
	for (std::list<int>::iterator it = li.begin(); it != li.end(); it++)
	{
		if (*it == value) li.erase(it);
	}
}

void RemoveElementByVal(std::list<Person>& lp, std::string value)
{
	for (std::list<Person>::iterator it = lp.begin(); it != lp.end(); it++)
	{
		if (it->getName() == value) lp.erase(it);
	}
}

void RemoveElementByVal(std::list<Person>& lp, int value)
{
	for (std::list<Person>::iterator it = lp.begin(); it != lp.end(); it++)
	{
		if (it->getId() == value) lp.erase(it);
	}
}