#include<gl\freeglut.h>//Sesuaikan dengan lokasi glut.h teman teman

#include<windows.h>
void display (void)
{
glClear(GL_COLOR_BUFFER_BIT);
glBegin(GL_LINES);
glColor3f(0,0,1);
glVertex2f(0.2,0.5); //titik kordinat A 0.2 dan 0.5
glVertex2f(0.7,0.5);// titik kordinat B 0.7 dan 0.5
glEnd();
glFlush();
}

int main(int argc, char** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(600,600);
glutCreateWindow("Garis");
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
