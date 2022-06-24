/*
*	19.Set | 7.Recall (Practice 2)
*/

#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\19.Set\7.Recall (Practice 2)\func.h"

int main()
{
	srand((unsigned int)time(0));
	system("cls");
	const int testcase = 3;

	switch (testcase)
	{
		case 1:
		{
			{
				std::vector<int> vi 
				{ GetRandInt(), GetRandInt(), GetRandInt(), GetRandInt(), GetRandInt() };
				ShowVectorElements(vi, "'vi' element values: ");

				InsertVectorElements(vi, 6969, 3);
				ShowVectorElements(vi, "'vi' element values: ");
			}
			break;
		}

		case 2:
		{
			{
				std::list<int> li
				{ GetRandInt(), GetRandInt(), GetRandInt(), GetRandInt(), GetRandInt() };
				ShowListElements(li, "'li' element values: ");

				InsertListElements(li, 6969, 3);
				ShowListElements(li, "'li' element values: ");
			}
			break;
		}

		case 3:
		{
			{
				std::set<int> si
				{ GetRandInt(), GetRandInt(), GetRandInt(), GetRandInt(), GetRandInt() };
				ShowSetElements(si, "'si' element values: ");

				InsertSetElements(si, 6969);
				ShowSetElements(si, "'si' element values: ");
			}
			break;
		}
		default:
		{
			break;
		}
	}

	return 0;
}