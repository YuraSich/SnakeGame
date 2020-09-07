#include "Game.h"

Game::Game(int win_h, int win_w)
{
	this->windowHeight = win_h;
	this->windowWidth = win_w;

	this->gameFieldSize = win_h > win_w ? win_w : win_h;
	this->gameFieldScale = 24;
}


void Game::Draw() {
	glLineWidth(1);
	glBegin(GL_LINES);
	glColor3f(1.0, 1.0, 1.0);

	for (int i = 0; i < this->windowWidth; i += this->gameFieldScale) {
		glVertex2f(i, 0);
		glVertex2f(i, this->windowHeight);
	}
	for (int j = 0; j < this->windowHeight; j += this->gameFieldScale) {
		glVertex2f(0, j);
		glVertex2f(this->windowWidth, j);
	}

	glEnd();
}



Game::~Game()
{
}


int Game::GetWindowWidth()
{
	return this->windowWidth;
}

int Game::GetWindowHeight()
{
	return this->windowHeight;
}