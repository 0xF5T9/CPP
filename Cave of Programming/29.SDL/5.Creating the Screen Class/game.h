#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
#include <SDL.h>

class game {
public:

	/*	Static Const Properties (Public)	*/
	static int const SCREEN_WIDTH = 1024;	
	static int const SCREEN_HEIGHT = 768;

private:

	/*	Class Properties (Private)	*/
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
	void Draw(std::string _Color);
	bool ListenEvent();
	void Close();
};

