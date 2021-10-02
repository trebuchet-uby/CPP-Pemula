#include <iostream>
#include <GL/freeglut.h>

void display(){
    glClear(GL_COLOR_BUFFER_BIT); //membersihkan layar
    glColor3f(1.0, 0.0,0.0); // memberikan warna RGB
    glBegin(GL_TRIANGLES); //awalan untuk menggambar, mengambar segitiga
    glVertex2f(0.0, 0.0); // posisi titik, titik di posisi (0,0)
    glVertex2f(499.0, 0.0); // akan menggambar titik di posisi (499.0)
    glVertex2f(250.0, 499.0); // titik diposisi (250, 499)
    glEnd(); // ditutup
    glFlush(); // memerintahkan openGL menggambar objecc ke layar
}

void myinit (){
    glClearColor (1.0, 1.0, 1.0, 1.0); //membersihkn layar + memberikan warna putih
    glColor3f(1.00, 0.0, 0.0); // memberikan warna merah
    glPointSize(2.0); // memberikan ukuran pada vetex
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity(); // dihitung dengan matriks identitas
    gluOrtho2D(0.0, 499.0, 0.0, 499.0);//memberikan sistem koordinat dalam windows yang dibuat
}

int main (int argc, char** argv){
    glutInit(&argc, argv); //Inisialisasi Glut
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); //mode single buffer
    glutInitWindowSize(500, 500); // Ukuran, 500px x 500px
    glutInitWindowPosition(0, 0); // posisi windows
    glutCreateWindow("Points"); // membuat windows + memberi judul
    glutDisplayFunc(display); // fungsi display atau tampilannya

    myinit();
    glutMainLoop(); // mengulang proses

    return 0;
    }

