/*
 *  19.Set | 3.Removing 1D duplicates in 2D Vector via Set
 */

#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\19.Set\3.Removing 1D duplicates in 2D Vector via Set\func.h"

int main()
{
	system("cls"); // Clear Vscode Terminal
	srand((unsigned int)time(0)); // Set random seed for rand()
	const int testcase = 3;	// Select test case

	switch (testcase)
	{
		case 1:
		{
			{
				// Create a 2D Vector that contains 1D Vectors (int)
				std::vector<std::vector<int> > st
				{
					{1, 1, 0, 1},
					{1, 1, 0, 1},
					{1, 0, 0, 1},
					{1, 1, 0, 1}
				};
				ShowVectorElements(st);
				
				// Removing duplicates
				RemoveVectorDuplicates(st);
				ShowVectorElements(st);
			}	// End of the scope, local variables & objects will be destroyed
			break;
		}

		case 2:
		{
			{
				// Create a 2D Vector that contains 1D Vectors (string)
				std::vector<std::vector<std::string> > st
				{
					{"Apple", "Apple", "Grape"},
					{"Apple", "Apple", "Grape"},
					{"Strawberry", "Apple", "Grape"},
					{"Apple", "Apple", "Grape"}
				};
				ShowVectorElements(st);

				// Removing duplicates
				RemoveVectorDuplicates(st);
				ShowVectorElements(st);
			}	// End of the scope, local variables & objects will be destroyed
			break;
		}

		case 3:
		{
			{
				// Create a 2D Vector that contains 1D Vectors ('Person' objects)
				std::vector<std::vector<Person> > st
				{
					{Person("Vi", 22), Person("Tu", 31)},
					{Person("Vi", 22), Person("Tu", 31)},
					{Person("Huyen", 47), Person("Vuong", 8)},
					{Person("Vi", 22), Person("Tu", 31)},
				};
				ShowVectorElements(st);

				RemoveVectorDuplicates(st);
				ShowVectorElements(st);
			}	// End of the scope, local variables & objects will be destroyed
			break;
		}
	}
	
	return 0;
}