#pragma once
#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\22.Tests\Cards (Practice 1)\card.h"

// Global Function Definitions
void ShowVectorElements(std::vector<Card>& card)
{
	int sc = 0;
	for (int i = 0; i < card.size(); i++)
	{
		sc++;
		std::cout << card[i].getNumberBook();
		if (sc != card.size()) std::cout << " ";
	}
	std::cout << std::endl;
}