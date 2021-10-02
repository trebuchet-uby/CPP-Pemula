#include <iostream>
using namespace std;

int main()
{
    int r;              // r = jari-jari lingkaran
    float Kll, phi;     // kll = keliling

    phi = 3.1428;
    Kll = 2 * phi * r;

    cout << "Menghitung Keliling Lingkaran\n";
    cout << "\n"; //jarak antar baris biar lebar
    cout << "Masukkan jumlah jari-jari : ";

    cin  >> r;

    cout << "\n"; //jarak antar baris biar lebar
    cout << "Nilai keliling lingkarannya adalah: " << Kll << endl;
    cout << "\n"; //jarak antar baris biar lebar

    return 0;

}
