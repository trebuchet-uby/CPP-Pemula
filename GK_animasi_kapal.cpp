
#include <iostream>
#include <GL/freeglut.h>

float x_post = 0.0f;
float delta = 0.05f;
bool toRight = true;

void display() {
	glClear(GL_COLOR_BUFFER_BIT); // membersihkan layar
	glColor3f(0.0, 0.0, 1.0); // memberikan warna RGB


	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);// lautan
	glColor3f(0, 0, 1); //warna biru
	glVertex2f(-1, -0.6);
	glVertex2f(1, -0.6);
	glVertex2f(1, -1);
	glVertex2f(-1, -1);
	glEnd();

	glBegin(GL_POLYGON);//badan kapal
	glColor3f(1, 1, 1); //warna putih
	glVertex2f(-0.6 + x_post, -0.8);
	glVertex2f(0.6 + x_post, -0.8);
	glVertex2f(0.8 + x_post, -0.4);
	glVertex2f(-0.8 + x_post, -0.4);
	glEnd();

	glBegin(GL_POLYGON);//atas kapal
	glColor3f(0, 1, 0);
	glVertex2f(-0.4 + x_post, -0.4);
	glVertex2f(0.6 + x_post, -0.4);
	glVertex2f(0.6 + x_post, -0.1);
	glVertex2f(-0.2 + x_post, -0.1);
	glEnd();

	glBegin(GL_POLYGON);//jendela kapal
	glColor3f(0, 0, 0);
	glVertex2f(-0.2 + x_post, -0.3);
	glVertex2f(-0.1 + x_post, -0.3);
	glVertex2f(-0.1 + x_post, -0.2);
	glVertex2f(-0.2 + x_post, -0.2);
	glEnd();
	glBegin(GL_POLYGON);//jendela kapal 
	glVertex2f(0 + x_post, -0.3);
	glVertex2f(0.1 + x_post, -0.3);
	glVertex2f(0.1 + x_post, -0.2);
	glVertex2f(0 + x_post, -0.2);
	glEnd();
	glBegin(GL_POLYGON);//jendela kapal
	glVertex2f(0.2 + x_post, -0.3);
	glVertex2f(0.3 + x_post, -0.3);
	glVertex2f(0.3 + x_post, -0.2);
	glVertex2f(0.2 + x_post, -0.2);
	glEnd();
	glBegin(GL_POLYGON);//jendela kapal
	glVertex2f(0.4 + x_post, -0.3);
	glVertex2f(0.5 + x_post, -0.3);
	glVertex2f(0.5 + x_post, -0.2);
	glVertex2f(0.4 + x_post, -0.2);
	glEnd();

	glBegin(GL_POLYGON);//tiang kapal
	glColor3f(1, 1, 1);
	glVertex2f(0.1 + x_post, -0.1);
	glVertex2f(0.12 + x_post, -0.1);
	glVertex2f(0.12 + x_post, 0.4);
	glVertex2f(0.1 + x_post, 0.4);
	glEnd();

	glBegin(GL_POLYGON);//bendera kapal
	glColor3f(1, 1, 1);
	glVertex2f(0.1 + x_post, 0.2);
	glVertex2f(0.4 + x_post, 0.2);
	glVertex2f(0.4 + x_post, 0.3);
	glVertex2f(0.1 + x_post, 0.3);
	glEnd();

	glBegin(GL_POLYGON);//bendera kapal
	glColor3f(1, 0, 0);
	glVertex2f(0.1 + x_post, 0.3);
	glVertex2f(0.4 + x_post, 0.3);
	glVertex2f(0.4 + x_post, 0.4);
	glVertex2f(0.1 +x_post, 0.4);
	glEnd();
	glutSwapBuffers(); // memerintahkan openGL menggambarkan objek ke layars
}

void myinit() {
	glClearColor(0.0, 0.0, 0.0, 1.0); // membersihkan layar + memberikan warna hitam
	glPointSize(2.0); //memberikan ukuran pada vertex
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity(); // dihitung dengan matriks identitas
	gluOrtho2D(-1.0f, 1.0f, -1.0f, 1.0f); //memberikan sistem koordinat dalam windows yg dibuat (fungsi untuk mengatur sistem koordinat pada windows yg sudah dibuat)

}


void myKeyboard(unsigned char key, int x, int y) {
	std::cout << key << " " << x << " " << y << std::endl;
}

void myMovementMouse(int x, int y) {
	std::cout << x << " " << y << std::endl;
}

void timer(int) {
	glutPostRedisplay();
	glutTimerFunc(1000 / 5, timer, 0); //menggampar  frame per second 

	if (x_post < 0.2 && toRight)

		x_post += delta;
	else
		toRight = false;

	if (x_post > -0.2 && !toRight)

		x_post -= delta;
	else
		toRight = true;
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Animasi sederhana");
	glutDisplayFunc(display);


	glutKeyboardFunc(myKeyboard);
	glutMotionFunc(myMovementMouse);

	myinit();

	glutTimerFunc(0, timer, 0);

	glutMainLoop();

	return 0;
}