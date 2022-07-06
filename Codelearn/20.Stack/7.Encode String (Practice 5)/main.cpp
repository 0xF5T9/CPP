/*
 *  20.Stack | 7.Encode String (Practice 5)
 */

#include "C:\Users\truye\Desktop\C++\CPP\Codelearn\20.Stack\7.Encode String (Practice 5)\func.h"

int main()
{
	system("cls");	// Clear Vscode Terminal
	const short testcase = 2;	// Select test case

	switch (testcase)
	{
		case 1:
		{
			{
				// Solve example 1
				std::string sStr = "aaabbaaac";
				std::cout << "Solved with self-approach: " << encodeString_Self(sStr) << std::endl;
				std::cout << "Solved with codelearn-approach: " << encodeString_CL(sStr) << std::endl;
			}
			break;
		}

		case 2:
		{
			{
				// Solve example 2
				std::string sStr = "ab";
				std::cout << "Solved with self-approach: " << encodeString_Self(sStr) << std::endl;
				std::cout << "Solved with codelearn-approach: " << encodeString_CL(sStr) << std::endl;
			}
			break;
		}
	}

	return 0;
}