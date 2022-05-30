#include "game.h"

/*	Define 'game' class functions	*/
bool game::Initialize() {

	if (SDL_Init(SDL_INIT_VIDEO) < 0) {	//* Initilize SDL Sub-System
		std::cout << "[SDL]: SDL System initialization failed (Error: " << SDL_GetError() << ")" << std::endl;
		return false;
	}
	else { std::cout << "[SDL]: SDL System initialization succeeded" << std::endl; }

	Window = SDL_CreateWindow(			//* Initialize SDL Window
		"Basic SDL Program",			//* Title
		SDL_WINDOWPOS_UNDEFINED,		//* Window width position
		SDL_WINDOWPOS_UNDEFINED,		//* Window height position
		SCREEN_WIDTH,					//* Window width
		SCREEN_HEIGHT,					//* Window height
		SDL_WINDOW_SHOWN);				//* SDL Flags
	if (Window == NULL) {
		std::cout << "[SDL]: Window initialization failed (Error: " << SDL_GetError() << ")" << std::endl;
		{SDL_Quit(); std::cout << "[SDL]: Quitting SDL Subsystem..." << std::endl; }
		return false;
	}
	else { std::cout << "[SDL]: Window initialization succeeded" << std::endl; }
	SDL_SetWindowResizable(Window, SDL_TRUE);	//* Enbable/Disable Window Resize
	//SDL_SetWindowBordered(Window, SDL_TRUE);	//* Enbable/Disable Window borders
	
	RENDERER = SDL_CreateRenderer(Window, -1, SDL_RENDERER_PRESENTVSYNC);	//*	Create Renderer
	if (RENDERER == NULL) {
		std::cout << "[SDL]: Failed to create renderer (Error: " << SDL_GetError() << ")" << std::endl;
		{SDL_DestroyWindow(Window); std::cout << "[SDL]: Window destroyed" << std::endl; }
		{SDL_Quit(); std::cout << "[SDL]: Quitting SDL Subsystem..." << std::endl; }
		return false;
	}
	else { std::cout << "[SDL]: Renderer created" << std::endl; }
	TEXTURE = SDL_CreateTexture(RENDERER, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_STATIC, SCREEN_WIDTH, SCREEN_HEIGHT);	//* Create Texture
	if (TEXTURE == NULL) {
		std::cout << "[SDL]: Failed to create texture (Error: " << SDL_GetError() << ")" << std::endl;
		{SDL_DestroyRenderer(RENDERER); std::cout << "[SDL]: Renderer destroyed" << std::endl; }
		{SDL_DestroyWindow(Window); std::cout << "[SDL]: Window destroyed" << std::endl; }
		{SDL_Quit(); std::cout << "[SDL]: Quitting SDL Subsystem..." << std::endl; }
		return false;
	}
	else { std::cout << "[SDL]: Texture created" << std::endl; }
	BUFFER = new Uint32[SCREEN_WIDTH * SCREEN_HEIGHT]; std::cout << "[SDL]: Buffer allocated" << std::endl;	//* Create buffer

	for (int i = 0; i < SCREEN_WIDTH * SCREEN_HEIGHT; i++) {					//* Set pixel data for each pixel with for() loop
		BUFFER[i] = 0x000000FF;													//* RGBA: 0 0 0 255 (Pitch black)
	}
	SDL_UpdateTexture(TEXTURE, NULL, BUFFER, SCREEN_WIDTH * sizeof(Uint32));	//* Update texture with buffer that contain pixel data
	SDL_RenderClear(RENDERER);								 					//* Refresh renderer
	SDL_RenderCopy(RENDERER, TEXTURE, NULL, NULL);								//* Copy texture to renderer
	SDL_RenderPresent(RENDERER);												//* Present the renderer

	return true;
}

int game::Bounce0_255(double _Speed) {
	int Tick = (int)GetTickCount64();
	double Sin = (1 + std::sin(Tick * _Speed)) * 128;
	if (Sin > 255) Sin = 255;
	int Value = (int)Sin;
	return Value;
}

void game::Draw(int _Height, int _Width, Uint8 _Red, Uint8 _Green, Uint8 _Blue) {
	Uint8 Alpha = 255;

	Uint32 color = _Red;
	color <<= 8; color += _Green;
	color <<= 8; color += _Blue;
	color <<= 8; color += Alpha;
	this->BUFFER[(_Height * SCREEN_WIDTH) + _Width] = color;
}

void game::ScrRefresh() {
	SDL_UpdateTexture(TEXTURE, NULL, BUFFER, SCREEN_WIDTH * sizeof(Uint32));	//* Update texture with buffer that contain pixel data
	SDL_RenderClear(RENDERER);								 					//* Refresh renderer
	SDL_RenderCopy(RENDERER, TEXTURE, NULL, NULL);								//* Copy texture to renderer
	SDL_RenderPresent(RENDERER);												//* Present the renderer
}

bool game::ListenEvent() {
	while (SDL_PollEvent(&EVENT_LISTENER)) {						//* Get latest queued event to event object
		if (EVENT_LISTENER.type == SDL_QUIT) return false;			//*	'User requested quit' event found
	}
	return true;
}

void game::Close() {
	{delete[] BUFFER; std::cout << "[SDL]: Buffer deallocated" << std::endl; }					//* Destroy Buffer													//* Destroy Buffer
	{SDL_DestroyTexture(TEXTURE); std::cout << "[SDL]: Texture destroyed" << std::endl; }		//* Destroy Texture
	{SDL_DestroyRenderer(RENDERER); std::cout << "[SDL]: Renderer destroyed" << std::endl; }	//* Destroy Renderer
	{SDL_DestroyWindow(Window); std::cout << "[SDL]: Window destroyed" << std::endl; }			//* Destroy Window
	{SDL_Quit(); std::cout << "[SDL]: Quitting SDL Subsystem..." << std::endl; }				//* Quit SDL Sub-system
}