#pragma once
#include <iostream>
#include <Windows.h>
#include <string>
#include <stdlib.h>
#include <SDL.h>

/*
* [Public] static const properties: SCREEN_WIDTH, SCREEN_HEIGHT
* [Private] properties: Window, RENDERER, TEXTURE, BUFFER, EVENT_LISTENER
* [Public] functions: 
* - Initialize()	| Initialize SDL Sub-system (Using: SCREEN_WIDTH, SCREEN_HEIGHT, Window, RENDERER, TEXTURE, BUFFER)
* - Bounce0_255()	| Return int that bounces between 0-255
* - Draw()			| Write pixel data to buffer array
* - ScrRefresh()	| Update texture, refresh renderer
* - ListenEvent()	| Listen and response to SDL Events
* - Close()			| Destroy class pointers, quit SDL Sub-system
*/

class game {
public:

	/*	Static Const Properties (Public)	*/
	static int const SCREEN_WIDTH = 1024;	
	static int const SCREEN_HEIGHT = 768;

private:

	/*	Properties (Private)	*/
	SDL_Window* Window;
	SDL_Renderer* RENDERER;
	SDL_Texture* TEXTURE;
	Uint32* BUFFER;
	SDL_Event EVENT_LISTENER;

public:
	game(): Window(NULL), RENDERER(NULL), TEXTURE(NULL), BUFFER(NULL) {	//	Constructor

	}
	game(const game& _copy): Window(NULL), RENDERER(NULL), TEXTURE(NULL), BUFFER(NULL) {	//	Copy Constructor

	}
	~game() {	//	Destructor

	}
	bool Initialize();
	int Bounce0_255(double _Speed);
	void Draw(int _Height, int _Width, Uint8 _Red, Uint8 _Green, Uint8 _Blue);
	void ScrRefresh();
	bool ListenEvent();
	void Close();
};

