/*
*	Debug Project
*/

#include "func.h"

int main()
{
	system("cls");
	const short testcase = 2;

	switch (testcase)
	{
		case 1:
		{
			{
				std::string sStr = "3[bca]";
				std::string result = DecodeString(sStr);

				std::cout << result << std::endl;
			}
			break;
		}

		case 2:
		{
			{
				std::string sStr = "1[a3[b]1[ab]]";
				std::string result = DecodeString(sStr);

				std::cout << result << std::endl;
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