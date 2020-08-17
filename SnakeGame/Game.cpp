#include "Game.h"


Game::Game(int win_h, int win_w)
{
	this->window_height = win_h;
	this->window_width = win_w;
}

Game::~Game()
{
}


int Game::GetWindowWidth()
{
	return this->window_width;
}

int Game::GetWindowHeight()
{
	return this->window_height;
}