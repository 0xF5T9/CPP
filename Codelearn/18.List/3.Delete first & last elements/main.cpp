/*
*	18.List | 3.Delete first & last elements
*/

#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\18.List\3.Delete first & last elements\func.h"

int main()
{
	srand((unsigned int)time(0)); // Set random seed for rand()
	const int testcase = 2; // Select test case

	switch (testcase)
	{
		case 1:
		{
			{
				// Create list of strings 'sList' and assign element values (Inline initialization)
				std::list<std::string> sList =
				{
					"Apple", "Tomato", "Grape", "Banana", "Durian"
				};
				ShowListElements(sList, "Before delete the first element: ");

				/*
				 * push_front() | Add new element to front of the list
				 * pop_front() | Delete first element of the list
				 */
				sList.pop_front();
				ShowListElements(sList, "After delete the first element: ");

				sList.push_front("Strawberry");
				ShowListElements(sList, "After add new element to front of the list: ");

				break;
			}	// End of the scope, the local variables & objects will be destroyed
		}

		case 2:
		{
			{
				// Create list of 'Point' objects 'sList' and assign element values (Inline initialization)
				std::list<Point> sList =
				{
					Point(GetRandInt(), GetRandInt()), Point(GetRandInt(), GetRandInt()), Point(GetRandInt(), GetRandInt()), Point(GetRandInt(), GetRandInt()), Point(GetRandInt(), GetRandInt())
				};
				ShowListElements(sList, "Before delete the last element: \n");

				/*
				 * push_back() | Add new element to back of the list
				 * pop_back() | Delete last element of the list
				 */
				sList.pop_back();
				ShowListElements(sList, "After delete the last element: \n");

				sList.push_back(Point(99, 99));
				ShowListElements(sList, "After add new element to back of the list: \n");

				break;
			}	// End of the scope, the local variables & objects will be destroyed
		}
	}
	
	return 0;
}