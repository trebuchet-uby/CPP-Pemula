// NAMA : ANDHI PRASETYO
// NIM  : C20010004
// GRAFIKA KOMPUTER (UBY)

#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include <GL/freeglut.h>

void drawCircle(double r, int vertex) {
	double ngon = (double)vertex;
	glBegin(GL_POLYGON);
	for (int i = 0; i < vertex; i++) {
		double x = r * cos(2 * M_PI * i / ngon);
		double y = r * sin(2 * M_PI * i / ngon);
		glVertex2d(x, y);
	}
	glEnd();
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.5, 1.0, 0.5); // disini kita bisa merubah warna lingkaran
	drawCircle(1.5, 100); // Bagian depan ukuran lingkatan, bagian belakang merupakan jumlah sisinya....
	glutSwapBuffers();
}

void myinit() {
	glClearColor(0.5, 0.0, 0.5, 0.0); // tempat merubah warna baground (merah, hijau, biru, hitam)
	glColor3f(0.0, 0.0, 0.0); // juga merubah warna baground
	glPointSize(2.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-2.0, 2.0, -2.0, 2.0);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(600, 600); // merubah ukuran layar tanpil di windows
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Draw Circle");
	glutDisplayFunc(display);

	myinit();
	glutMainLoop();

	return 0;
}
