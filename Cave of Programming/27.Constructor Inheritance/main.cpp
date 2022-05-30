/*
* 27.Constructor Inheritance
*/

#include <iostream>
#include "people.h"

int main() {

	int iOption = 4;
	switch (iOption) {
	case 1: {
		people peopleObj(1284); //	Or use default constructor instead: "people peopleObj;"
		peopleObj.Breath();
		peopleObj.ShoutDNA();
		break; 
	}
	case 2: {
		baby babyObj(8317);	//	Or use default constructor instead: "baby babyObj;"
		babyObj.Breath();
		babyObj.Cry();
		babyObj.ShoutDNA();	//1* Subclass inheritance its superclass's functions, indirectly interact with superclass's properties
		break;
	}
	case 3: {
		teen teenObj(9595);	//	Or use default constructor instead: "teen teenObj;"
		teenObj.Breath();
		teenObj.Walk();
		teenObj.ShoutDNA();	//1*
		break;
	}
	case 4: {
		adult adultObj(1802);	//	Or use default constructor instead: "adult adultObj;"
		adultObj.Breath();
		adultObj.Walk();
		adultObj.Fight();
		adultObj.ShoutDNA();	//1*
		break;
	}
	default:
		break;
	}

	return 0;
}