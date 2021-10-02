#include <iostream>
using namespace std;

int main(){

    int nilai;
    cout << "PROGRAM KONVERSI NILAI ANGKA\n"<<endl;
    cout << "Masukkan nilai yang ingin dikonversi :";
    cin >> nilai;

    if (nilai >= 85 && nilai <= 100){
        cout << "Nilai Huruf : A\n";
    } else if (nilai >= 70 && nilai < 85){
        cout << "Nilai Huruf : B\n";
    } else if (nilai >= 60 && nilai < 70){
        cout << "Nilai Huruf : C\n";
    } else if (nilai >= 45 && nilai < 60){
        cout << "Nilai Huruf : D\n";
    } else if (nilai >= 0 && nilai < 45){
        cout << "Nilai Huruf : E\n";
    } else {
        cout << "Nilai anda di luar area konversi\n";
    }

}
