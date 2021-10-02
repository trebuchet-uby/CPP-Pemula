#include <iostream>
#include <conio.h>
using namespace std;

int main(){

    int nilai1, nilai2;
    cout << "PROGRAM SELEKSI PEGAWAI\n"<<endl;
    cout << "Masukkan Nilai Pertama : ";
    cin >> nilai1;
    cout << "Masukkan Nilai Kedua : ";
    cin >> nilai2;

    if (nilai1 >= 85 && nilai2 >= 85 ){
        cout << "SELAMAT ANDA LULUS \n";
    } else if (nilai1 >= 80 && ((nilai1+nilai2)/2)>= 90 ){
        cout << "SELAMAT ANDA LULUS \n";
    } else if (nilai2 >= 80 && ((nilai1+nilai2)/2)>= 90 ){
        cout << "SELAMAT ANDA LULUS \n";
    } else {
        cout << "MAAF, ANDA TIDAK LULUS";
    }
    getch();
    return 0;
}
