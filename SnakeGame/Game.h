#pragma once 
#include <GL/glut.h>

class Game
{
public:
	Game(int, int); // height, width
	~Game();

	int GetWindowHeight();
	int GetWindowWidth();
	void Draw();

private:
	int windowHeight;
	int windowWidth;
	int gameFieldSize;
	int gameFieldScale;

};
