/*
 *  14.Relation between objects | 2.Books & Authors (Practice 2)
 */

#include "C:\Users\truon\Desktop\C++\Codelearn\19.Relation between objects 2\Books & Authors (Practice 1)\author.h"
#include "C:\Users\truon\Desktop\C++\Codelearn\19.Relation between objects 2\Books & Authors (Practice 1)\book.h"

int main()
{
    system("cls"); // Clear Vscode Terminal

    std::vector<Author> Authors;
    Authors.push_back(Author("Vi", "truongvi2013@gmail.com"));
    Authors.push_back(Author("Nhan", "novartis1284t@gmail.com"));
    Authors.push_back(Author("Duy", "nhatduy1284t@gmail.com"));

    Book* SomeBook = new Book("Some Book", Authors, 75000);
    
    SomeBook->getAuthorNames(true);
    std::cout << SomeBook->getAuthorNames() << std::endl;

    delete SomeBook;
    return 0;
}