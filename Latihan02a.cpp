#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
char nama[30];
char alamat[30];
int main ()
{
system("cls");// pengganti clrscr;
strcpy(nama, "Setia Djati");
strcpy(alamat, "Jl. Nuri 45");
int nilai1 = 85;
int nilai2 = 90;
//cetak data...........................
cout << "Data Mahasiswa" << endl;
cout << "=============================" << endl;
cout << "1. Nama : " << nama << endl;
cout << "2. Alamat : " << alamat << endl;
cout << "3. Nilai1 : " << nilai1 << endl;
cout << "4. Nilai2 : " << nilai2 << endl;
float rata = (nilai1 + nilai2)/2;
cout << "5. Rata-rata : " << rata << endl;
cout << "=============================" << endl;
getch();
return 0;
}
