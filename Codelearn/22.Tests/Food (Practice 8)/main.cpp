/*
*	Debug Project
*/

#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\22.Tests\Food (Practice 8)\func.h"

int main()
{
	system("cls"); // Clear Vscode Terminal
	std::cout << std::fixed << std::setprecision(2); // Set precision for floating point entities
	srand((unsigned int)time(0)); // Set random seed for rand() | 'func.h'
	const int Select = 4; // Select test cases
	
	switch (Select)
	{
		case 1:
		{
			std::cout << "[TEST CASE 1]" << std::endl;
			{
				// Create vector that contains 'CannedFood' objects
				std::vector<CannedFood> cfs{
				CannedFood("Sweetcorns", 14.99, GetRandInt()),
				CannedFood("Tomato Sauce", 40.95, GetRandInt()),
				CannedFood("Spam Classic", 20.47, GetRandInt())
				};
				ShowVectorElements(cfs, "Before sorting:", 1);

				CannedFood::SortByNumberBox(cfs);
				ShowVectorElements(cfs, "After sorting:", 1);
			}	// End of the scope, the vector 'cfs' will be destroyed
			break;
		}
		case 2:
		{
			std::cout << "[TEST CASE 2]" << std::endl;
			{
				// Create vector that contains 'NonCFood' objects
				std::vector<NonCFood> ncfs{
					NonCFood("Mangos", 20.35, GetRandDouble()),
					NonCFood("Durian", 99.15, GetRandDouble()),
					NonCFood("Strawberry", 15.22, GetRandDouble())
				};
				ShowVectorElements(ncfs, "Before sorting:", 1);

				NonCFood::SortByWeight(ncfs);
				ShowVectorElements(ncfs, "After sorting:", 1);
			}	// End of the scope, the vector 'ncfs' will be destroyed
			break;
		}
		case 3:
		{
			std::cout << "[TEST CASE 3]" << std::endl;
			{
				/*
				* Create vector that contains 'Food' pointers
				* Each pointer point to a 'CannedFood' object allocated via 'new' operator (Up-casting)
				*/ 
				std::vector<Food*> fs{
					new CannedFood("Sweetcorns", 14.99, GetRandInt()),
					new CannedFood("Tomato Sauce", 40.95, GetRandInt()),
					new CannedFood("Spam Classic", 20.47, GetRandInt())
				};
				ShowVectorElements(fs, "Before sorting:", 1);

				CannedFood::SortByNumberBox(fs); // * Remarkable, go to definition!
				ShowVectorElements(fs, "After sorting:", 1);

				// Objects initialized by each pointer via 'new' operator, therefore must be deallocated with 'delete'
				FreeMemory(fs);
			}	// End of the scope, the vector 'fs' will be destroyed
			break;
		}
		case 4:
		{
			std::cout << "[TEST CASE 4]" << std::endl;
			{
				/*
				* Create vector that contains 'Food' pointers
				* Each pointer point to a 'NonCFood' object allocated via 'new' operator (Up-casting)
				*/
				std::vector<Food*> fs{
					new NonCFood("Mangos", 20.35, GetRandDouble()),
					new NonCFood("Durian", 99.15, GetRandDouble()),
					new NonCFood("Strawberry", 15.22, GetRandDouble())
				};
				ShowVectorElements(fs, "Before sorting:", 1);

				NonCFood::SortByWeight(fs);	// * Remarkable, go to definition!
				ShowVectorElements(fs, "After sorting:", 1);

				// Objects initialized by each pointer via 'new' operator, therefore must be deallocated with 'delete'
				FreeMemory(fs);
			}	// End of the scope, the vector 'fs' will be destroyed
			break;
		}
	}

	return 0;
}