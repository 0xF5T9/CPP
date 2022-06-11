#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <limits>

void ClearCinBuffer();	// PROTOTYPE (Defined in 'func.h')

class People
{
private:

	/*  Class Properties  (Private)  */
	std::string name;
	int age;
	std::string job;
	std::string id;

public:

	/*  Constructors & Destructor  */
	People(std::string name = "", int age = 0, std::string job = "", std::string id = "") : name(name), age(age), job(job), id(id) {}
	~People() {}

public:

	/*  Getters & Setters  */
	void setName(std::string name);
	std::string getName() const;
	void setAge(int age);
	int getAge() const;
	void setJob(std::string job);
	std::string getJob() const;
	void setId(std::string id);
	std::string getId() const;

public:

	/*  Class Functions  */
	void display() const;

public:

	/*  Overload Operators  */
	friend std::istream& operator>>(std::istream& in, People& p);
	friend std::ostream& operator<<(std::ostream& out, People& p);
};

inline std::istream& operator>>(std::istream& in, People& p)	// In Overload Operator
{
	std::cout << "string'name': \n";
	std::getline(in, p.name);
	ClearCinBuffer();
	std::cout << "int'age': \n";
	in >> p.age;
	ClearCinBuffer();
	std::cout << "string'job': \n";
	std::getline(in, p.job);
	ClearCinBuffer();
	std::cout << "string'id': \n";
	std::getline(in, p.id);
	ClearCinBuffer();
	return in;
}

inline std::ostream& operator<<(std::ostream& out, People& p)	// Out Overload Operator
{
	out << "string'name': " << p.name << "\n";
	out << "string'nameGr': " << p.age << "\n";
	out << "string'nameGr': " << p.job << "\n";
	out << "string'nameGr': " << p.id << "\n";
	return out;
}