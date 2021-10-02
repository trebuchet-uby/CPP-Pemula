#include <iostream>
#include <conio.h>
using namespace std;

int main(){

    int jumlah_anak, jumlah_tunjangan;
    cout << "PROGRAM HITUNG TUNJANGAN ANAK\n"<<endl;
    cout << "Masukkan jumlah anak : ";
    cin >> jumlah_anak;

    if (jumlah_anak <= 3){
        jumlah_tunjangan = jumlah_anak * 50000;
        cout << "Tunjangan Anak Anda : "
        << jumlah_tunjangan << " rupiah" << endl ;
    } else if (jumlah_anak > 3){
        jumlah_tunjangan = 3 * 50000;
        cout << "Tunjangan Anak Anda : "
        << jumlah_tunjangan << " rupiah" << endl ;
    } else if (jumlah_anak <= 0){
        jumlah_tunjangan = 0 * 50000;
        cout << "Tunjangan Anak Anda : "
        << jumlah_tunjangan << " rupiah" << endl ;
    } else {
        cout << endl;
    }
    getch();
    return 0;
}
