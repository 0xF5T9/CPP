/*
 *  19.Set | 2.Sorting logic & create internal comparison operator for user-defined datatypes
 */

#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\19.Set\2.Sorting logic & create internal comparison operator for user-defined datatypes\func.h"

int main()
{
	system("cls"); // Clear Vscode Terminal
	srand((unsigned int)time(0)); // Set random seed for rand()
	const int testcase = 2;	// Select test case

	switch (testcase)
	{
		case 1:
		{
			{
				/*
				 * Create a set of 'Person' objects with random 'age' property value
				 * Unlike primitive datatypes like: char, int, double, ... (which set have comparison operator for these on it own <, >,..)
				 * 'Person' is a user-defined datatype(in this case: a class)
				 *
				 * Therefore we have to create our own internal comparison operator operator<()
				 * to clarify the big-small relationship between elements
				 * (which is required while using set, a set always have its elements sorted)
				 * ↑ check 'person.h' for operator definition
				 */
				std::set<Person> st
				{
					Person("Hoang", GetRandInt()),
					Person("Minh", GetRandInt()),
					Person("Dung", GetRandInt()),
					Person("Lam", GetRandInt()),
					Person("Chuot", GetRandInt())
				};
				ShowSetElements(st, "'st' elements:\n");
			}	// End of the scope, local variables & objects will be destroyed
			break;
		}

		case 2:
		{
			{
				/*
				 * Create a set of ints with random integers
				 * The default sorting logic with int datatype is ascending
				 */
				std::set<int> st_1
				{
					GetRandInt(), GetRandInt(), GetRandInt(), GetRandInt(), GetRandInt()
				};
				ShowSetElements(st_1, "'st_1' elements: ");

				/*
				 *  Create another set of ints with random integers
				 * The default sorting logic can be changed by rewrite operator `operator()`
				 * via a struct (Check the struct definition in 'func.h')
				 */
				std::set<int, cmp> st_2 // Pass the struct 'cmp' as second parameter while declaring set
				{
					GetRandInt(), GetRandInt(), GetRandInt(), GetRandInt(), GetRandInt()
				};
				ShowSetElements(st_2, "'st_2' elements: "); // Now its descending
			}	// End of the scope, local variables & objects will be destroyed
			break;
		}
	}
	
	return 0;
}