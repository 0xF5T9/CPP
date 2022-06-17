/*
 *  19.Set | 4.Return smallest elements in the vector using set
 */

#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\19.Set\4.Return smallest elements in the vector using set\func.h"

int main()
{
	system("cls");	// Clear Vscode Terminal
	srand((unsigned int)time(0));	// Set random seed for rand()

	{
		// Create a int vector contains random integers
		std::vector<int> sInt
		{
			GetRandInt(), GetRandInt(), GetRandInt(), GetRandInt(), GetRandInt()
		};
		ShowVectorElements(sInt, "'sInt' element values: ");

		// Get smallest elements
		std::cout << "The 1st smallest element is: " << GetSmallestElement(sInt, 1) << "\n";
		std::cout << "The 2nd smallest element is: " << GetSmallestElement(sInt, 2) << "\n";
		std::cout << "The 3rd smallest element is: " << GetSmallestElement(sInt, 3) << "\n";
		std::cout << "The 4th smallest element is: " << GetSmallestElement(sInt, 4) << "\n";
		std::cout << "The 5th smallest element is: " << GetSmallestElement(sInt, 5) << "\n";
		std::cout << "The 6th smallest element is: " << GetSmallestElement(sInt, 6) << "\n";
		std::cout << "The 7th smallest element is: " << GetSmallestElement(sInt, 7) << "\n";
	}

	return 0;
}