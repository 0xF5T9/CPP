/*
 *  19.Set | 1.Initialize set and remove vector element duplicates via set
 */

#include <iostream>
#include <string>
#include <set>
#include <vector>

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

void RemoveElementDuplicates(std::vector<int>& v, int mode = 1)
{
	if (mode != 1 && mode != 2) mode = 1;

	// Mode 1: Normal approach using vector only
	if (mode == 1)
	{
		std::vector<int> r; // Create vector 'r' to stores final results
		r.push_back(v.front()); // Add the first element of vector 'v' to vector 'r' so the first loop will have something to do the compares
		for (auto x : v)
		{
			bool existed = 0; // Create bool that check if the element(x) with same value already existed in 'r'
			for (auto a : r) // Looping through every elements in 'r'
			{
				if (x == a) { existed = true; } // Mark the element(x) is already existed in 'r'
			}
			if (existed == true) continue; // If the element(x) already existed, continue to the next loop
			r.push_back(x); // If the element(x) isn't yet exist in 'r', adding it to 'r'
		}
		v = r; // Paste the result 'r' to 'v'
		return;
	}
	else if (mode == 2)
	{
		/*
		* set used to store the unique elements (duplicates will be ignored), and all elements are sorted by default
		* plus it cannot be modified within the set
		* but instead can removed and add the modified value of the element
		*/

		std::vector<int> r;	// Create vector 'r' to stores final results
		std::set<int> s;	// Create set 's' to stores tempory results

		for (auto x : v) // This loop adding all elements of vector 'v' to set 's'
		{
			s.insert(x); // If x element already existed in set 's', it will be ignored
		}
		for (auto x : s) // Now set 's' contains all unique numbers of vector 'v', adding all of 's' elements to 'r'
		{
			r.push_back(x);
		}
		v = r; // Paste the result 'r' to 'v'
		return;
	}
}

int main()
{
	system("cls");	// Clear Vscode Terminal
	srand((unsigned int)time(0));	// Set random seed for rand()
	const int testcase = 2;	// Select test case

	switch (testcase)
	{
		case 1:
		{
			{
				// Create int vector contains numbers and remove duplicates
				std::vector<int> sVector = { 3, 2, 2, 4, 5, 8, 8, 1, 9, 10, 10, 4 };
				ShowVectorElements(sVector, "'sVector' elements: ");
				
				RemoveElementDuplicates(sVector, 1); // Using mode 1
				ShowVectorElements(sVector, "'sVector' elements: ");
			}
			break;
		}

		case 2:
		{
			{
				// Create int vector contains numbers and remove duplicates
				std::vector<int> sVector = { 3, 2, 2, 4, 5, 8, 8, 1, 9, 10, 10, 4 };
				ShowVectorElements(sVector, "'sVector' elements: ");

				RemoveElementDuplicates(sVector, 2); // Using mode 2
				ShowVectorElements(sVector, "'sVector' elements: ");
			}
		}
	}

	return 0;
}