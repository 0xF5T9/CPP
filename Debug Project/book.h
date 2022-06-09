#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <limits>

void ClearCinBuffer();  // PROTOTYPE (Defined in 'func.h')
class Person; // FORWARD DECLARATION (Defined in 'person.h')


class Book
{
private:

    /*  Class Properties (Private)  */
    std::string nameBook;
    std::string nameAuthor;
    int numberBook;
    int count = 0; // Special property, used to assist 'GetMaxBookBorrowed()' function in counting how many times each book type found

public:

    /*  Constructors & Destructor  */
    Book(std::string nameBook = "", std::string nameAuthor = "", int numberBook = 0) : nameBook(nameBook), nameAuthor(nameAuthor), numberBook(numberBook) {}
    ~Book() {}

public:

    /*  Getters & Setters  */
    void setNameBook(std::string nameBook);
    std::string getNameBook() const;
    void setNameAuthor(std::string nameAuthor);
    std::string getNameAuthor() const; 
    void setNumberBook(int numberBook);
    int getNumberBook() const;

public:

    /*  Class Functions  */
    void Display() const;

public:

    /*  Overload Operators  */
    friend std::istream& operator>>(std::istream& in, Book& b);
    friend std::ostream& operator<<(std::ostream& out, Book& b);
    friend class Person;
};

inline std::istream& operator>>(std::istream& in, Book& b)
{
    std::cout << "string'nameBook': ";
    std::getline(in, b.nameBook);
    ClearCinBuffer();
    std::cout << "string'nameAuthor': ";
    std::getline(in, b.nameAuthor);
    ClearCinBuffer();
    std::cout << "int'numberBook': ";
    in >> b.numberBook;
    ClearCinBuffer();
    return in;
}

inline std::ostream& operator<<(std::ostream& out, Book& b)
{
    out << "string'nameBook': " << b.nameBook << "\n";
    out << "string'nameAuthor': " << b.nameAuthor << "\n";
    out << "int'numberBook': " << b.numberBook << "\n";
    return out;
}