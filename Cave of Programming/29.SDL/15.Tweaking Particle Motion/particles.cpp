#include "particles.h"

/*	Define 'particles' class functions	*/
void particles::Initial(game* _Game) {
	this->Game = _Game;
}

void particles::UpdatePosition(int _Tick, int _PreventPixelLossMode) {
	if(lasttick != 0) this->interval = _Tick - lasttick;	//* interval will not be calculated on first UpdatePosition() call
	double wLastValidPosition = this->w;
	double hLastValidPosition = this->h;

	this->direction += interval * 0.0002;
	this->w += (speed * cos(this->direction)) * interval;
	this->h += (speed * sin(this->direction)) * interval;

	if (_PreventPixelLossMode == 1) {
		//* Prevent pixel loss (Reverse direction and rollback to previous valid position if the pixel about to go offscreen)
		if (this->w <= 0 || this->w >= game::SCREEN_WIDTH) { speed = -speed; w = wLastValidPosition; }
		if (this->h <= 0 || this->h >= game::SCREEN_HEIGHT) { speed = -speed; h = hLastValidPosition; }
	}
	else if (_PreventPixelLossMode == 2) {
		//* Prevent pixel loss (Move pixel back to center of the screen & recalculate direction, speed)
		if (this->w <= 0 || this->w >= game::SCREEN_WIDTH || this->h <= 0 || this->h >= game::SCREEN_HEIGHT) {
			this->w = game::SCREEN_WIDTH / 2; this->h = game::SCREEN_HEIGHT / 2;
			direction = (2 * M_PI * rand()) / RAND_MAX;
			speed = ((0.1 * rand()) / RAND_MAX);
		}
	}
	lasttick = _Tick;
}