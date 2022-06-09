#include "C:\Users\novar\Documents\GitHub\CPP\Codelearn\22.Tests\Book (Practice 11)\person.h"

// Class: Person | Getters & Setters Definitions
void Person::setName(std::string name)
{
	this->name = name;
}

std::string Person::getName() const
{
	return this->name;
}

void Person::setAge(int age)
{
	this->age = age;
}

int Person::getAge() const
{
	return this->age;
}

void Person::setAdd(std::string add)
{
	this->add = add;
}

std::string Person::getAdd() const
{
	return this->add;
}

void Person::setVB(std::vector<Book> vb)
{
	this->vb = vb;
}

std::vector<Book> Person::getVB() const
{
	return this->vb;
}

// Class: Person | Class Function Definitions
void Person::Display()
{
    std::cout << "Name: " << this->name << "\n";
    std::cout << "Age: " << this->age << "\n";
    std::cout << "Add: " << this->add << "\n";
    std::cout << "List Book Borrowed:" << "\n";
    for (auto x : this->vb)
    {
        x.Display();
    }
    std::cout << "Money Pay: " << this->MoneyPay() << std::endl;
}

void Person::SortPersonAge(std::vector<Person*>& p)
{
    for (int i = 0; i < p.size() - 1; i++)
    {
        for (int j = i + 1; j < p.size(); j++)
        {
            if (p[i]->age > p[j]->age) std::swap(p[i], p[j]);
        }
    }
}

std::vector<int> Person::GetListAge(std::vector<Person*> p, bool cout)
{
    std::vector<int> ret;
    ret.push_back(p[0]->age);
    for (auto x : p)
    {
        bool b = 0;
        for (auto a : ret)
        {
            if (x->age == a) { b = 1; break; }
        }
        if (b == 1) continue;
        ret.push_back(x->age);
    }
    if (cout == 1)
    {
        std::cout << "Age of customers: ";
        for (auto x : ret)
        {
            std::cout << x;
            if(x != ret.back()) std::cout << " ";
        }
        std::cout << std::endl;
    }
    return ret;
}

std::vector<Book> Person::GetMaxBookBorrowed(std::vector<Person*> p)
{
    // Create vector 'list' to contains all the book type (Distinguished by name)
    std::vector<Book> list;
    // Create vector 'ret' to contains the final results
    std::vector<Book> ret;


    /*  Find and load all book types into the vector 'list'  */
    list.push_back(p.front()->vb.front()); // Store the first book in vector 'list', so first loop will have a first book to do the compares
    for (auto x : p) // Looping through every 'Person' object in the given vector 'p'
    {
        for (auto a : x->vb) // Looping through every 'Book' object in the given vector (Each 'Person' object have a 'Bool' vector)
        {
            bool b = 0; // bool 'b' switch, to mark which book is already exists in 'list' vector
            for (auto z : list) // Looping through every book exists in 'list' vector
            {
                if (a.getNameBook() == z.getNameBook()) { b = 1; break; } // If this book type already exists in 'list' vector (have same name), switch the bool 'b' to true
            }
            if (b == 1) continue; // If the bool 'b' is true aka the book already exists in 'list' vector, skip this loop and continue to the next one (Next book)
            list.push_back(a); // Load this book into 'list' vector
        }
    }

    /*  Counting how many times each book type found in the 'p' vector */
    for (auto x : p)
    {
        for (auto a : x->vb)
        {
            std::string temp = a.getNameBook();
            for (auto& z : list)
            {
                if (z.getNameBook() == temp) z.count++;
            }
        }
    }

    /*  Find the highest times a book found  */
    int ATH = 0;
    for (auto x : list)
    {
        if (x.count > ATH) ATH = x.count;
    }

    /*  Load books with highest times found into 'ret' vector  */
    for (auto x : list)
    {
        if (x.count == ATH) ret.push_back(x);
    }

    return ret;
}