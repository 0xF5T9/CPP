/*
*	18.List | 4.Delete element by value or pos
*/

#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\18.List\4.Delete element by value or pos\func.h"

int main()
{
	srand((unsigned int)time(0)); // Set random seed for rand()
	const int testcase = 2; // Select test case

	switch (testcase)
	{
		case 1:
		{
			{
				// Create int list 'sList' contains random generated ints (From 0 to 10) & 99
				std::list<int> sList = { GetRandInt(0, 10), GetRandInt(0, 10), GetRandInt(0, 10),
					GetRandInt(0, 10), GetRandInt(0, 10), GetRandInt(0, 10), 99 };
				ShowListElements(sList, "Before remove elements: ");

				// Remove the 5th number in the list
				RemoveElementByPos(sList, 5);
				ShowListElements(sList, "After remove elements (5th number): ");

				// Remove numbers from 2th to 4th in the list
				RemoveElementByPos(sList, 2, 4);
				ShowListElements(sList, "After remove elements (From 2th to 4th): ");

				// Remove elements with value 99
				RemoveElementByVal(sList, 99);
				ShowListElements(sList, "After remove elements ('99'): ");

				break;
			}	// End of the scope, the local variables & objects will be destroyed
		}

		case 2:
		{
			{
				// Create list 'sList' contains 'Person' objects
				std::list<Person> sList =
				{
					Person("Vi"), Person("Huong"), Person("Tram"), Person("Hung"), Person("Lan"), Person("Van"), Person("Tu"), Person("Van")
				};
				ShowListElements(sList, "Before remove elements: \n");

				// Remove the 2th object in the list
				RemoveElementByPos(sList, 2);
				ShowListElements(sList, "After remove elements (2th object): \n");

				// Remove objects from 2th to 3th in the list
				RemoveElementByPos(sList, 2, 3);
				ShowListElements(sList, "After remove elements (From 2th to 3th): \n");

				// Remove objects with value 'Van' as 'name' property
				RemoveElementByVal(sList, "Van");
				ShowListElements(sList, "After remove elements ('Van'): \n");

				// Remove objects with value '5' as 'id' property
				RemoveElementByVal(sList, 5);
				ShowListElements(sList, "After remove elements ('5'): \n");

				break;
			}	// End of the scope, the local variables & objects will be destroyed
		}
	}
	
	return 0;
}