#include "Game.h"
#include "WindowStruct.h"

#include <Windows.h>


static Window MainWindow;

void display(void)
{
	glutSwapBuffers();
}

void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0, 1.0, 0.0, 1.0, 0.0, 1.0);
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
	
	auto game = new Game(MainWindow.height, MainWindow.width);

	glutFullScreen();
	init();
	ShowWindow(GetConsoleWindow(), SW_HIDE); // Hide console
	glutDisplayFunc(display);
	glutKeyboardFunc(processNormalKeys);

	glutMainLoop();
	return 0;
}
