#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\22.Tests\Cards (Practice 1)\card.h"

// Class: Card | Getters & Setters Definitions
void Card::setBookName(std::string bookName)
{
	this->bookName = bookName;
}

std::string Card::getBookName()
{
	return this->bookName;
}

void Card::setAuthorName(std::string authorName)
{
	this->authorName = authorName;
}

std::string Card::getAuthorName()
{
	return this->authorName;
}

void Card::setNumberBook(int numberBook)
{
	this->numberBook = numberBook;
}

int Card::getNumberBook()
{
	return this->numberBook;
}

// Class: Card | Class Function Definitions
void Card::display()
{
	std::cout << "Book Name: " << this->bookName << "\n";
	std::cout << "Book Author: " << this->authorName << "\n";
	std::cout << "Book Number: " << this->numberBook << std::endl;
}

// Class: Card | Static Class Function Definitions
void Card::sortcards(std::vector<Card>& Cards, bool SortMode) // SortMode: Ascending = 0 | Descending = 1
{
	/* 
	* Example: 'Cards' vector have 10 elements
	* 9 loops will be executed (Cards[0] vs Cards[1] ... Cards[8] vs Cards[9])
	* First loop: Compare Cards[0] with others Cards[1-9] & Swap value if Cards[i] > Card[j] or Cards[i] < Card[j] depends on mode
	*  0 1
	*  1 2
	*  2 3
	*  3 4
	*  4 5
	*  5 6
	*  6 7
	*  7 8
	*  8 9
	*/
	if (SortMode == 0) 
	{
		for (int i = 0; i < Cards.size() - 1; i++) // 9 loops will be executed (Cards[0] vs Cards[1] ... Cards[8] vs Cards[9])
		{
			for (int j = i + 1; j < Cards.size(); j++)
			{
				if (Cards[i].getNumberBook() > Cards[j].getNumberBook()) std::swap(Cards[i], Cards[j]);
			}
		}
	}
	else
	{
		for (int i = 0; i < Cards.size() - 1; i++) 
		{
			for (int j = i + 1; j < Cards.size(); j++)
			{
				if (Cards[i].getNumberBook() < Cards[j].getNumberBook()) std::swap(Cards[i], Cards[j]);
			}
		}
	}
	
}