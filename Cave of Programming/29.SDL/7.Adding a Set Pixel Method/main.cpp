/*
* (29) 7.Adding a Set Pixel Method
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
	while (true) {

		for (int h = 0; h < game::SCREEN_HEIGHT; h++) {
			for (int w = 0; w < game::SCREEN_WIDTH; w++) {						//* Draw pixel line by line
				Game->Draw(h, w, 51, 42, 47);
			}
		}
		Game->Draw(game::SCREEN_HEIGHT/2, game::SCREEN_WIDTH/2, 0, 255, 0);		//*	Draw pixel in middle screen
		Game->ScrRefresh();

		if (Game->ListenEvent() == false) {
			break;
		}
	}

	Game->Close();
	FreeMemory(Game);
	return 0;
}