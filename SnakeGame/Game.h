#pragma once 
#include <GL/glut.h>

class Game
{
public:
	Game(int height, int wifth); // height, width
	~Game();

	int GetWindowHeight();
	int GetWindowWidth();

private:
	int window_height;
	int window_width;

};
