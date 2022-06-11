/*
*	17.Tests | 11.Book (Practice 11)
*/

#include "C:\Users\novar\Documents\GitHub\CPP\Codelearn\22.Tests\Book (Practice 11)\func.h"

int main()
{
	system("cls"); // Clear Vscode Terminal
	const int testcase = 2; // Select test case

	switch (testcase)
	{
		case 1:
		{
			// Create a vector that contains 'Book' objects
			std::vector<Book> bs = {
			Book("A Song of Ice and Fire", "George R. R. Martin", 1996),
			Book("Harry Potter and the Chamber of Secrets", "J. K. Rowling", 1998),
			Book("A Song of Ice and Fire", "George R. R. Martin", 1996),
			Book("The Unspoken Name", "A. K. Larkwood", 2020)
			};

			// Create vector that contains 'Person' objects
			std::vector<Person*> ps = {
				new Adult("Thinh", 35, "Hanoi", bs),
				new Adult("Quang", 21, "Vung Tau", bs),
				new Children("Tuan", 14, "Ho Chi Minh", bs),
				new Children("Hung", 15, "Ho Chi Minh"),
				new Children("Van", 14, "Ho Chi Minh"),
				new Children("Giang", 14, "Ho Chi Minh"),
			};
			ShowVectorElements(ps, "Before sorting: ", 1);

			Person::SortPersonAge(ps);
			ShowVectorElements(ps, "After sorting: ", 1);

			Person::GetListAge(ps, 1);

			// The objects initialized by pointers via 'new' operator, therefore must be deallocated with 'delete'
			FreeMemory(ps);
			break;
		}	// End of the scope, the vectors: 'bs', 'ps' will be destroyed
		case 2:
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
					new Adult("Thinh", 35, "Hanoi", bs),
					new Adult("Quang", 21, "Vung Tau", bs),
					new Children("Tuan", 14, "Ho Chi Minh", bs),
				};

				std::vector<Book> fb = Person::GetMaxBookBorrowed(ps); // Remarkable! - Read more...
				ShowVectorElements(fb);

				// The objects initialized by pointers via 'new' operator, therefore must be deallocated with 'delete'
				FreeMemory(ps);
				break;
			}	// End of the scope, the vectors: 'bs', 'ps', 'fb' will be destroyed
		}
	}
	
	return 0;
}