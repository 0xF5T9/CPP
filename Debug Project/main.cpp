/*
 *	Debug Project 
 */

#include "func.h"

int main()
{
	system("cls");	// Clear Vscode Terminal
	srand((unsigned int)time(0));	// Set random seed for rand()
	const int testcase = 3;	// Select test case

	switch (testcase)
	{
		case 1:
		{
			{
				// Create int set
				std::set<int> sti {2, 7, 5, 9, 15, 3, 12};
				ShowSetElements(sti, "'sti' element values: ");

				// Finding elements in the set
				if (FindSetElement(sti, 12)) std::cout << "Element with value '12' found!" << std::endl;
				if (FindSetElement(sti, 8)) std::cout << "Element with value '8' found!" << std::endl;
				if (FindSetElement(sti, 7)) std::cout << "Element with value '7' found!" << std::endl;
				if (FindSetElement(sti, 11)) std::cout << "Element with value '11' found!" << std::endl;
				if (FindSetElement(sti, 5)) std::cout << "Element with value '5' found!" << std::endl;
			}
			break;
		}

		case 2:
		{
			{
				// Create string set
				std::set<std::string> sts{ "Apple", "Orange", "Grape"};
				ShowSetElements(sts, "'sts' element values: ");

				// Finding elements in the set
				if (FindSetElement(sts, "Dragonfruit")) std::cout << "Element with value 'Dragonfruit' found!" << std::endl;
				if (FindSetElement(sts, "Apple")) std::cout << "Element with value 'Apple' found!" << std::endl;
				if (FindSetElement(sts, "Orange")) std::cout << "Element with value 'Orange' found!" << std::endl;
				if (FindSetElement(sts, "Pale")) std::cout << "Element with value 'Pale' found!" << std::endl;
				if (FindSetElement(sts, "Pineapple")) std::cout << "Element with value 'Pineapple' found!" << std::endl;
			}
			break;
		}

		case 3:
		{
			{
				// Create set contains 'Person' objects
				std::set<Person> stp
				{ Person("Vi", 23), Person("Tu", 37), Person("Linh", 11), Person("Lam", 23), Person("Vi", 23) };
				ShowSetElements(stp, "'stp' element values: \n");

				// Finding elements in the set
				if (FindSetElement(stp, "Vi", 23)) std::cout << "[Vi, 23] Object found!" << std::endl;
				if (FindSetElement(stp, "Vi", 25)) std::cout << "[Vi, 25] Object found!" << std::endl;
				if (FindSetElement(stp, "Linh", 11)) std::cout << "[Linh, 11] Object found!" << std::endl;
				if (FindSetElement(stp, "Lam", 49)) std::cout << "[Lam, 49] Object found!" << std::endl;
				if (FindSetElement(stp, "Hoang", 37)) std::cout << "[Hoang, 37] Object found!" << std::endl;
				if (FindSetElement(stp, "Tu", 0)) std::cout << "[Tu, 0] Object found!" << std::endl;
			}
			break;
		}
	}
	

	return 0;
}