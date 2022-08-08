#include <iostream>
#include <math.h> // biar sin, cos bisa dieksekusi
#include <GL/freeglut.h>

// Andhi Prasetyo
// C20010004
// Grafika Komputer
// Tugas Membuat Animasi2D (Bergerak)
// Kesimpulan: Penulis masih bingung dengan kestabilan gerakan

//Bahan mentah / fungsi untuk membuat lingkaran
int i;
const double PI = 3.14;

void lingkaran(int jari2, int jumlah_titik, int x_tengah, int y_tengah) {
    glBegin(GL_POLYGON);
    for (i=0;i<=360;i++){
        float sudut=i*(2*PI/jumlah_titik);
        float x=x_tengah+jari2*cos(sudut);
        float y=y_tengah+jari2*sin(sudut);
        glVertex2f(x,y);
    }
    glEnd();
 }

// Fungsi untuk menggambar segi4 = BELUM JADI
void kotak(float r, float g, float b) {
	glColor3f(r, g, b);
	glBegin(GL_POLYGON);
	glVertex2f(-300.0f, -300.0f);
	glVertex2f(-300.0f, -200.0f);
	glVertex2f(200.0f, -200.0f);
	glVertex2f(-100.0f, -100.0f);
	glEnd();
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);

    // Matahari
    glColor3f(1,0,0); // warna merah
    lingkaran(50,200,320,350);
    /////////////////////////

    // Gunung Belakang
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.6,0.0); // warna hijau
    glVertex2f(-500,0); // pojok kiri titik
    glVertex2f(-100,450); // tinggi gunung
    glVertex2f(300,0); // pojok kanan titik
    glEnd();
    glFlush();

    // Gunung Depan
    glBegin(GL_POLYGON);
    glColor3f(0.0,1.0,0.0); // hijau juga
    glVertex2f(-300,0); // pojok kiri titik
    glVertex2f(100,300); // tinggi gunung
    glVertex2f(500,0); // pojok kanan titik
    glEnd();
    glFlush();

    /////////////////////////

    // Awan - menumpuk beberapa lingkaran biar seperti awan
    glColor3f(1,1,1);
    lingkaran(60, 200, -80, 318);
    glColor3f(1,1,1);
    lingkaran(75, 200, -164, 234);
    glColor3f(1,1,1);
    lingkaran(72, 200, -340, 220);
    glColor3f(1,1,1);
    lingkaran(60, 200, -264, 209);
    glColor3f(1,1,1);
    lingkaran(45,200, -220, 333);
    glColor3f(1,1,1);
    lingkaran(39, 200, -210, 209);
    glColor3f(1,1,1);
    lingkaran(44, 200, -214, 228);
    glColor3f(1,1,1);
    lingkaran(44, 200, -214, 310);
    glEnd();
    glFlush();

    /////////////////////////

    // LAUT
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,1.0); // biru
	glVertex2f(-500.0f, 0.0f);
	glVertex2f(500.0f, 0.0f);
	glVertex2f(500.0f, -500.0f);
	glVertex2f(-500.0f, -500.0f);
    glEnd();
    glFlush();

    /////////////////////////

	kotak(1.0f, 1.0f, 0.0f); // membuat kotak kuning

	glPushMatrix();
	// silahkan coba buka satu per satu dari glTranslatef, glRotatef dan glScalef,
	// maka kalian akan tahu keguaan dari fungsi tersebut. dan bisa digunakan bersama-sama

	glTranslatef(200.0f, 0.0f, 0.0f);
	glRotatef(45.0f, 0.0f, 0.0f, 1.0f);
	glScalef(0.5f, 0.5f, 0.5f);
	kotak(0.0f, 0.0f, 1.0f);

	glPopMatrix();


	glutSwapBuffers();
}

void myinit() {
	glClearColor(0.5, 1.0, 1.0, 0.0); // baground belakang, biru muda
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(2.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-500.0f, 500.0f, -500.0f, 500.0f);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv); // Inisialisasi glut
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(600, 600); // lebar layar
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Animasi2D");
	glutDisplayFunc(display);

	myinit(); //inisiasi open gl
	glutMainLoop(); // perulangan proses

	return 0;
}
