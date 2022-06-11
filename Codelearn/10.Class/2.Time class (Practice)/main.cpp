/*
 *	10.Class | 2.Time class (Practice)
 */

#include <iostream>
#include "time.h"

int main() 
{
	Time timeobj(23, 59, 59);
	timeobj.display();
	timeobj.nextSecond();
	timeobj.display();
	timeobj.previousSecond();
	timeobj.display();

	return 0;
}