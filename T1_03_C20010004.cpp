#include <iostream>
using namespace std;
int main ()
{
    int kll_c20010004, luas_c20010004;
    int alas_c20010004, tinggi_c20010004, sisi_c20010004;

    cout << "Perhitungan Luas dan Keliling Segitiga \n";
    cout << "\n";

    cout << "Masukan nilai alasnya: ";
    cin >> alas_c20010004;

    cout << "Masukan nilai tingginya: ";
    cin >> tinggi_c20010004;

    cout << "Masukan nilai sisinya: ";
    cin >> sisi_c20010004;

    kll_c20010004 = alas_c20010004 + tinggi_c20010004 + sisi_c20010004;
    luas_c20010004 = alas_c20010004 * tinggi_c20010004 / 2;

    cout << "\n";

    cout << "\n";
    cout << "============================================= \n";
    cout << "\n";
    cout << "Luas segitiganya: " << luas_c20010004;
    cout << "\n";
    cout << "Keliling segitiganya: " << kll_c20010004;
    cout << "\n";
    cout << "\n";
    cout << "Terima Kasih \n";
    cout << "\n";
}
