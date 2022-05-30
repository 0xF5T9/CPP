/*
* (29) 2.Creating an SDL Window
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

const int SCREEN_WIDTH = 1024;	//* Define screen width
const int SCREEN_HEIGHT = 768;	//* Define screen height

int main(int argc, char* argv[]) {		//* Any other type of main function will cause an undefined reference to main.

	if (SDL_Init(SDL_INIT_VIDEO) < 0) {	//* Initialize SDL "SDL_INIT_VIDEO"
		std::cout << "[SDL]: Initialization failed (Error: " << SDL_GetError() << ")" << std::endl;
		exit(1);
	}
	else { std::cout << "[SDL]: Initialization succeeded" << std::endl; }


	SDL_Window* Window = SDL_CreateWindow(	//* Initialize SDL Window
		"Basic SDL Program",				//* Title
		SDL_WINDOWPOS_CENTERED,				//* Window width position
		SDL_WINDOWPOS_CENTERED,				//* Window height position
		SCREEN_WIDTH,						//* Window width
		SCREEN_HEIGHT,						//* Window height
		SDL_WINDOW_SHOWN);					//* SDL Flags
	if (Window == NULL) {
		std::cout << "[SDL]: Window initialization failed (Error: " << SDL_GetError() << ")" << std::endl;
		SDL_Quit();
		exit(1);
	}
	else { std::cout << "[SDL]: Window initialization succeeded" << std::endl; }


	bool EXIT_PROGRAM = false;	//* Exit program bool to end 'Game Loop'
	SDL_Event EVENT_LISTENER;	//* Create event object
	while (!EXIT_PROGRAM) {		//*	Begin of 'Game Loop'

		//* Processing, Drawing...

		while (SDL_PollEvent(&EVENT_LISTENER)) {						//* Get latest queued event to event object
			if (EVENT_LISTENER.type == SDL_QUIT) EXIT_PROGRAM = true;	//*	'User requested quit' event found
		}
	}


	{SDL_DestroyWindow(Window); std::cout << "[SDL]: SDL Window destroyed" << std::endl; }	//* Destroy SDL Window
	{SDL_Quit(); std::cout << "[SDL]: Quitting SDL Subsystem..." << std::endl; }	//* Quit SDL Subsystem
	return 0;
}