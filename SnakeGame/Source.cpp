#include "Game.h"

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

	if (key == 0x1B)
		
}


int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);

	int win_w = glutGet(GLUT_SCREEN_WIDTH);
	int win_h = glutGet(GLUT_SCREEN_HEIGHT);

	auto game = new Game(win_h, win_w);

	glutCreateWindow("Snake");
	glutFullScreen();
	init();

	glutDisplayFunc(display);
	glutKeyboardFunc(processNormalKeys);

	glutMainLoop();
	return 0;
}
