//Program Konversi Rupiah ke Dollar Amerika
#include <iostream>
using namespace std;
int main()
{
    float rupiah;
    float dollar;
    float hasil;
    cout << "Konversi RUPIAH ke USD" << endl;
    cout << "========================" << endl << endl;
    cout << "Input nilai tukar Rupiah/1$: ";
    cin >> dollar; cout << endl;
    cout << "Masukkan nilai Rupiah yang akan ditukar: ";
    cin >> rupiah; cout <<endl;
    hasil = rupiah / dollar;
    cout << "hasil yang anda dapatkan: ";
    cout << hasil; cout << " Dollar" << endl;
    return 0;
}
