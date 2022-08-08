#include <assert.h>
#include <fstream>
#include <stdlib.h>
#include <gl/freeglut.h>
#include <gl/glut.h>
#include "imageloader.h"

int w = 480, h = 480;
int s, p=-10, a, b, c;

GLuint _textureId;

GLint loadTexture(Image* image) {
    GLuint textureId;
    glGenTextures(1, &textureId);
    glBindTexture(GL_TEXTURE_2D, textureId);
    glTexImage2D(GL_TEXTURE_2D,
        0, GL_RGB,
        image->width, image->height,
        0, GL_RGB,
        GL_UNSIGNED_BYTE,
        image->pixels);
    return textureId;
}

using namespace std;
Image::Image(char* ps, int w, int h) :
pixels(ps), width(w), height(h) {}

Image::~Image() {
    delete[] pixels;
}

namespace {
int toInt(const char* bytes) {
    return (int)(((unsigned char)bytes[3] << 24) |
                ((unsigned char)bytes[2] << 16) |
                ((unsigned char)bytes[1] << 8) |
                (unsigned char)bytes[0]);
    }

short toShort(const char* bytes) {
    return (short)(((unsigned char)bytes[1] << 8) |
                (unsigned char)bytes[0]);
    }

int readInt(ifstream &input) {
    char buffer[4];
    input.read(buffer, 4);
    return toInt(buffer);
    }

short readShort(ifstream &input) {
    char buffer[2];
    input.read(buffer, 2);
    return toShort(buffer);
    }

template<class T>
class auto_array {
private:
    T* array;
    mutable bool isReleased;
public:
    explicit auto_array(T* array_ = NULL) :
    array(array_), isReleased(false) {
    }

auto_array(const auto_array<T> &aarray) {
        array = aarray.array;
        isReleased = aarray.isReleased;
        aarray.isReleased = true;
    }

~auto_array() {
    if (!isReleased && array != NULL) {
        delete[] array;
        }
    }

    T* get() const {
        return array;
    }

    T &operator*() const {
        return *array;
    }

    void operator=(const auto_array<T> &aarray) {
    if (!isReleased && array != NULL) {
        delete[] array;
    }
    array = aarray.array;
    isReleased = aarray.isReleased;
    aarray.isReleased = true;
    }

    T* operator->() const {
        return array;
    }

    T* release() {
        isReleased = true;
        return array;
    }

    void reset(T* array_ = NULL) {
    if (!isReleased && array != NULL) {
        delete[] array;
        }
        array = array_;
    }

    T* operator+(int i) {
        return array + i;
        }

    T &operator[](int i) {
        return array[i];
        }
    };
}

Image* loadBMP(const char* filename) {
    ifstream input;
    input.open(filename, ifstream::binary);
    assert(!input.fail() || !"Could not find file");
    char buffer[2];
    input.read(buffer, 2);
    assert(buffer[0] == 'B' && buffer[1] == 'M' || !"Not a bitmap file");
    input.ignore(8);
    int dataOffset = readInt(input);

    //Read the header
    int headerSize = readInt(input);
    int width;
    int height;
    switch(headerSize) {
        case 40:
            //V3
            width = readInt(input);
            height = readInt(input);
            input.ignore(2);
            assert(readShort(input) == 24 || !"Image is not 24 bits per pixel");
            assert(readShort(input) == 0 || !"Image is compressed");
            break;
        case 12:
            //OS/2 V1
            width = readInt(input);
            height = readInt(input);
            input.ignore(2);
            assert(readShort(input) == 24 || !"Image is not 24 bits per pixel");
            break;
        case 64:
            //OS/2 V2
            assert(!"Can't load OS/2 V2 bitmaps");
            break;
            case 108:
            //Windows V4
            assert(!"Can't load Windows V4 bitmaps");
            break;
        case 124:
            //Windows V5
            assert(!"Can't load Windows V5 bitmaps");
            break;
            default:
            assert(!"Unknown bitmap format");
    }

//Read the data
int bytesPerRow = ((width * 3 + 3) / 4) * 4 - (width * 3 % 4);
int size = bytesPerRow * height;
auto_array<char> pixels(new char[size]);
input.seekg(dataOffset, ios_base::beg);
input.read(pixels.get(), size);

//Get the data into the right format
auto_array<char> pixels2(new char[width * height * 3]);
    for(int y = 0; y < height; y++) {
        for(int x = 0; x < width; x++) {
            for(int c = 0; c < 3; c++) {
                pixels2[3 * (width * y + x) + c] =
                pixels[bytesPerRow * y + 3 * x + (2 - c)];
            }
        }
    }

    input.close();
    return new Image(pixels2.release(), width, height);
}

