/*
 *  20.Stack | 4.Stack concat (Practice 2)
 */

#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\20.Stack\4.Stack concat (Practice 2)\func.h"

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