/*
 *  20.Stack | 8.Remove elements (Practice 6)
 */

#include "C:\Users\truye\Desktop\C++\CPP\Codelearn\20.Stack\8.Remove elements (Practice 6)\func.h"

/*
 *	Given a vector of ints and an int 'k'
 *	Removing first 'k' elements that smaller than the one behind it
 *	(Delete arr[i] if arr[i + 1] > arr[i]).
 *	If you delete arr[i + 1] then arr[i + 2] become the one that behind arr[i], arr[i + 3] behinds arr[i + 2]
 */

int main()
{	
	system("cls");	// Clear Vscode Terminal
	const short testcase = 1;	// Select test case

	switch (testcase)
	{
		case 1:
		{
			{
				int k = 2;
				std::vector<int> example_1 { 20, 10, 25, 30, 40 };

				ShowElements(example_1, "Before (Example 1): ");

				std::vector<int> result1 = RemoveElements(example_1, k);	// Vector only approach
				std::vector<int> result2 = RemoveElements_S(example_1, k, 1);	// Stack approach
				ShowElements(result1, "After (result1): ");
				ShowElements(result2, "After (result2): ");
			}
			break;
		}

		case 2:
		{
			{
				int k = 1;
				std::vector<int> example_2{ 3, 100, 1 };

				ShowElements(example_2, "Before (Example 2): ");

				std::vector<int> result1 = RemoveElements(example_2, k);	// Vector only approach
				std::vector<int> result2 = RemoveElements_S(example_2, k);	// Stack approach
				ShowElements(result1, "After (result1): ");
				ShowElements(result2, "After (result2): ");
			}
			break;
		}
	}

	return 0;
}