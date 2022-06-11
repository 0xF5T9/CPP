/*
*	Debug Project
*/

#include "func.h"

int main()
{
	srand((unsigned int)time(0)); // Set random seed for rand()
	const int testcase = 1; // Select test case

	switch (testcase)
	{
		case 1:
		{
			{
				// Create vector that contains integers
				std::vector<int> sInt = { 1, 2, 5, 9, 6, 5, 2, 7, 8, 8, 4, 1, 4 };
				ShowVectorElements(sInt, "Before filter: ");

				// Create vector that contains intergers (Get list of ints appear the most from 'sInt')
				std::vector<int> Filtered_sInt = GetListOfNumbersAppearMost(sInt);
				ShowVectorElements(Filtered_sInt, "After filter: ");

				break;
			}
		}

		case 2:
		{
			{
				// Create vector that contains strings
				std::vector<std::string> sString = { "Apple", "Orange", "Pale", "Apple", "Banana", "Durian", "Grape", "Orange", "Pale", "Dragonfruit", "Grape", "Apple", "Grape"};
				ShowVectorElements(sString, "Before filter: ");

				// Create vector that contains strings (Get list of strings appear the most from 'sString')
				std::vector<std::string> Filtered_sString = GetListOfStringsAppearMost(sString);
				ShowVectorElements(Filtered_sString, "After filter: ");

				break;
			}
		}

		case 3:
		{
			{
				// Create vector that contains 'Person' objects
				std::vector<Person> Persons = {
					Person("Vi", GetRandInt(100, 1)),
					Person("Vi", GetRandInt(100, 1)),
					Person("Hung", GetRandInt(100, 1)),
					Person("Tu", GetRandInt(100, 1)),
					Person("Giang", GetRandInt(100, 1)),
					Person("Giang", GetRandInt(100, 1)),
					Person("Giang", GetRandInt(100, 1)),
					Person("Vi", GetRandInt(100, 1)),
					Person("Lam", GetRandInt(100, 1)),
					Person("Tu", GetRandInt(100, 1))
				};
				ShowVectorElements(Persons, "Before filter: ");

				// Create vector that contains 'Person' objects (Get list of objects appear the most from 'Persons')
				std::vector<Person> Filtered_Persons = GetListOfObjectsAppearMost(Persons);
				ShowVectorElements(Filtered_Persons, "After filter: ");
			}
		}
	}
	
	return 0;
}