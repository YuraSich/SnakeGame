#include "Game.h"
#include "WindowStruct.h"
#include <memory>

#include <Windows.h>


static Window MainWindow;
static std::unique_ptr<Game> game;
 
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	game->Draw();
	glutSwapBuffers();
}

void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0f, MainWindow.width, MainWindow.height, 0.0f, 0.0f, 1.0f);
}

void processNormalKeys(unsigned char key, int x, int y) {

	if (key == 0x1B) {
		glutDestroyWindow(MainWindow.id);
		exit(0);
	}
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);

	MainWindow.width = glutGet(GLUT_SCREEN_WIDTH);
	MainWindow.height = glutGet(GLUT_SCREEN_HEIGHT);
	MainWindow.id = glutCreateWindow("Snake");
	
	game = std::make_unique<Game>(Game(MainWindow.height, MainWindow.width));
	
	glutFullScreen();
	init();
	ShowWindow(GetConsoleWindow(), SW_HIDE); // Hide console
	glutDisplayFunc(display);
	glutKeyboardFunc(processNormalKeys);
	
	glutMainLoop();
	return 0;
}
