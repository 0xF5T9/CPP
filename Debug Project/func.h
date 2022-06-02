#pragma once
#include "card.h"

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