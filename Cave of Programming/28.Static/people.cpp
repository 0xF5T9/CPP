#include <iostream>
#include "people.h"

int people::TotalObject = 0;				//	Static variable must be defined at least once
std::string people::sString = "default";	//	Static variable must be defined at least once

int people::GetTotalObject() {	//	Public static function to access private static variable
	return TotalObject;
}