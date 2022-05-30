/*
* (29) 14.Implementing Box Blur
*/

/*
* Error: "unresolved external symbol main referenced in function ..." 
* ↑ can be solved by adding "#define SDL_MAIN_HANDLED" to the top & make sure main() is like this "int main(int argc, char* argv[])"
* Solution Source: https://wiki.libsdl.org/SDL_SetMainReady | https://stackoverflow.com/questions/6847360/error-lnk2019-unresolved-external-symbol-main-referenced-in-function-tmainc | https://lazyfoo.net/tutorials/SDL
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
	game::TOTAL_PARTICLES = 5000; particles* Particles = CreateObjectParticles(Game, game::TOTAL_PARTICLES); //* Create particle objects, each have random width & height
	int Green = Game->GetRandomInt(0, 255);
	int Blue = Game->GetRandomInt(0, 255);
	while (true) {

		int Tick = (int)GetTickCount64();
		int Red = Game->Bounce0_255(0.001);

		for (int i = 0; i < game::TOTAL_PARTICLES; i++) {
			Particles[i].UpdatePosition(Tick);	//* Update particle position each loop
			Game->Draw((int)Particles[i].h, (int)Particles[i].w, Red, Green, Blue, false);
		}
		Game->BoxBlurScreen();
		Game->ScrRefresh(0);

		if (Game->ListenEvent() == false) {
			break;
		}
	}

	Game->Close();
	FreeMemory(Particles);
	FreeMemory(Game);
	return 0;
}