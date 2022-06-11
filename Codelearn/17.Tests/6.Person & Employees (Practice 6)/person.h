#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <limits>

void ClearCinBuffer(); // Prototype (Defined in 'func.h')

class Person
{
private:

	/*  Class Properties (Private)  */
	std::string name;
	int age;
	std::string address;
	std::string tel;
	std::string sex;

public:

	/*  Constructors & Destructor  */
	Person(std::string name = "", int age = 0, std::string address = "", std::string tel = "", std::string sex = ""): name(name), age(age), address(address), tel(tel), sex(sex) {}
	virtual ~Person() {}

public:

	/*  Getters & Setters  */
	void setName(std::string name);
	std::string getName();
	void setAge(int age);
	int getAge();
	void setAddress(std::string address);
	std::string getAddress();
	void setTel(std::string tel);
	std::string getTel();
	void setSex(std::string sex);
	std::string getSex();

public:

	/*  Class Functions  */
	virtual void display();
	virtual long salary() = 0;
	static std::vector<Person*> getPersonFromHanoi(std::vector<Person*> p);

public:

	/*  Overload Operators  */
	friend std::istream& operator>>(std::istream& in, Person& p);
	friend std::ostream& operator<<(std::ostream& out, Person& p);
};

inline std::istream& operator>>(std::istream& in, Person& p) // In Overload Operator Definition
{
	std::cout << "--\n";
	std::cout << "In Overload Operator\n";
	std::cout << "Enter value for string'name': ";
	std::getline(in, p.name);
	ClearCinBuffer();
	std::cout << "Enter value for int'age': ";
	in >> p.age;
	ClearCinBuffer();
	std::cout << "Enter value for string'address': ";
	std::getline(in, p.address);
	ClearCinBuffer();
	std::cout << "Enter value for string'tel': ";
	std::getline(in, p.tel);
	ClearCinBuffer();
	std::cout << "Enter value for string'sex': ";
	std::getline(in, p.sex);
	ClearCinBuffer();
	std::cout << "--" << std::endl;
	return in;
}

inline std::ostream& operator<<(std::ostream& out, Person& p) // Out Overload Operator Definition
{
	std::cout << "--\n";
	std::cout << "Out Overload Operator\n";
	out << "string'name': ";
	if (p.name == "") out << "<no value set>\n";
	else out << p.name << "\n";
	out << "int'age': " << p.age << "\n";
	out << "string'address': ";
	if (p.address == "") out << "<no value set>\n";
	else out << p.address << "\n";
	out << "string'tel': ";
	if (p.tel == "") out << "<no value set>\n";
	else out << p.tel << "\n";
	out << "string'sex': ";
	if (p.sex == "") out << "<no value set>\n";
	else out << p.sex << "\n";
	std::cout << "--" << std::endl;
	return out;
}