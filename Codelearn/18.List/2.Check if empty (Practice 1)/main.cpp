/*
*	18.List | 2.Check if empty (Practice 1)
*/

#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\18.List\2.Check if empty (Practice 1)\func.h"

int main()
{
	system("cls"); // Clear Vscode Terminal
	srand((unsigned int)time(0)); // Set random seed for rand()
	const int testcase = 2; // Select test case

	switch (testcase)
	{
		case 1:
		{
			{
				// Create list of ints 'sList'
				std::list<int> sList;

				// Check if the list is empty (Return true if empty, false if not)
				if (sList.empty()) std::cout << "List 'sList' is empty! (Size: " << (int)sList.size() << ")\n";

				// Initialize elements for the list
				sList = { GetRandInt(), GetRandInt(), GetRandInt() };
				ShowListElements(sList, "'sList' elements: ");

				// Check if the list is empty (Return true if empty, false if not)
				if (!sList.empty()) std::cout << "List 'sList' isn't empty! (Size: " << (int)sList.size() << ")\n";

				break;
			}	// End of the scope, the local variables & objects will be destroyed
		}

		case 2:
		{
			{
				// Create list of 'Point' objects 'sList'
				std::list<Point> sList;

				// Check if the list is empty (Return true if empty, false if not)
				if (sList.empty()) std::cout << "List 'sList' is empty! (Size: " << (int)sList.size() << ")\n";

				// Initialize elements for the list
				sList = { Point(GetRandInt(), GetRandInt()), Point(GetRandInt(), GetRandInt()), Point(GetRandInt(), GetRandInt()) };
				ShowListElements(sList, "'sList' elements: ");

				// Check if the list is empty (Return true if empty, false if not)
				if (!sList.empty()) std::cout << "List 'sList' isn't empty! (Size: " << (int)sList.size() << ")\n";

				break;
			}	// End of the scope, the local variables & objects will be destroyed
		}
	}
	
	return 0;
}