#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
#include "game.h"

/*
* [Private] properties: Game
* [Public] properties: w, h, wspeed, hspeed
* [Public] functions:
* - Initial()			| Pass 'Game' object to each particle object, used in 'func.h' (Using: Game)
* - UpdatePosition()	| Update particle properties(w, h) (Using: w, h, wspeed, hspeed)
*/

class particles {
private:

	/*	Properties (Private)	*/
	game* Game;

public:

	/*	Properties (Public)	*/
	double w;
	double h;
	double wspeed = (((2.0 * rand()) / RAND_MAX) - 1);
	double hspeed = (((2.0 * rand()) / RAND_MAX) - 1);

public:
	particles(): Game(NULL) {	//	Constructor
		this->w = Game->GetRandomInt(0, game::SCREEN_WIDTH);
		this->h = Game->GetRandomInt(0, game::SCREEN_HEIGHT);
	}
	particles(const particles& _copy): Game(NULL), w(NULL), h(NULL) {	//	Copy Constructor
		std::cout << "[Particles]: Copy constructor shouldn't be called, exiting ..." << std::endl; exit(1);
	}
	~particles() {	//	Destructor

	}
	void Initial(game* _Game);
	void UpdatePosition();
};

