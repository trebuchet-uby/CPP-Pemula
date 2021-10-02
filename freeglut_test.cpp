#include <GL/glut.h>
#include <GL/gl.h>

void drawing(){
glClear(GL_COLOR_BUFFER_BIT);
/* Plot the points */
glBegin(GL_POINTS);
/* Plot the first point */
for(int i=-100;i<=100;i++){
glVertex2s(i,0);
glVertex2s(0,i);
}

for(int i=-2;i<=2;i++){
glVertex2s(95+i,4+i);
glVertex2s(95-i,4+i);
}

for(int i=0;i<=2;i++){
glVertex2s(4+i,95+i);
glVertex2s(4-i,95+i);
glVertex2s(4,95-i);
}

glEnd();
glFlush();
}

void Init(){
glEnable(GL_POINT_SMOOTH);
glEnable(GL_BLEND);
/* Set clear color to white */
glClearColor(1.0,1.0,1.0,0);
/* Set plot size */
glPointSize(5.0);
/* Set fill color to black */
glColor3f(0.0,0.0,0.0);
/* glViewport(0 , 0 , 640 , 480); */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-100.0, 100.0 , -100.0, 100.0, -1.0, 1.0);
}

int main(int argc, char **argv){
/* Initialise GLUT library */
glutInit(&argc,argv);
/* Set the initial display mode */
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
/* Set the initial window position and size */
glutInitWindowPosition(100,100);
glutInitWindowSize(500,500);
/* Create the window with title "Brute Force Line" */
glutCreateWindow("TESTING FREEGLUT");
/* Initialize drawing colors */
Init();
/* Call the displaying function */
glutDisplayFunc(drawing);
/* Keep displaying untill the program is closed */
glutMainLoop();
}
