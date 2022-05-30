#pragma once
#include "people.h"

/*	Create object function for 'people' class	*/
people* CreateObject(std::string _name, int _age) {
	people* CreateObject = new people();
	CreateObject->name = _name;
	CreateObject->age = _age;
	return CreateObject;
}