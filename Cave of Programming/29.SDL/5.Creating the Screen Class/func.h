#pragma once
#include "game.h"

/*	Define create object functions	*/
game* CreateObjectGame() {
	game* CreateObject = new game();
	return CreateObject;
}

/*	Define free object memory functions	*/
void FreeMemory(game* _Ptr) {
	delete _Ptr;
}