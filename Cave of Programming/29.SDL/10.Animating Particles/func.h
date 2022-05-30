#pragma once
#include "game.h"
#include "particles.h"

/*	Define create object functions	*/
game* CreateObjectGame() {
	game* CreateObject = new game();
	return CreateObject;
}

particles* CreateObjectParticles(game* _Game, int _Number) {
	particles* CreateObject = new particles[_Number];
	for (int i = 0; i < _Number; i++) {
		CreateObject[i].Initial(_Game); //* Pass 'Game' object to each particle object
	}
	return CreateObject;
}

/*	Define free object memory functions	*/
void FreeMemory(game* _Ptr) {
	delete _Ptr;
}

void FreeMemory(particles* _Ptr) {
	delete[] _Ptr;
}