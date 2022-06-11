#include "C:\Users\truon\Desktop\C++\Codelearn\19.Relation between objects 2\Books & Authors (Practice 1)\book.h"

/*  Class: Book | Getters & Setters Definitions  */
void Book::setName(std::string name)
{
    this->name = name;
}

std::string Book::getName()
{
    return this->name;
}

void Book::setAuthor(std::vector<Author> authors)
{
    this->authors = authors;
}

std::vector<Author> Book::getAuthor()
{
    return this->authors;
}

void Book::setPrice(int price)
{
    this->price = price;
}

int Book::getPrice()
{
    return this->price;
}

/*  Class: Book | Class Function Definitions  */
std::string Book::getAuthorNames(bool cout) // DEFAULT: cout = false (book.h)
{
    std::string author_names = "";
    int sc = 0;
    for (int i = 0; i < this->authors.size(); i++)
    {
        sc++;
        author_names += this->authors[i].getName();
        if (sc != authors.size()) author_names += ", ";
    }
    if (cout == true) std::cout << "Authors: " << author_names << std::endl;
    return author_names;
}