/*
* (29) 5.Creating the Screen Class
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

		// ...
		Game->Draw("RED");
		SDL_Delay(100);
		Game->Draw("GREEN");
		SDL_Delay(100);
		Game->Draw("BLUE");
		SDL_Delay(100);

		if (Game->ListenEvent() == false) {
			break;
		}
	}

	Game->Close();
	FreeMemory(Game);
	return 0;
}