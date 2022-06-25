/*
 *  20.Stack | 3.Pop min (Practice 1)
 */

#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\20.Stack\3.Pop min (Practice 1)\func.h"

using std::vector;

int main()
{
	{
		vector<int> vi 
		{4, 2, 6, 7, 8, 1};
		ShowElements(vi);
		
		PopMin(vi);
		ShowElements(vi);
	}

	return 0;
}