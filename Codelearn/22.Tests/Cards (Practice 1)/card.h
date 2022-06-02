#pragma once
#include <iostream>
#include <string>
#include <vector>
class Card
{
private:

	/*  Class Properties (Private)  */
	std::string bookName;
	std::string authorName;
	int numberBook;
public:

	/*  Constructors & Destructor  */
	Card(std::string bookName, std::string authorName, int numberBook): bookName(bookName), authorName(authorName), numberBook(numberBook) {}
	~Card() {}

public:

	/*  Getters & Setters  */
	void setBookName(std::string bookName);
	std::string getBookName();
	void setAuthorName(std::string authorName);
	std::string getAuthorName();
	void setNumberBook(int numberBook);
	int getNumberBook();
public:

	/*  Class Functions  */
	void display();

public:

	/*  Class Functions (Static)  */
	static void sortcards(std::vector<Card>& Cards, bool SortMode = 0);

public:

	/*  Class Overload Operators  */
	friend std::istream& operator>>(std::istream& in, Card& c);
	friend std::ostream& operator<<(std::ostream& out, Card& c);

};

inline std::istream& operator>>(std::istream& in, Card& c) // In Overload Operator Definition
{
	std::cout << "--\n";
	std::cout << "In Overload Operator\n";

	std::cout << "Enter value for string'bookName': ";
	std::getline(in, c.bookName);
	std::cout << "Enter value for string'authorName': ";
	std::getline(in, c.authorName);
	std::cout << "Enter value for int'numberBook': ";
	in >> c.numberBook;

	std::cout << "--" << std::endl;
	return in;
}

inline std::ostream& operator<<(std::ostream& out, Card& c) // Out Overload Operator Definition
{
	std::cout << "--\n";
	std::cout << "Out Overload Operator\n";

	out << "string'bookName': " << c.bookName << "\n";
	out << "string'authorName': " << c.authorName << "\n";
	out << "int'numberBook': " << c.numberBook << "\n";

	std::cout << "--" << std::endl;
	return out;
}