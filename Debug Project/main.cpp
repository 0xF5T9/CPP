/*
*	Debug Project
*/

#include "func.h"

using std::vector;

int main()
{
	{
        vector<int> a{ 1, 2, 6 };
        vector<int> b{ 2, 4 };
        vector<int> ret = stackConcat(a, b);
        ShowElements(ret);
	}

	return 0;
}