/*
 *  18.List | 5.Get sum of elements (Practice 2)
 */

#include <iostream>
#include <string>
#include <list>

int GetRandInt(int minimum = 0, int maxmimum = 100)
{
	return rand() % (maxmimum + 1 - minimum) + minimum;
}

void ShowListElements(const std::list<int>& li, std::string extra = "", bool extraendl = 0)
{
	if (extra != "") std::cout << extra;
	for (std::list<int>::const_iterator it = li.cbegin(); it != li.cend(); it++)
	{
		std::cout << *it;
		if (it != std::prev(li.cend())) std::cout << "-";
	}
	std::cout << std::endl;
	if (extraendl == 1) std::cout << std::endl;
}

int GetSumOfListElements(const std::list<int>& li, bool cout = 0)
{
	int ret = 0;
	for (std::list<int>::const_iterator it = li.cbegin(); it != li.cend(); it++)
	{
		ret += *it;
	}
	if (cout == 1) std::cout << "Sum of the elements: " << ret << std::endl;
	return ret;
}

int main()
{
	system("cls"); // Clear Vscode Terminal
	srand((unsigned int)time(0)); // Set random seed for rand()
	{
		// Create int list 'sList' contains random generated ints
		std::list<int> sList = { GetRandInt(), GetRandInt(), GetRandInt(), GetRandInt(), GetRandInt() };
		ShowListElements(sList, "'sList' Elements: ");
		
		// Get sum of the elements in 'sList'
		GetSumOfListElements(sList, 1);
	}	// End of the scope, all local variables & objects will be destroyed
	
	return 0;
}