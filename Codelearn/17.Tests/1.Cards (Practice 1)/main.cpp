/*
 *  17.Tests | 1.Cards (Practice 1)
 */

#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\22.Tests\Cards (Practice 1)\func.h"

int main()
{
    /* [IN & OUT OVERLOAD OPERATORS TEST]
    Card c1("", "", 0);
    std::cin >> c1;
    std::cout << c1;
    */ 
    system("cls"); // Clear Vscode Terminal

    // Create 'Card' vector and insert elements
    std::vector<Card> SomeCards;
    SomeCards.push_back(Card("Through the Looking-glass and what Alice Found There", "Lewis Carroll", 1871));
    SomeCards.push_back(Card("Cabbages and Kings", "O. Henry", 1904));
    SomeCards.push_back(Card("Alice's Adventures in Wonderland", "Elisabetta Dami", 1865));

    // Before sorting
    std::cout << "Before sorting(Asc): ";
    ShowVectorElements(SomeCards);

    // Sort the vector | Ascending
    Card::sortcards(SomeCards, 0);
    std::cout << "After sorting(Asc): ";
    ShowVectorElements(SomeCards);

    // Sort the vector | Descending
    Card::sortcards(SomeCards, 1);
    std::cout << "After sorting(Desc): ";
    ShowVectorElements(SomeCards);

    return 0;
}