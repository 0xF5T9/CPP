#include "particles.h"

/*	Define 'particles' class functions	*/
void particles::Initial(game* _Game) {
	this->Game = _Game;
}

void particles::UpdatePosition() {
	this->w += wspeed;
	this->h += hspeed;

	//* Prevent pixel loss (Reverse direction if pixel about to go offscreen)
	if (w <= 0 || w >= game::SCREEN_WIDTH) wspeed = -wspeed;	
	if (h <= 0 || h >= game::SCREEN_HEIGHT) hspeed = -hspeed;
}