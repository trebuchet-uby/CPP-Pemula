// Deklarasi Library
#include <GL/freeglut.h>
#include<iostream>
using namespace std;

// Deklarasi Radius dan Pergerakan
GLfloat detik = 0.0f; // DETIK
GLfloat menit = 0.0f; // MENIT
GLfloat jam = 0.0f; // JAM

void biasanya_myinit(){
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    // Mengatur warna baground belakang / dasar
}

void Idle(){
    glutPostRedisplay();
    // gerak detik-an
}

// Objek yang akan ditampilkan
void Tampilan_Jam(){
    glClear(GL_COLOR_BUFFER_BIT);
    // membersihkan warna

    glLineWidth(20.0f); // ukuran ketebalan garis

    //=========================================
    // MENGGAMBAR SEGI EMPAT BERTINGKAT

    glBegin(GL_POLYGON); // Menggambar segi empat 1
    glColor3f(1.0f, 0.0f, 0.0f); // warna merah
    glVertex2f(0.9f, 0.9f); // kordinat
    glVertex2f(0.9f, -0.9f );  // kordinat
    glVertex2f(-0.9f, -0.9f );  // kordinat
    glVertex2f( -0.9f, 0.9f);  // kordinat
    glEnd();
    // Semacam Break untuk gambar

    glBegin(GL_POLYGON); // Menggambar segi empat 2
    glColor3f(0.0f, 1.0f, 0.0f); // warna kuning
    glVertex2f(0.8f, 0.8f); // kordinat
    glVertex2f(0.8f, -0.8f );  // kordinat
    glVertex2f(-0.8f, -0.8f );  // kordinat
    glVertex2f( -0.8f, 0.8f);  // kordinat
    glEnd();
    // Semacam Break untuk gambar

    glBegin(GL_POLYGON); // Menggambar segi empat 3
    glColor3f(1.0f, 1.0f, 0.0f); // warna kuning
    glVertex2f(0.7f, 0.7f); // kordinat
    glVertex2f(0.7f, -0.7f );  // kordinat
    glVertex2f(-0.7f, -0.7f );  // kordinat
    glVertex2f( -0.7f, 0.7f);  // kordinat
    glEnd();
    // Semacam Break untuk gambar

    //=========================================
    // GARIS STRIP PENANDA JAM

    glBegin(GL_LINES);
    // mulai menggambar strip / garis
    glColor3ub(0,0,255);
    // warna strip penanda jam = biru

    // Strip di angka 12
    // Paling Atas / Pancer
    glVertex2f(0.0f, 0.7f);
    glVertex2f(0.0f, 0.6f);

    // Strip di angka 6
    // Paling Bawah / Pancer
    // Mirror dari 12
    glVertex2f(0.0f, -0.7f);
    glVertex2f(0.0f, -0.6f);

    // Strip di angka 3
    // Paling Kanan Pancer
    // Pergeseran sumbu
    glVertex2f(0.7f, 0.0f);
    glVertex2f(0.6f, 0.0f);

    // Strip di angka 9
    // Paling Kiri Pancer
    // Mirror dari 3
    glVertex2f(-0.7f, 0.0f);
    glVertex2f(-0.6f, 0.0f);

    // Strip di angka 1
    // Geser Kanan Sedikit
    glVertex2f(0.38f, 0.7f);
    glVertex2f(0.34f, 0.6f);

    // Strip di angka 11
    // Mirror kanan-kiri dengan 1
    glVertex2f(-0.38f, 0.7f);
    glVertex2f(-0.34f, 0.6f);

    // Strip di angka 7
    // Mirror atas bawah dengan 11
    glVertex2f(-0.38f, -0.7f);
    glVertex2f(-0.34f, -0.6f);

    // Strip di angka 5
    // Mirror kanan-kiri dengan 7
    glVertex2f(0.38f, -0.7f);
    glVertex2f(0.34f, -0.6f);

    // Strip di angka 2
    // Geser Dikit
    glVertex2f(0.7f, 0.35f);
    glVertex2f(0.6f, 0.32f);

    // Strip di angka 4
    // mirror atas-bawah 2
    glVertex2f(0.7f, -0.35f);
    glVertex2f(0.6f, -0.32f);

    // Strip di angka 8
    // mirror kanan kiri 4
    glVertex2f(-0.7f, -0.35f);
    glVertex2f(-0.6f, -0.32f);

    // Strip di angka 10
    // mirror atas bawah 8
    glVertex2f(-0.7f, 0.35f);
    glVertex2f(-0.6f, 0.32f);

    glEnd();
    // Semacam Break untuk gambar

glLoadIdentity(); // ganti setingan program

    // ===========================================
    // GARIS UNTUK DETIK

    glPushMatrix(); // Menyimpan Koordinat
    glRotatef(detik,0.0,0.0,0.1);
    glLineWidth(5.0f); // Ukuran Strip
    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f, 1.0f); // Warna Ungu
    glVertex2f(0.0f, 0.0f); // Titik Pusat
    glVertex2f(0.0f, 0.65f); // Ketinggian / Panjang
    glEnd();
    // Semacam Break untuk gambar
    glPopMatrix();
    //memanggil simpanan di glPopMatrix

    // ===========================================
    // GARIS UNTUK MENIT
    glPushMatrix(); // Menyimpan Koordinat
    glRotatef(menit,0.0,0.0,0.1);
    glLineWidth(7.0f); // ketebalan
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 1.0f);//warna biru
    glVertex2f(0.0f, 0.0f); // Titik pusat
    glVertex2f(0.0f, 0.55f); // Ketinggian / Panjang

    glEnd();
    // Semacam Break untuk gambar
    glPopMatrix();
    //memanggil simpanan di glPopMatrix

    glPopMatrix();//memanggil simpanan di glPopMatrix

    glPushMatrix(); // Menyimpan Koordinat
    glRotatef(jam,0.0,0.0,0.1);
    glLineWidth(8.0f); // Tebal Garis
    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);//warna merah
    glVertex2f(0.0f, 0.0f); // titik pusat
    glVertex2f( 0.0f, 0.45f); //Ketinggian / panjang

    glEnd();
    // Semacam Break untuk gambar
    glPopMatrix();
    //memanggil simpanan di glPopMatrix

    // ===============================================
    // Setingan Perpaduan jam, menit Detik
    detik-=0.0075f;
    if(detik<=-360){ // 360 sudut satu lingkarang
        if(menit<=-360){
            jam-=5.0f; // geser jika menit sudah sukses satu putaran
            detik=0.0f;
            menit=0.0f;
        }else{
            menit-=6.0f; // geser jika Detik sudah sukses satu putaran
            detik=0.0f;
        }
    }
    glFlush();
    // memerintahkan openGL menggambarkan objek ke layars
}

int main(int argc, char** argv){
    glutInit(&argc, argv); // Inisialisasi glut
    glutInitWindowSize(500, 500); // mengatur ukuran tampilan layar
    glutCreateWindow("UTS Grafika Komputer"); // judul tampilan layar
    glutDisplayFunc(Tampilan_Jam);// menampilkan objek dengan memanggil fungsi
    biasanya_myinit(); //inisiasi open gl
    glutIdleFunc(Idle); // gerak detikan
    glutMainLoop(); // perulangan proses
    return 0;
}
