/*
Nama program    : Latihan01.cpp
Dibuat tanggal  : 2 Februari 2015
Fungsi Program  : mencetak keterangan
Dibuat oleh     : nama mahasiswa
*/

#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main ()
{
//menampilkan data............
system("cls");

cout << "Data Mahasiswa" << endl;
cout << "=========================" << endl;
cout << "1. NIM     : A12.2014.29012" << endl;
cout << "2. Nama    : Nur Hartati Mulya" << endl;
cout << "3. Alamat  : Jl. Nuri 45 RT.01/RW.03\n";
cout << "4. Kel.    : Wonomulyo\n";
cout << "4. Kec.    : Candisari\n";
cout << "5. Kota    : Semarang"; // cetak kota
cout << endl;

getch();
return 0;
}
