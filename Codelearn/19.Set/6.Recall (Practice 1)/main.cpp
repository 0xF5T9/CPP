/*
 *  19.Set | 6.Recall (Practice 1)
 */

#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\19.Set\6.Recall (Practice 1)\func.h"

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
				// Create int vector
				std::vector<int> vi{ GetRandInt(), GetRandInt(), GetRandInt(), GetRandInt(), 6969 };
				for (const auto& x : vi)
				{
					std::cout << x;
					if (&x != &vi.back()) std::cout << "-";
					if (&x == &vi.back()) std::cout << std::endl;
				}

				// Sort vector elements
				for (int i = 0; i < vi.size() - 1; i++)
				{
					for (int j = i + 1; j < vi.size(); j++)
					{
						if (vi[i] > vi[j]) std::swap(vi[i], vi[j]);
					}
				}
				for (const auto& x : vi)
				{
					std::cout << x;
					if (&x != &vi.back()) std::cout << "-";
					if (&x == &vi.back()) std::cout << std::endl;
				}

				// Delete vector element at specific position
				int position = 3;
				std::vector<int>::iterator it = vi.begin();
				std::advance(it, position - 1);
				vi.erase(it);
				for (const auto& x : vi)
				{
					std::cout << x;
					if (&x != &vi.back()) std::cout << "-";
					if (&x == &vi.back()) std::cout << std::endl;
				}

				// Delete vector elements by position range
				int from = 2;
				int to = 3;
				std::vector<int>::iterator it_1 = vi.begin();
				std::vector<int>::iterator it_2 = vi.begin();
				std::advance(it_1, from - 1);
				std::advance(it_2, to);
				vi.erase(it_1, it_2);
				for (const auto& x : vi)
				{
					std::cout << x;
					if (&x != &vi.back()) std::cout << "-";
					if (&x == &vi.back()) std::cout << std::endl;
				}

				// Search and delete specific element
				int target = 6969;
				for (std::vector<int>::iterator it = vi.begin(); it != vi.end(); it++)
				{
					if (*it == target) 
					{ 
						/*
						* vi.erase(it); - this will cause access violation error on next loop
						* because on the next loop, it will try to access the deleted version of 'it'
						*/
						it = vi.erase(it); // <vector>.erase() return an iterator that point to the next element of the deleted one
						it--; // Reset to the right position (Check CL.18.6 for more details)
					}
				}
				for (const auto& x : vi)
				{
					std::cout << x;
					if (&x != &vi.back()) std::cout << "-";
					if (&x == &vi.back()) std::cout << std::endl;
				}
			}
			break;
		}

		case 2:
		{
			{
				// Create int list
				std::list<int> li { GetRandInt(), GetRandInt(), GetRandInt(), GetRandInt(), 6969 };
				for (const auto& x : li)
				{
					std::cout << x;
					if (&x != &li.back()) std::cout << "-";
					if (&x == &li.back()) std::cout << std::endl;
				}

				// Sort list elements
				for (int i = 0; i < li.size() - 1; i++)
				{
					std::list<int>::iterator it_1 = li.begin();
					std::advance(it_1, i);
					for (int j = i + 1; j < li.size(); j++)
					{
						std::list<int>::iterator it_2 = li.begin();
						std::advance(it_2, j);
						if (*it_1 > *it_2)
						{
							int temp = *it_1;
							*it_1 = *it_2;
							*it_2 = temp;
						}
					}
				}
				for (const auto& x : li)
				{
					std::cout << x;
					if (&x != &li.back()) std::cout << "-";
					if (&x == &li.back()) std::cout << std::endl;
				}
				
				// Delete list element at specific position
				int position = 3;
				std::list<int>::iterator it = li.begin();
				std::advance(it, position - 1);
				li.erase(it);
				for (const auto& x : li)
				{
					std::cout << x;
					if (&x != &li.back()) std::cout << "-";
					if (&x == &li.back()) std::cout << std::endl;
				}

				// Delete vector elements by position range
				int from = 2;
				int to = 3;
				std::list<int>::iterator it_1 = li.begin();
				std::list<int>::iterator it_2 = li.begin();
				std::advance(it_1, from - 1);
				std::advance(it_2, to);
				li.erase(it_1, it_2);
				for (const auto& x : li)
				{
					std::cout << x;
					if (&x != &li.back()) std::cout << "-";
					if (&x == &li.back()) std::cout << std::endl;
				}

				// Search and delete specific element

				/* Method 1 (Recommended): List come with <list>.remove(value) */
				int target = 6969;
				li.remove(target);
				for (const auto& x : li)
				{
					std::cout << x;
					if (&x != &li.back()) std::cout << "-";
					if (&x == &li.back()) std::cout << std::endl;
				}

				/* Method 2: Same approach as vector */
				//for (std::list<int>::iterator it = li.begin(); it != li.end(); it++)
				//{
				//	if (*it == target)
				//	{
				//		/*
				//		* li.erase(it); - this will cause access violation error on next loop
				//		* because on the next loop, it will try to access the deleted version of 'it'
				//		*/
				//		it = li.erase(it); // <list>.erase() return an iterator that point to the next element of the deleted one
				//		it--; // Reset to the right position (Check CL.18.6 for more details)
				//	}
				//}
				//for (const auto& x : li)
				//{
				//	std::cout << x;
				//	if (&x != &li.back()) std::cout << "-";
				//	if (&x == &li.back()) std::cout << std::endl;
				//}
			}
			break;
		}

		case 3:
		{
			{
				// Create int set (Default sorting logic(int) in set is ascending)
				std::set<int> si_default {1, GetRandInt(), 2, GetRandInt(), 3, 6969 };
				std::set<int>::iterator t1_it = si_default.begin();
				std::advance(t1_it, si_default.size() - 1);
				for (const auto& x : si_default)
				{
					std::cout << x;
					if (&x != &*t1_it) std::cout << "-";
					if (&x == &*t1_it) std::cout << std::endl;
				}

				// Create int set (With sorting logic is descending(rewrited via struct 'cmp'))
				std::set<int, cmp> si(si_default.begin(), si_default.end()); // Initialize 'si' with 'si_default' elements
				std::set<int>::iterator t2_it = si.begin();
				std::advance(t2_it, si.size() - 1);
				for (const auto& x : si)
				{
					std::cout << x;
					if (&x != &*t2_it) std::cout << "-";
					if (&x == &*t2_it) std::cout << std::endl;
				}

				// Delete set element at specific position
				int position = 4;
				std::set<int>::iterator t3_it = si.begin();
				std::advance(t3_it, position - 1);
				si.erase(t3_it);
				std::set<int>::iterator t4_it = si.begin();
				std::advance(t4_it, si.size() - 1);
				for (const auto& x : si)
				{
					std::cout << x;
					if (&x != &*t4_it) std::cout << "-";
					if (&x == &*t4_it) std::cout << std::endl;
				}

				// Delete set elements by position range
				int from = 3;
				int to = 4;
				std::set<int>::iterator it_1 = si.begin();
				std::set<int>::iterator it_2 = si.begin();
				std::advance(it_1, from - 1);
				std::advance(it_2, to);
				si.erase(it_1, it_2);
				std::set<int>::iterator t5_it = si.begin();
				std::advance(t5_it, si.size() - 1);
				for (const auto& x : si)
				{
					std::cout << x;
					if (&x != &*t5_it) std::cout << "-";
					if (&x == &*t5_it) std::cout << std::endl;
				}

				// Search and delete specific element
				int target = 6969;
				/*
				* <set>.find(x) return an iterator that point to where x is found,
				* if x is not found it will return an iterator point to <set>.end()
				*/
				std::set<int>::iterator f_it = si.find(target);
				if (f_it != si.end()) // target found!
				{
					si.erase(f_it);
				}
				std::set<int>::iterator t6_it = si.begin();
				std::advance(t6_it, si.size() - 1);
				for (const auto& x : si)
				{
					std::cout << x;
					if (&x != &*t6_it) std::cout << "-";
					if (&x == &*t6_it) std::cout << std::endl;
				}
			}
		}
	}

	return 0;
}