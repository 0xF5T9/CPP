/*
 *  18.List | 7.Sort list
 */

#include <iostream>
#include <string>
#include <list>
#include <vector>

int GetRandInt(int minimum = 0, int maximum = 100)
{
	return rand() % (maximum + 1 - minimum) + minimum;
}

void ShowVectorElements(const std::vector<int>& v, std::string extra = "")
{
	if (extra != "") std::cout << extra;
	for (const auto& x : v)
	{
		std::cout << x;
		if (&x != &v.back()) std::cout << "-";
	}
	std::cout << " (Size: " << (int)v.size() << ")" << std::endl;
}

void SortVectorElements(std::vector<int>& v, int mode = 1)
{
	if (mode != 1 && mode != 2) mode = 1;

	for (int i = 0; i < v.size() - 1; i++)
	{
		for (int j = i + 1; j < v.size(); j++)
		{
			if (mode == 1)
			{
				if (v[i] > v[j]) std::swap(v[i], v[j]);
			}
			else if (mode == 2)
			{
				if (v[i] < v[j]) std::swap(v[i], v[j]);
			}
		}
	}
}

void ShowListElements(const std::list<int>& l, std::string extra = "")
{
	if (extra != "") std::cout << extra;
	for (const auto& x : l)
	{
		std::cout << x;
		if (&x != &l.back()) std::cout << "-";
	}
	std::cout << " (Size: " << (int)l.size() << ")" << std::endl;
}

void SortListElements(std::list<int>& l, int mode = 1)
{
	if (mode != 1 && mode != 2) mode = 1;

	for (int i = 0; i < l.size() - 1; i++)
	{
		for (int j = i + 1; j < l.size(); j++)
		{
			/*
			* Unlike vector, in list you can't access list element directly like 'l[i]'
			* and must be access via iterators
			*/

			// Create 2 iterators that will represents i & j of for() loop
			std::list<int>::iterator it1 = l.begin();
			std::list<int>::iterator it2 = l.begin();

			// Make sure the iterators point to the right element
			std::advance(it1, i); // Advance iterator to 'i' position
			std::advance(it2, j); // Advance iterator to 'j' position


			if (mode == 1)
			{
				if (*it1 > *it2)
				{
					// Swap values
					int temp = *it1;
					*it1 = *it2;
					*it2 = temp;
				}
			}
			else if (mode == 2)
			{
				if (*it1 < *it2) 
				{
					// Swap values
					int temp = *it1;
					*it1 = *it2;
					*it2 = temp;
				}
			}
		}
	}
}

int main()
{
	system("cls");	// Clear Vscode Terminal
	srand((unsigned int)time(0));	// Set random seed for rand()
	const int testcase = 2;	// Select testcase

	switch (testcase)
	{
		case 1:
		{
			{
				// Create int vector contains random numbers & sort the vector
				std::vector<int> sVector = { GetRandInt(), GetRandInt(), GetRandInt(), GetRandInt(), GetRandInt() };
				ShowVectorElements(sVector, "Before Sorting: ");

				SortVectorElements(sVector, 1);
				ShowVectorElements(sVector, "Sorted (Ascending): ");

				SortVectorElements(sVector, 2);
				ShowVectorElements(sVector, "Sorted (Descending): ");
			}
			break;
		}

		case 2:
		{
			{
				// Create int list contains random numbers & sort the list
				std::list<int> sList = { GetRandInt(), GetRandInt(), GetRandInt(), GetRandInt(), GetRandInt() };
				ShowListElements(sList, "Before Sorting: ");

				SortListElements(sList, 1);
				ShowListElements(sList, "Sorted (Ascending): ");

				SortListElements(sList, 2);
				ShowListElements(sList, "Sorted (Descending): ");
			}
			break;
		}
	}

	return 0;
}