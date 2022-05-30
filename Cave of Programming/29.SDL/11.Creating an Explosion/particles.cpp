#include "particles.h"

/*	Define 'particles' class functions	*/
void particles::Initial(game* _Game) {
	this->Game = _Game;
}

void particles::UpdatePosition() {
	double wLastValidPosition = this->w;
	double hLastValidPosition = this->h;
	this->w += (speed * cos(this->direction));
	this->h += (speed * sin(this->direction));
	//this->w += wspeed;
	//this->h += hspeed;

	//* Prevent pixel loss (Reverse direction and rollback to previous valid position if the pixel about to go offscreen)
	if (this->w <= 0 || this->w >= game::SCREEN_WIDTH) { speed = -speed; w = wLastValidPosition; }
	if (this->h <= 0 || this->h >= game::SCREEN_HEIGHT) { speed = -speed; h = hLastValidPosition; }
}