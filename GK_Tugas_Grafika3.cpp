// NAMA		: ANDHI PRASETYO
// NIM		: C20010004
// MATKUL	: GRAFIKA KOMPUTER

#include <iostream>
#include <GL/freeglut.h>

void display() {
	glClear(GL_COLOR_BUFFER_BIT); // membersihkan layar
	glColor3f(1.0, 0.0, 0.0); // memberikan warna RGB

    // TOPI ROBOT PAK TANI
	glBegin(GL_TRIANGLES); //AWALAN UNTUK MENGGAMBAR , menggambar segitiga
    glColor3f(0.5, 0.5, 0.0); // memberikan warna RGB
	glVertex2f(250.0, 580.0); // posisi titik, titik di posisi (......)
	glVertex2f(350.0, 500.0); // akan menggambar titik di posisi (......))
	glVertex2f(150.0, 500.0); // titik diposisi (......)
	glEnd(); // ditutup
	glFlush(); // memerintahkan openGL menggambarkan objek ke layars

    // KEPALA ROBOT PAK TANI
	glBegin(GL_POLYGON); //AWALAN UNTUK MENGGAMBAR , menggambar segibanyak
	glVertex2f(200.0, 490.0); // posisi titik, titik di posisi (......)
	glVertex2f(300.0, 490.0); // akan menggambar titik di posisi (......))
	glVertex2f(300.0, 400.0); // titik diposisi (......)
	glVertex2f(200.0, 400.0); // titik diposisi (......)
	glEnd(); // ditutup
	glFlush(); // memerintahkan openGL menggambarkan objek ke layars

    // BADAN ROBOT PAK TANI
    glBegin(GL_POLYGON); //AWALAN UNTUK MENGGAMBAR , menggambar segi-banyak
	glVertex2f(150.0, 390.0); // posisi titik, titik di posisi (..........)
	glVertex2f(350.0, 390.0); // akan menggambar titik di posisi (..........)
	glVertex2f(350.0, 200.0); // titik diposisi (..........)
    glVertex2f(150.0, 200.0); // titik diposisi (..........)
    glEnd(); // ditutup
	glFlush(); // memerintahkan openGL menggambarkan objek ke layars

    // KAKI KANAN ROBOT PAK TANI
    glBegin(GL_POLYGON); //AWALAN UNTUK MENGGAMBAR , menggambar segi-banyak
	glVertex2f(150.0, 190.0); // posisi titik, titik di posisi (..........)
	glVertex2f(240.0, 190.0); // akan menggambar titik di posisi (..........)
	glVertex2f(240.0, 20.0); // titik diposisi (..........)
    glVertex2f(150.0, 20.0); // titik diposisi (..........)
    glEnd(); // ditutup
	glFlush(); // memerintahkan openGL menggambarkan objek ke layars

    // KAKI KIRI ROBOT PAK TANI
    glBegin(GL_POLYGON); //AWALAN UNTUK MENGGAMBAR , menggambar segi-banyak
	glVertex2f(260.0, 190.0); // posisi titik, titik di posisi (..........)
	glVertex2f(350.0, 190.0); // akan menggambar titik di posisi (..........)
	glVertex2f(350.0, 20.0); // titik diposisi (..........)
    glVertex2f(260.0, 20.0); // titik diposisi (..........)
    glEnd(); // ditutup
	glFlush(); // memerintahkan openGL menggambarkan objek ke layars

    // TANGAN KANAN ROBOT PAK TANI
    glBegin(GL_POLYGON); //AWALAN UNTUK MENGGAMBAR , menggambar segi-banyak
	glVertex2f(50.0, 390.0); // posisi titik, titik di posisi (..........)
	glVertex2f(140.0, 390.0); // akan menggambar titik di posisi (..........)
	glVertex2f(140.0, 210.0); // titik diposisi (..........)
    glVertex2f(50.0, 210.0); // titik diposisi (..........)
    glEnd(); // ditutup
	glFlush(); // memerintahkan openGL menggambarkan objek ke layars

    // TANGAN KIRI ROBOT PAK TANI
    glBegin(GL_POLYGON); //AWALAN UNTUK MENGGAMBAR , menggambar segi-banyak
	glVertex2f(360.0, 390.0); // posisi titik, titik di posisi (..........)
	glVertex2f(450.0, 390.0); // akan menggambar titik di posisi (..........)
	glVertex2f(450.0, 210.0); // titik diposisi (..........)
    glVertex2f(360.0, 210.0); // titik diposisi (..........)
    glEnd(); // ditutup
	glFlush(); // memerintahkan openGL menggambarkan objek ke layars

}

void myinit() {
	glClearColor(1.0, 1.0, 1.0, 1.0); // membersihkan layar + memberikan warna putih
	glColor3f(1.0, 0.0, 50.0); // memberikan warna merah
	glPointSize(2.0); //memberikan ukuran pada vertex
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity(); // dihitung dengan matriks identitas

	gluOrtho2D(0.0, 599.0, 0.0, 599.0);
	// memberikan sistem koordinat dalam windows yg dibuat
	//(fungsi untuk mengatur sistem koordinat pada windows yg sudah dibuat)

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
