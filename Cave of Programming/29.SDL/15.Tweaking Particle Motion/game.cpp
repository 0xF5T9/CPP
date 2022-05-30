#include "game.h"

/*	Define default 'game' class static properties	*/
int game::TOTAL_PARTICLES = 0;

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
	BUFFER2 = new Uint32[SCREEN_WIDTH * SCREEN_HEIGHT]; std::cout << "[SDL]: Buffer2 allocated" << std::endl;	//* Create buffer2

	for (int i = 0; i < SCREEN_WIDTH * SCREEN_HEIGHT; i++) {					//* Set pixel data for each pixel with for() loop
		BUFFER[i] = 0x000000FF;													//* RGBA: 0 0 0 255 (Pitch black)
	}
	SDL_UpdateTexture(TEXTURE, NULL, BUFFER, SCREEN_WIDTH * sizeof(Uint32));	//* Update texture with buffer that contain pixel data
	SDL_RenderClear(RENDERER);								 					//* Refresh renderer
	SDL_RenderCopy(RENDERER, TEXTURE, NULL, NULL);								//* Copy texture to renderer
	SDL_RenderPresent(RENDERER);												//* Present the renderer

	return true;
}

int game::GetRandomInt(int _Mimimum, int _Maxmimum) {		
	int RandomInt = rand() % (_Maxmimum + 1 - _Mimimum) + _Mimimum; //* Formula: rand() % (max_number + 1 - minimum_number) + minimum_number
	return RandomInt;
}

int game::Bounce0_255(double _Speed) {
	int Tick = (int)GetTickCount64();
	double Sin = (1 + std::sin(Tick * _Speed)) * 128;
	if (Sin > 255) Sin = 255;
	int Value = (int)Sin;
	return Value;
}

void game::Draw(int _Height, int _Width, Uint8 _Red, Uint8 _Green, Uint8 _Blue, bool _Shadow) {
	Uint8 Alpha = 255;


	if (_Shadow == true) {
		Uint32 bcolor = (_Red / 9);
		bcolor <<= 8; bcolor += (_Green / 9);
		bcolor <<= 8; bcolor += (_Blue / 9);
		bcolor <<= 8; bcolor += Alpha;
		for (int row = -1; row <= 1; row++) {
			for (int col = -1; col <= 1; col++) {
				int BlurW = _Width + col;
				int BlurH = _Height + row;
				if (((BlurH * SCREEN_WIDTH) + BlurW) > SCREEN_WIDTH * SCREEN_HEIGHT || ((BlurH * SCREEN_WIDTH) + BlurW) < 0) {}
				//* ↑ Ignore if formula output invalid buffer element  (Prevent access violation)
				else this->BUFFER[(BlurH * SCREEN_WIDTH) + BlurW] = bcolor;
			}
		}
	}


	Uint32 color = _Red;
	color <<= 8; color += _Green;
	color <<= 8; color += _Blue;
	color <<= 8; color += Alpha;
	if (((_Height * SCREEN_WIDTH) + _Width) > SCREEN_WIDTH * SCREEN_HEIGHT || ((_Height * SCREEN_WIDTH) + _Width) < 0) {
		std::cout << "[Game]: Pixel 'w:" << _Width << " h:" << _Height << "' destroyed (Invalid position)" << std::endl;
		return;
	}	//* ↑ Ignore if formula output invalid buffer element  (Prevent access violation)
	else this->BUFFER[(_Height * SCREEN_WIDTH) + _Width] = color;
}

void game::BoxBlurScreen() {

	/*
	* If you don't use a second buffer it will definitely blur, but it won't strictly speaking be a box blur. 
	* What will happen is you'll end up using previously-blurred values to calculate new blurred values, 
	* which will be a bit more blurry than a pure box blur. But if it looks OK, it's good! 
	* This effect is actually ideal for certain types of graphics, like simulated fire. (Cave Of Programming)
	*/

	Uint32* Temp = BUFFER;
	BUFFER = BUFFER2;
	BUFFER2 = Temp;
	for (int h = 0; h < game::SCREEN_HEIGHT; h++) {
		for (int w = 0; w < game::SCREEN_WIDTH; w++) {

			int RedTotal = 0;
			int GreenTotal = 0;
			int BlueTotal = 0;

			for (int row = -1; row <= 1; row++) {
				for (int col = -1; col <= 1; col++) {
					int currentX = w + col;
					int currentY = h + row;

					if (currentX >= 0 && currentX < game::SCREEN_WIDTH && currentY >= 0 && currentY < game::SCREEN_HEIGHT) {
						Uint32 Color = BUFFER[currentY * game::SCREEN_WIDTH + currentX];

						Uint8 Red = Color >> 24;
						Uint8 Green = Color >> 16;
						Uint8 Blue = Color >> 8;

						RedTotal += Red;
						GreenTotal += Green;
						BlueTotal += Blue;
					}
				}
			}

			Uint8 Red = RedTotal / 9;
			Uint8 Green = GreenTotal / 9;
			Uint8 Blue = BlueTotal / 9;

			Draw(h, w, Red, Green, Blue, false);
		}
	}
}

void game::ScrRefresh(bool _SetAllPixelsToBlack) {
	SDL_UpdateTexture(TEXTURE, NULL, BUFFER, SCREEN_WIDTH * sizeof(Uint32));	//* Update texture with buffer that contain pixel data
	SDL_RenderClear(RENDERER);								 					//* Refresh renderer
	SDL_RenderCopy(RENDERER, TEXTURE, NULL, NULL);								//* Copy texture to renderer
	SDL_RenderPresent(RENDERER);												//* Present the renderer
	if (_SetAllPixelsToBlack == true)
		memset(this->BUFFER, 0, SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(Uint32));		//* Set all bit of the buffer to zero (pitch black)
}

bool game::ListenEvent() {
	while (SDL_PollEvent(&EVENT_LISTENER)) {						//* Get latest queued event to event object
		if (EVENT_LISTENER.type == SDL_QUIT) return false;			//*	'User requested quit' event found
		//if (EVENT_LISTENER.type == SDL_MOUSEBUTTONDOWN) std::cout << "[Game]: Mouse click event found" << std::endl;
	}
	return true;
}

void game::Close() {
	{delete[] BUFFER; std::cout << "[SDL]: Buffer deallocated" << std::endl; }					//* Destroy Buffer			
	{delete[] BUFFER2; std::cout << "[SDL]: Buffer2 deallocated" << std::endl; }				//* Destroy Buffer2
	{SDL_DestroyTexture(TEXTURE); std::cout << "[SDL]: Texture destroyed" << std::endl; }		//* Destroy Texture
	{SDL_DestroyRenderer(RENDERER); std::cout << "[SDL]: Renderer destroyed" << std::endl; }	//* Destroy Renderer
	{SDL_DestroyWindow(Window); std::cout << "[SDL]: Window destroyed" << std::endl; }			//* Destroy Window
	{SDL_Quit(); std::cout << "[SDL]: Quitting SDL Subsystem..." << std::endl; }				//* Quit SDL Sub-system
}