/*
* (29) 10.Animating Particles
*/

/*
* Error: "unresolved external symbol main referenced in function ..." 
* ↑ can be solved by adding "#define SDL_MAIN_HANDLED" to the top & make sure main() is like this "int main(int argc, char* argv[])"
* Solution Source: https://wiki.libsdl.org/SDL_SetMainReady | https://stackoverflow.com/questions/6847360/error-lnk2019-unresolved-external-symbol-main-referenced-in-function-tmainc
*/

#define SDL_MAIN_HANDLED
#include <iostream>
#include <stdlib.h>
#include <string>
#include <SDL.h>
#include <Windows.h>
#include "game.h"
#include "particles.h"
#include "func.h"

int main(int argc, char* argv[]) {		//* Any other type of main function will cause an undefined reference to main.

	srand((unsigned int)time(NULL));	//* Prevent repeat same sequence w/rand() | 'GetRandomInt()'
	game* Game = CreateObjectGame();

	if (Game->Initialize() == false) {
		std::cout << "[Game]: Initialization failed" << std::endl;
		exit(1);
	}
	else { std::cout << "[Game]: Initialization succeeded" << std::endl; }
	
	/*	Begin of Game Loop	*/
	game::TOTAL_PARTICLES = 1000; particles* Particles = CreateObjectParticles(Game, game::TOTAL_PARTICLES); //* Create particle objects, each have random width & height
	while (true) {

		int Red = Game->Bounce0_255(0.001);

		for (int h = 0; h < game::SCREEN_HEIGHT; h++) {
			for (int w = 0; w < game::SCREEN_WIDTH; w++) {
				Game->Draw(h, w, 0, 0, 0);					//* Set all pixels to pitch black 
			}
		}

		for (int i = 0; i < game::TOTAL_PARTICLES; i++) {
			Particles[i].UpdatePosition();	//* Update particle position each loop
			Game->Draw((int)Particles[i].h, (int)Particles[i].w, Red, 100, 255);
		}
		Game->ScrRefresh();

		if (Game->ListenEvent() == false) {
			break;
		}
	}

	Game->Close();
	FreeMemory(Particles);
	FreeMemory(Game);
	return 0;
}