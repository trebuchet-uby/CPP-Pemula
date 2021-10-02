#include <iostream>
using namespace std;
int main ()

//Program menghitung luas dan keliling persegi panjang

{
    float panjang_C20010004, lebar_C20010004;
    float luas_C20010004, keliling_C20010004;

    cout << "Perhitungan Luas dan Keliling Persegi Panjang \n";
    cout << "\n";
    cout << "============================ \n";
    cout << "\n";

    cout << "Masukan panjang sisi persegi panjang: ";
    cin >> panjang_C20010004;

    cout << "Masukan lebar sisi persegi panjang: ";
    cin >> lebar_C20010004;

    luas_C20010004 = panjang_C20010004 * lebar_C20010004;
    keliling_C20010004 = (panjang_C20010004 + lebar_C20010004)*2;

    cout << "\n";
    cout << "============================ \n";
    cout << "\n";
    cout << "Jadi, Luas Persegi Panjang: " << luas_C20010004;
    cout << "\n";
    cout << "Jadi, Keliling Persegi Panjang: " << keliling_C20010004;
    cout << "\n";
    cout << "\n";
    cout << "============================ \n";

    return 0;
}
