#include <iostream>
#include <GL/freeglut.h>


 float x_pos = 0.0f;
 float delta = 0.05f;
 bool toRight = true;

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);

	glBegin(GL_QUADS);
	glVertex2f(-0.2f + x_pos, 0.2f);
	glVertex2f(-0.2f + x_pos, -0.2f);
	glVertex2f(0.2f + x_pos, -0.2f);
	glVertex2f(0.2f + x_pos, 0.2f);
	glEnd();
	glutSwapBuffers();
}

void myinit() {
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glColor3f(1.0, 1.0, 1.0);
	glPointSize(2.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-1.0f, 1.0f, -1.0f, 1.0f);
}

void timer(int) {
	glutPostRedisplay();
	glutTimerFunc(1000/30, timer,0);
	if (x_pos < 0.8f && toRight)
	    x_pos += delta;
	else
	    toRight = false;

	if (x_pos > -0.8f && !toRight)
		x_pos -= delta;
	else
		toRight = true;
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Animasi Kotak");
	glutDisplayFunc(display);

	myinit();

	glutTimerFunc(0, timer, 0);

	glutMainLoop();

	return 0;
}
