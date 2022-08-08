#include <iostream>
#include <GL/freeglut.h>

void display() {
	glClear(GL_COLOR_BUFFER_BIT); // membersihkan layar
	glColor3f(1.0, 0.0, 0.0); // memberikan warna RGB

	glBegin(GL_TRIANGLES); //AWALAN UNTUK MENGGAMBAR , menggambar segitiga
	glVertex2f(0.0, 0.0); // posisi titik, titik di posisi (0,0)
	glVertex2f(499.0, 0.0); // akan menggambar titik di posisi (499,0)
	glVertex2f(250.0, 499.0); // titik diposisi (250, 499)
	glEnd(); // ditutup
	glFlush(); // memerintahkan openGL menggambarkan objek ke layars
}

void myinit() {
	glClearColor(1.0, 1.0, 1.0, 1.0); // membersihkan layar + memberikan warna putih
	glColor3f(1.0, 0.0, 0.0); // memberikan warna merah
	glPointSize(2.0); //memberikan ukuran pada vertex
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity(); // dihitung dengan matriks identitas
	gluOrtho2D(0.0, 499.0, 0.0, 499.0); //memberikan sistem koordinat dalam windows yg dibuat (fungsi untuk mengatur sistem koordinat pada windows yg sudah dibuat)

}


int main(int argc, char** argv) {
	glutInit(&argc, argv); //Inisialisasi Glut
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // mode tampilannya singel buffer | warna RGB
	glutInitWindowSize(500, 500); // Ukuran, 500px x 500px
	glutInitWindowPosition(0, 0); // posisi windows
	glutCreateWindow("Points"); // membuat windows + memberi judul
	glutDisplayFunc(display); // fungsi display atau tampilannya

	myinit();
	glutMainLoop(); // mengulang proses

	return 0;
}
