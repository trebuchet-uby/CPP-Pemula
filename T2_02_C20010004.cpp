#include <iostream>
using namespace std;
int main ()
// Program menghitung luas segitiga

{
    float alas_C20010004, tinggi_C20010004;
    float luas_C20010004;

    cout << "Perhitungan Luas Segitiga \n";
    cout << "\n";

    cout << "Masukan nilai alasnya: ";
    cin >> alas_C20010004;

    cout << "Masukan nilai tingginya: ";
    cin >> tinggi_C20010004;

    luas_C20010004 = alas_C20010004 * tinggi_C20010004 / 2;

    cout << "\n";
    cout << "============================================= \n";
    cout << "\n";
    cout << "Jadi, Luas Segitiga: " << luas_C20010004;
    cout << "\n";

    return 0;
}
