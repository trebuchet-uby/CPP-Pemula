// ANDHI PRASETYO
// C20010004
// GRAFIKA KOMPUTER

#include <iostream>
#include <GL/freeglut.h>
#include "D:\PROJECT\C++\GK_Tugas15\loadImageBMP.h"

GLuint _textureID;
float angle = 0.0f;

void drawCube(){

    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, _textureID);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-0.5f, 0.5f, -0.5f); //A
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(0.5f, 0.5f, -0.5f); //B
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(0.5f, -0.5f, -0.5f); //C
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-0.5f, -0.5f, -0.5f); //D
    glEnd();

    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex3f(-0.5f, 0.5f, 0.5f); //A
    glVertex3f(0.5f, 0.5f, 0.5f); //B
    glVertex3f(0.5f, -0.5f, 0.5f); //C
    glVertex3f(-0.5f, -0.5f, 0.5f); //D
    glEnd();

    glColor3f(0.0f, 0.0f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex3f(0.5f, 0.5f, 0.5f); //A
    glVertex3f(0.5f, 0.5f, -0.5f); //B
    glVertex3f(0.5f, -0.5f, -0.5f); //C
    glVertex3f(0.5f, -0.5f, 0.5f); //D
    glEnd();

    glColor3f(1.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex3f(-0.5f, 0.5f, 0.5f); //A
    glVertex3f(-0.5f, 0.5f, -0.5f); //B
    glVertex3f(-0.5f, -0.5f, -0.5f); //C
    glVertex3f(-0.5f, -0.5f, 0.5f); //D
    glEnd();

    glColor3f(0.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex3f(-0.5f, 0.5f, 0.5f); //A
    glVertex3f(0.5f, 0.5f, 0.5f); //B
    glVertex3f(0.5f, 0.5f, -0.5f); //C
    glVertex3f(-0.5f, 0.5f, -0.5f); //D
    glEnd();

    glColor3f(0.0f, 0.0f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex3f(-0.5f, -0.5f, 0.5f); //A
    glVertex3f(0.5f, -0.5f, 0.5f); //B
    glVertex3f(0.5f, -0.5f, -0.5f); //C
    glVertex3f(-0.5f, -0.5f, -0.5f); //D
    glEnd();

    glDisable(GL_TEXTURE_2D);

}

void display(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glEnable(GL_DEPTH_TEST);

    glPushMatrix();
    glRotated(angle, 0.0f, 1.0f, 0.0f);
    drawCube();
    glPopMatrix();

    glutSwapBuffers();
}

void myinit(){
    glClearColor(1.0, 1.0, 1.0, 1.0);
    _textureID = loadBMP_custom("D:\PROJECT\C++\GK_Tugas15\rainbow.bmp");
}

void timer(int){
    glutPostRedisplay();
    glutTimerFunc(1000 / 30, timer, 0);
    angle += 5.0f;
}

int main (int argc, char** argv){

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Texturing");
    glutDisplayFunc(display);

    myinit();

    glutTimerFunc(0, timer, 0);
    glutMainLoop();

    return 0;
}

