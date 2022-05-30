/*
* (29) 3.Textures, Renderers and Buffers
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


	SDL_Renderer* RENDERER = SDL_CreateRenderer(Window, -1, SDL_RENDERER_PRESENTVSYNC);	//*	Create Renderer
	if (RENDERER == NULL) {
		std::cout << "[SDL]: Failed to create renderer (Error: " << SDL_GetError() << ")" << std::endl;
		{SDL_DestroyWindow(Window); std::cout << "[SDL]: Window destroyed" << std::endl; }
		{SDL_Quit(); std::cout << "[SDL]: Quitting SDL Subsystem..." << std::endl; }
		exit(1);
	}
	SDL_Texture* TEXTURE = SDL_CreateTexture(RENDERER, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_STATIC, SCREEN_WIDTH, SCREEN_HEIGHT);	//* Create Texture
	if (TEXTURE == NULL) {
		std::cout << "[SDL]: Failed to create texture (Error: " << SDL_GetError() << ")" << std::endl;
		{SDL_DestroyRenderer(RENDERER); std::cout << "[SDL]: Renderer destroyed" << std::endl; }
		{SDL_DestroyWindow(Window); std::cout << "[SDL]: Window destroyed" << std::endl; }
		{SDL_Quit(); std::cout << "[SDL]: Quitting SDL Subsystem..." << std::endl; }
		exit(1);
	}
	Uint32* buffer = new Uint32[SCREEN_WIDTH*SCREEN_HEIGHT];					//* Create buffer
	memset(buffer, 0xFF, SCREEN_WIDTH*SCREEN_HEIGHT*sizeof(Uint32));			//* Set pixel data for all bits of buffer
	SDL_UpdateTexture(TEXTURE, NULL, buffer, SCREEN_WIDTH * sizeof(Uint32));	//* Update texture with buffer
	SDL_RenderClear(RENDERER);													//* Refresh renderer
	SDL_RenderCopy(RENDERER, TEXTURE, NULL, NULL);								//* Copy texture to renderer
	SDL_RenderPresent(RENDERER);												//* Present the renderer


	bool EXIT_PROGRAM = false;	//* Exit program bool to end 'Game Loop'
	SDL_Event EVENT_LISTENER;	//* Create event object
	while (!EXIT_PROGRAM) {		//*	Begin of 'Game Loop'

		//* Processing, Drawing...

		while (SDL_PollEvent(&EVENT_LISTENER)) {						//* Get latest queued event to event object
			if (EVENT_LISTENER.type == SDL_QUIT) EXIT_PROGRAM = true;	//*	'User requested quit' event found
		}
	}

	delete[] buffer;																			//* Destroy Buffer
	{SDL_DestroyTexture(TEXTURE); std::cout << "[SDL]: Texture destroyed" << std::endl; }		//* Destroy Texture
	{SDL_DestroyRenderer(RENDERER); std::cout << "[SDL]: Renderer destroyed" << std::endl; }	//* Destroy Renderer
	{SDL_DestroyWindow(Window); std::cout << "[SDL]: Window destroyed" << std::endl; }			//* Destroy Window
	{SDL_Quit(); std::cout << "[SDL]: Quitting SDL Subsystem..." << std::endl; }				//* Quit SDL Subsystem
	return 0;
}