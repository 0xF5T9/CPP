/*
* (29) 9.Animating Particles
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
#include "func.h"

int main(int argc, char* argv[]) {		//* Any other type of main function will cause an undefined reference to main.

	game* Game = CreateObjectGame();

	if (Game->Initialize() == false) {
		std::cout << "[Game]: Initialization failed" << std::endl;
		exit(1);
	}
	else { std::cout << "[Game]: Initialization succeeded" << std::endl; }
	
	/*	Begin of Game Loop	*/
	srand((unsigned int)time(NULL)); //* Prevent repeat same sequence w/rand() 'GetRandomInt()'
	while (true) {

		/*int Red = Game->Bounce0_255(0.003);
		int Green = Game->Bounce0_255(0.002);
		int Blue = Game->Bounce0_255(0.001);

		for (int h = 0; h < game::SCREEN_HEIGHT; h++) {
			for (int w = 0; w < game::SCREEN_WIDTH; w++) {
				Game->Draw(h, w, Red, Green, Blue);
			}
		}*/
		for (int h = 0; h < game::SCREEN_HEIGHT; h++) {
			for (int w = 0; w < game::SCREEN_WIDTH; w++) {
				Game->Draw(h, w, 204, 204, 204);	//* Write tv-white background color
			}
		}
		for (int i = 0; i < 100000; i++) {	//* Write 100,000 black pixel dot at random position
			Game->Draw(Game->GetRandomInt(0, game::SCREEN_HEIGHT), Game->GetRandomInt(0, game::SCREEN_WIDTH), 0, 0, 0);
		}
		Game->ScrRefresh();

		if (Game->ListenEvent() == false) {
			break;
		}
	}

	Game->Close();
	FreeMemory(Game);
	return 0;
}