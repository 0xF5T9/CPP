#include "C:\Users\novar\Documents\GitHub\CPP\Codelearn\22.Tests\Book (Practice 11)\book.h"

// Class: Book | Getters & Setters Definitions
void Book::setNameBook(std::string nameBook)
{
    this->nameBook = nameBook;
}

std::string Book::getNameBook() const
{
    return this->nameBook;
}

void Book::setNameAuthor(std::string nameAuthor)
{
    this->nameAuthor = nameAuthor;
}

std::string Book::getNameAuthor() const
{
    return this->nameAuthor;
}

void Book::setNumberBook(int numberBook)
{
    this->numberBook = numberBook;
}

int Book::getNumberBook() const
{
    return this->numberBook;
}

// Class: Book | Class Function Definitions
void Book::Display() const
{
    std::cout << "Name Book: " << this->nameBook << "\n";
    std::cout << "Name Author: " << this->nameAuthor << "\n";
    std::cout << "Number Book: " << this->numberBook << std::endl;
}