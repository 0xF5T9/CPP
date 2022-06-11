#pragma once
#include "C:\Users\truon\Desktop\C++\Codelearn\19.Relation between objects 2\Books & Authors (Practice 1)\author.h"

class Book
{
private:

    /*  Class Properties (Private)  */
    std::string name;
    std::vector<Author> authors;
    int price;

public:
    
    /*  Constructors & Destructor  */
    Book(std::string name, std::vector<Author> authors, int price): name(name), authors(authors), price(price) {};
    ~Book() {};

public:

    /*  Getters & Setters  */
    void setName(std::string name);
    std::string getName();
    void setAuthor(std::vector<Author> authors);
    std::vector<Author> getAuthor();
    void setPrice(int price);
    int getPrice();

public:

    /*  Class Functions  */
    std::string getAuthorNames(bool cout = 0);

};