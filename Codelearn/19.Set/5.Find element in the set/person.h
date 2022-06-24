#pragma once
#include <iostream>
#include <string>
#include <tuple>

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
	void Say() const;
public:
	friend bool operator<(Person l, Person r);
};

/*
* Operator<() definition (Required while using set with user-defined datatype)
* for <setname>.find() to works, we must achieve lexicographical ordering (using tuple, std::tie())
* Readmore: https://stackoverflow.com/questions/9789542/how-to-make-set-find-work-for-custom-class-objects
*/ 
inline bool operator<(Person l, Person r)
{
	return std::tie(l.age, l.name) < std::tie(r.age, r.name);
}