void mydisplay(void){
    glClearColor(1,1,1,1);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, _textureId);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);

     glTranslatef(0,0,p);
     glRotatef(s, a, b, c);
     glPushMatrix();
     glRotatef(180,0,1,0);
     glBegin(GL_QUADS);
           glTexCoord2f(0.0f, 0.0f);
                 glVertex2f(-2.0f, -2.0f);
           glTexCoord2f(0.0f, 0.5f);
                 glVertex2f(2.0f, -2.0f);
           glTexCoord2f(1.0f, 0.5f);
                 glVertex2f(2.0f, 2.0f);
           glTexCoord2f(1.0f, 0.0f);
                 glVertex2f(-2.0f, 2.0f);
     glEnd();

     glPopMatrix();
     glPushMatrix();
     glTranslatef(2,0,2);
     glRotatef(90,0,1,0);
     glBegin(GL_QUADS);
           glTexCoord2f(0.0f, 0.5f);
                 glVertex2f(-2.0f, -2.0f);
           glTexCoord2f(0.0f, 1.0f);
                 glVertex2f(2.0f, -2.0f);
           glTexCoord2f(1.0f, 1.0f);
                 glVertex2f(2.0f, 2.0f);
           glTexCoord2f(1.0f, 0.5f);
                 glVertex2f(-2.0f, 2.0f);
     glEnd();

     glTranslatef(-2,0,-2);
     glRotatef(-90,0,1,0);
     glBegin(GL_QUADS);
           glTexCoord2f(0.0f, 0.0f);
                 glVertex2f(-2.0f, -2.0f);
           glTexCoord2f(0.0f, 0.5f);
                 glVertex2f(2.0f, -2.0f);
           glTexCoord2f(1.0f, 0.5f);
                 glVertex2f(2.0f, 2.0f);
           glTexCoord2f(1.0f, 0.0f);
                 glVertex2f(-2.0f, 2.0f);
     glEnd();

     glTranslatef(-2,0,-2);
     glRotatef(-90,0,1,0);
     glBegin(GL_QUADS);
           glTexCoord2f(0.0f, 0.5f);
                 glVertex2f(-2.0f, -2.0f);
           glTexCoord2f(0.0f, 1.0f);
                 glVertex2f(2.0f, -2.0f);
           glTexCoord2f(1.0f, 1.0f);
                 glVertex2f(2.0f, 2.0f);
           glTexCoord2f(1.0f, 0.5f);
                 glVertex2f(-2.0f, 2.0f);
     glEnd();

     glPopMatrix();
     glPushMatrix();
     glTranslatef(0,2,2);
     glRotatef(-90,1,0,0);
     glBegin(GL_QUADS);
           glTexCoord2f(0.0f, 0.0f);
                 glVertex2f(-2.0f, -2.0f);
           glTexCoord2f(0.0f, 0.5f);
                 glVertex2f(2.0f, -2.0f);
           glTexCoord2f(1.0f, 0.5f);
                 glVertex2f(2.0f, 2.0f);
           glTexCoord2f(1.0f, 0.0f);
                 glVertex2f(-2.0f, 2.0f);
     glEnd();

     glPopMatrix();
     glPushMatrix();
     glTranslatef(0,-2,2);
     glRotatef(90,1,0,0);
     glBegin(GL_QUADS);
           glTexCoord2f(0.0f, 0.5f);
                 glVertex2f(-2.0f, -2.0f);
           glTexCoord2f(0.0f, 1.0f);
                 glVertex2f(2.0f, -2.0f);
           glTexCoord2f(1.0f, 1.0f);
                 glVertex2f(2.0f, 2.0f);
           glTexCoord2f(1.0f, 0.5f);
                 glVertex2f(-2.0f, 2.0f);
     glEnd();

     glPopMatrix();
     glDisable(GL_TEXTURE);
     glutSwapBuffers();
}

void resize(int w1, int h1)
{
glViewport(0,0,w1,h1);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluPerspective(45.0, (float)w1/(float)h1, 1.0, 300.0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
}

void init()
{
     GLfloat LightPosition[] = {-10.0f, 20.0f, 20.0f, 0.0f};

     glShadeModel(GL_SMOOTH);
     glClearColor(0.0f, 0.0f, 0.0f, 0.5f);
     glClearDepth(1.0f);
     glEnable(GL_DEPTH_TEST);
     glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);

     glLightfv(GL_LIGHT0, GL_POSITION, LightPosition);

     glEnable(GL_LIGHTING);
     glEnable(GL_LIGHT0);
     glEnable(GL_COLOR_MATERIAL);
     glBlendFunc(GL_SRC_ALPHA, GL_ONE);
     glColorMaterial(GL_FRONT, GL_DIFFUSE);

     Image* image = loadBMP("makanan.bmp");
     _textureId = loadTexture(image);
     return;
}

void myKeyboard(unsigned char key, int x, int y){
     if(key=='x')
     {
           a=1;
     }
     else if(key=='c')
     {
           b=1;
     }
     else if(key=='z')
     {
           c=1;
     }
     s+=20;
}

void timer(int value)
{
glutPostRedisplay();
glutTimerFunc(50,timer,0);
}

int main(int argc, char **argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(w,h);
    glutCreateWindow("UAS Grafika Komputer C20010004");
    glClearColor(0,0,0,0);
    glutDisplayFunc(mydisplay);
    glutTimerFunc(50, timer, 0);
    glutKeyboardFunc(myKeyboard);
    glutReshapeFunc(resize);
    init();
    glutMainLoop();
}
