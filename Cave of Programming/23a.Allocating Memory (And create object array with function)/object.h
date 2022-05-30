#pragma once
#include "people.h"

/*	Create object function for 'people' class (Single)	*/
people* CreateObject(std::string _name, int _age) {
	people* CreateObject = new people();
	CreateObject->name = _name;
	CreateObject->age = _age;
	return CreateObject;
}


/*	Create object function for 'people' class (Array)	*/
people* CreateObjectArray(int _totalarray) {
	people* CreateObject = new people[_totalarray]();
	return CreateObject;
}