#pragma once
#include <iostream>
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

	void setName(std::string name);
	std::string getName() const;
	void setAge(int age);
	int getAge() const;

public:

	void Say();

};

// Operator<() definition (Required to use set)
inline bool operator<(const Person& l, const Person& r)
{

	// The big - small relationship between the elements in this case is determined by the 'age' property
	return l.getAge() < r.getAge();
}