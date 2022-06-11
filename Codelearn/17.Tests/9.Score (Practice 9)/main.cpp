/*
*	17.Tests | 9.Score (Practice 9)
*/

#include "C:\Users\novar\Documents\GitHub\CPP\Codelearn\22.Tests\Score (Practice 9)\func.h"

int main()
{
	system("cls"); // Clear Vscode Terminal
	srand((unsigned int)time(0)); // Set random seed for rand()
	std::cout << std::fixed << std::setprecision(1); // Set precision for floating point entities
	const int testcase = 3;	// Select test case
	
	switch (testcase)
	{
		case 1:
		{
			{
				/*
				*	Create vector that contains 'Score' pointers
				*	Each pointer point to a 'NaturalScore' object (Up-casting)
				*/
				std::vector<Score*> scores = {
					new NaturalScore("Hien", GetRandDouble(), GetRandDouble(), GetRandDouble(), GetRandDouble(), GetRandDouble(), GetRandDouble()),
					new NaturalScore("Minh", GetRandDouble(), GetRandDouble(), GetRandDouble(), GetRandDouble(), GetRandDouble(), GetRandDouble()),
					new NaturalScore("Son", GetRandDouble(), GetRandDouble(), GetRandDouble(), GetRandDouble(), GetRandDouble(), GetRandDouble())
				};
				ShowVectorElements(scores, "", 1);

				Score::GetMaxBlockA(scores, 1);
				Score::GetMaxBlockB(scores, 1);
				Score::GetMaxAvgPoint(scores, 1);
				Score::GetMinAvgPoint(scores, 1);
				
				// The objects initialized by pointers via 'new' operator, therefore must be deallocated with 'delete'
				FreeMemory(scores);
				break;
			}	// End of the scope, the vector 'scores' will be destroyed
		}
		case 2:
		{
			{
				/*
				*	Create vector that contains 'Score' pointers
				*	Each pointer point to a 'SocialScore' object (Up-casting)
				*/
				std::vector<Score*> scores = {
					new SocialScore("An", GetRandDouble(), GetRandDouble(), GetRandDouble(), GetRandDouble(), GetRandDouble(), GetRandDouble()),
					new SocialScore("Thinh", GetRandDouble(), GetRandDouble(), GetRandDouble(), GetRandDouble(), GetRandDouble(), GetRandDouble()),
					new SocialScore("Nhan", GetRandDouble(), GetRandDouble(), GetRandDouble(), GetRandDouble(), GetRandDouble(), GetRandDouble())
				};
				ShowVectorElements(scores, "", 1);

				Score::GetMaxBlockA(scores, 1);
				Score::GetMaxBlockC(scores, 1);
				Score::GetMaxAvgPoint(scores, 1);
				Score::GetMinAvgPoint(scores, 1);

				// The objects initialized by pointers via 'new' operator, therefore must be deallocated with 'delete'
				FreeMemory(scores);
				break;
			}	// End of the scope, the vector 'scores' will be destroyed
		}
		case 3:
		{
			{
				/*
				*	Create vector that contains 'Score' pointers
				*	Each pointer point to a 'NaturalScore' or 'SocialScore' object (Up-casting)
				*/
				std::vector<Score*> scores = {
					new NaturalScore("Anh", GetRandDouble(), GetRandDouble(), GetRandDouble(), GetRandDouble(), GetRandDouble(), GetRandDouble()),
					new SocialScore("Phat", GetRandDouble(), GetRandDouble(), GetRandDouble(), GetRandDouble(), GetRandDouble(), GetRandDouble()),
					new NaturalScore("Sang", GetRandDouble(), GetRandDouble(), GetRandDouble(), GetRandDouble(), GetRandDouble(), GetRandDouble()),
					new SocialScore("Linh", GetRandDouble(), GetRandDouble(), GetRandDouble(), GetRandDouble(), GetRandDouble(), GetRandDouble()),
					new NaturalScore("Thu", GetRandDouble(), GetRandDouble(), GetRandDouble(), GetRandDouble(), GetRandDouble(), GetRandDouble()),
					new SocialScore("Van", GetRandDouble(), GetRandDouble(), GetRandDouble(), GetRandDouble(), GetRandDouble(), GetRandDouble())
				};
				ShowVectorElements(scores, "", 1);

				Score::GetMaxBlockA(scores, 1);
				Score::GetMaxBlockB(scores, 1);
				Score::GetMaxBlockC(scores, 1);
				Score::GetMaxAvgPoint(scores, 1);
				Score::GetMinAvgPoint(scores, 1);

				FreeMemory(scores);
				break;
			}	// End of the scope, the vector 'scores' will be destroyed
		}
		default:
		{
			break;
		}
	}
	return 0;
}