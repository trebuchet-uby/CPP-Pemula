#include <iostream>
#include <GL/freeglut.h>


 float x_pos = 0.0f;
 float delta = 0.05f;
 bool toRight = true;

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);

	glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
	glVertex2f(-0.4f + x_pos, 0.4f);
	glVertex2f(-0.4f + x_pos, -0.4f);
	glVertex2f(0.4f + x_pos, -0.4f);
	glVertex2f(0.4f + x_pos, 0.4f);
	glEnd();
	glutSwapBuffers();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
	glVertex2f(-0.3f + x_pos, 0.3f);
	glVertex2f(-0.3f + x_pos, -0.3f);
	glVertex2f(0.3f + x_pos, -0.3f);
	glVertex2f(0.3f + x_pos, 0.3f);
	glEnd();
	glutSwapBuffers();

    glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 0.0);
	glVertex2f(-0.2f + x_pos, 0.2f);
	glVertex2f(-0.2f + x_pos, -0.2f);
	glVertex2f(0.2f + x_pos, -0.2f);
	glVertex2f(0.2f + x_pos, 0.2f);
	glEnd();
	glutSwapBuffers();

    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 0.0);
	glVertex2f(-0.1f + x_pos, 0.1f);
	glVertex2f(-0.1f + x_pos, -0.1f);
	glVertex2f(0.1f + x_pos, -0.1f);
	glVertex2f(0.1f + x_pos, 0.1f);
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
	glutTimerFunc(1000/25, timer,0); // merubah kecepatan pergerakan
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
	glutInitWindowSize(650, 650); // UBAH UKURAN TAMPILAN
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Tugas 7 (Andhi)"); // JUDUL NAMA FILE
	glutDisplayFunc(display);

	myinit();

	glutTimerFunc(0, timer, 0);

	glutMainLoop();

	return 0;
}
