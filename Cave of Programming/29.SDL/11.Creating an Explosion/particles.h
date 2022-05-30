#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
#include <math.h>
#include "game.h"

/*
* [Private] properties: Game
* [Public] properties: w, h, wspeed, hspeed, speed, direction
* [Public] functions:
* - Initial()			| Pass 'Game' object to each particle object, used in 'func.h' (Using: Game)
* - UpdatePosition()	| Update particle properties(w, h) (Using: w, h, wspeed, hspeed, speed, direction)
*/

class particles {
private:

	/*	Properties (Private)	*/
	game* Game;

public:

	/*	Properties (Public)	*/
	double w;
	double h;
	double direction = (2 * M_PI * rand()) / RAND_MAX;
	//double wspeed = ((1.0 * rand()) / RAND_MAX);
	//double hspeed = ((1.0 * rand()) / RAND_MAX);
	double speed = ((1.0 * rand()) / RAND_MAX);

public:
	particles(): Game(NULL), w(0), h(0) {	//	Constructor
		this->w += (game::SCREEN_WIDTH / 2);	//*
		this->h += (game::SCREEN_HEIGHT / 2);	//*	Center each particle by default
		//this->w = Game->GetRandomInt(0, game::SCREEN_WIDTH);
		//this->h = Game->GetRandomInt(0, game::SCREEN_HEIGHT);
	}
	particles(const particles& _copy): Game(NULL), w(NULL), h(NULL) {	//	Copy Constructor
		std::cout << "[Particles]: Copy constructor shouldn't be called, exiting ..." << std::endl; exit(1);
	}
	~particles() {	//	Destructor

	}
	void Initial(game* _Game);
	void UpdatePosition();
};

