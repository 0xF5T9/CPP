/*
 *  18.List | 6.Delete elements (extra)
 */

#include <iostream>
#include <string>
#include <list>
#include <vector>

void ShowListElement(const std::list<int>& li, std::string extra = "")
{
	if (extra != "") std::cout << extra;
	if ((int)li.size() == 0) { std::cout << "<Empty>\n"; return; }
	for (const auto& x : li)
	{
		std::cout << x;
		if (&x != &li.back()) std::cout << "-";
	}
	std::cout << std::endl;
}

void RemoveListElementByVal(std::list<int>& li, int value, int mode = 1)
{
	if (mode != 1 && mode != 2) mode = 1; // Reset mode to 1 if set mode is invalid

	/*
	* Mode 1:
	* Works fine on most modern & up-to-date compiler (Recommended)
	*/
	if (mode == 1)
	{
		for (std::list<int>::iterator it = li.begin(); it != li.end(); it++)
		{
			if (*it == value)
			{
				li.erase(it);
			}
		}
	}

	/*
	* Mode 2:
	* Old-fashioned approach erasing elements via iterator
	*/
	if (mode == 2)
	{
		for (std::list<int>::iterator it = li.begin(); it != li.end(); it++)
		{
			if (*it == value)
			{
				/*
				* *.erase() return a iterator that point to near the one just got deleted
				* it = *.erase(it) | keeps the iterator pointing to the right list instead of the one that got deleted
				* it-- | fix the iterator back to the right location
				* 
				* i.e:
				* delete target: 3
				* given list: 1 2 3 4 3 5
				* loop 1: skip (1)
				* loop 2: skip (2)
				* loop 3: 3 found, executing it = *.erase(it)
				* ↑ target got deleted, now it pointing next element to 4 (given list now: 1 2 4 3 5)
				* ↑ executing it--, now it pointing to 2
				* loop 4: skip (4)
				* loop 5: 3 found, executing it = *.erase(it)
				* ↑ target got deleted, now it pointing next element to 5 (given list now: 1 2 4 5)
				* ↑ executing it--, now it pointing to 4
				* loop 6: skip (5), end loops
				* 
				* 
				* the whole point of 'it--' is to prevent loop getting skipped
				* because 'it = *.erase(it)' return the iterator which point to the next element
				* then the loop end and for loop's increment executed, leaving the element unchecked
				* i.e:
				* loop 5: 3 found, executing it = *.erase(it)
				* ↑ target got deleted, now it pointing next element to 5 (given list now: 1 2 4 5)
				* now without 'it--' for loop ends because 5 was the last element and was leave unchecked
				*/
				it = li.erase(it);
				it--;
			}
		}
	}
}
 

int main()
{
	system("cls");
	const int testcase = 2;

	switch (testcase)
	{
		case 1:
		{
			{
				// Create int list 'sList'
				std::list<int> sList = { 3, 2, 3, 5, 7 };
				ShowListElement(sList, "'sList' elements: ");

				// Remove elements with 3 as value (Using mode 1)
				RemoveListElementByVal(sList, 3, 1);
				ShowListElement(sList, "'sList' elements: ");
			}
			break;
		}

		case 2:
		{
			{
				// Create int list 'sList'
				std::list<int> sList = { 5, 5, 5, 5, 5 };
				ShowListElement(sList, "'sList' elements: ");

				// Remove elements with 5 as value (Using mode 2)
				RemoveListElementByVal(sList, 5, 2);
				ShowListElement(sList, "'sList' elements: ");
			}
			break;
		}
	}


	

	return 0;
}