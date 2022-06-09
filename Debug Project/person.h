#pragma once
#include "book.h"

class Person
{
private:

    /*  Class Properties (Private)  */
    std::string name;
    int age;
    std::string add;
    std::vector<Book> vb;

public:

    /*  Constuctors & Destructor  */
    Person(std::string name = "", int age = 0, std::string add = "", std::vector<Book> vb = {}) : name(name), age(age), add(add), vb(vb) {}
    ~Person() {}

public:

    /*  Getters & Setters  */
    void setName(std::string name);
    std::string getName() const;
    void setAge(int age);
    int getAge() const;
    void setAdd(std::string add);
    std::string getAdd() const;
    void setVB(std::vector<Book> vb);
    std::vector<Book> getVB() const;

public:

    /*  Class Functions  */
    virtual long MoneyPay() = 0;
    virtual void Display();
    static void SortPersonAge(std::vector<Person*>& p);
    static std::vector<int> GetListAge(std::vector<Person*> p);
    static std::vector<Book> GetMaxBookBorrowed(std::vector<Person*> p);

public:

    /*  Overload Operators  */
    friend std::istream& operator>>(std::istream& in, Person& p);
    friend std::ostream& operator<<(std::ostream& out, Person& p);
};

inline std::istream& operator>>(std::istream& in, Person& p)
{
    std::cout << "string'name': ";
    std::getline(in, p.name);
    ClearCinBuffer();
    std::cout << "int'age': ";
    in >> p.age;
    ClearCinBuffer();
    std::cout << "string'add': ";
    std::getline(in, p.add);
    ClearCinBuffer();
    return in;
}

inline std::ostream& operator<<(std::ostream& out, Person& p)
{
    out << "string'name': " << p.name << "\n";
    out << "int'age': " << p.age << "\n";
    out << "string'add': " << p.add << "\n";
    return out;
}