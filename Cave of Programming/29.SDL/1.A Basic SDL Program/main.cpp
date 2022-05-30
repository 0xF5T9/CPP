/*
* (29) 1.A Basic SDL Program
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

int main(int argc, char* argv[]) {	//* Any other type of main function will cause an undefined reference to main.

	if (SDL_Init(SDL_INIT_VIDEO) < 0) {	//* Initialize SDL "SDL_INIT_VIDEO"
		std::cout << "[SDL]: Initialization failed (Error: " << SDL_GetError() << ")" << std::endl;
		exit(1);
	}

	std::cout << "[SDL]: Initalization succeeded" << std::endl;

	SDL_Quit();	//* Quit SDL Subsystem
	return 0;
}