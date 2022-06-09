#pragma once
#include "C:\Users\novar\Documents\GitHub\CPP\Codelearn\22.Tests\Group (Practice 10)\people.h"

class Family
{
private:

	/*  Class Properties (Private)  */
	std::string nameF;
	std::string status;
	std::string add;
	std::vector<People> p;

public:

	/*  Constructors & Destructor  */
	Family(std::string nameF = "", std::string status = "", std::string add = "", std::vector<People> p = {}): nameF(nameF), status(status), add(add), p(p) {}
	~Family() {}

public:

	/*  Getters & Setters  */
	void setNameF(std::string nameF);
	std::string getNameF() const;
	void setStatus(std::string status);
	std::string getStatus() const;
	void setAdd(std::string add);
	std::string getAdd() const;
	void setP(std::vector<People> p);
	std::vector<People> getP() const;

public:

	/*  Class Functions  */
	void display() const;
	static std::vector<Family> getPoorHousehold(const std::vector<Family>& f);
	static std::vector<Family> findFamilySurname(const std::vector<Family>& f, std::string surname);

public:

	/*  Overload Operators  */
	friend std::istream& operator>>(std::istream& in, Family& f);
	friend std::ostream& operator<<(std::ostream& out, Family& f);
};

inline std::istream& operator>>(std::istream& in, Family& f)	// In Overload Operator
{
	std::cout << "string'namef': \n";
	std::getline(in, f.nameF);
	ClearCinBuffer();
	std::cout << "string'status': \n";
	std::getline(in, f.status);
	ClearCinBuffer();
	std::cout << "string'add': \n";
	std::getline(in, f.add);
	ClearCinBuffer();
	return in;
}

inline std::ostream& operator<<(std::ostream& out, Family& f)	// Out Overload Operator
{
	out << "string'namef': " << f.nameF << "\n";
	out << "string'status': " << f.status << "\n";
	out << "string'add': " << f.add << std::endl;
	return out;
}