/*
* 25.Namespace
*/

#include <iostream>
#include "pp1.h"
#include "pp2.h"

int main() {
	
	pp1::people pp1;	//	Use namespace pp1
	pp2::people pp2;	// Use namespace pp2

	pp1.Shout();
	pp2.Shout();

	return 0;
}