/*
*	Debug Project
*/

#include "func.h"

int main()
{
	{
		// Create a vector that contains 'Book' objects
		std::vector<Book> bs = {
		Book("A Song of Ice and Fire", "George R. R. Martin", 1996),
		Book("A Song of Ice and Fire", "George R. R. Martin", 1996),
		Book("A Song of Ice and Fire", "George R. R. Martin", 1996),
		Book("Harry Potter and the Chamber of Secrets", "J. K. Rowling", 1998),
		Book("Harry Potter and the Chamber of Secrets", "J. K. Rowling", 1998),
		Book("A Song of Ice and Fire", "George R. R. Martin", 1996),
		Book("A Song of Ice and Fire", "George R. R. Martin", 1996),
		Book("The Age of the Vikings", "Anders Winroth", 2014),
		Book("The Age of the Vikings", "Anders Winroth", 2014),
		Book("Children of Ash and Elm: A History of the Vikings", "Neil Price", 2020),
		Book("The Unspoken Name", "A. K. Larkwood", 2020)
		};

		// Create vector that contains 'Person' objects
		std::vector<Person*> ps = {
			new Children("Tuan", 14, "Ho Chi Minh", bs),
			new Adult("Quang", 21, "Vung Tau", bs),
			new Adult("Thinh", 35, "Hanoi", bs)
		};

		std::vector<Book> fb = Person::GetMaxBookBorrowed(ps, bs);
		ShowVectorElements(fb);

		FreeMemory(ps);
	}
	
	return 0;
}