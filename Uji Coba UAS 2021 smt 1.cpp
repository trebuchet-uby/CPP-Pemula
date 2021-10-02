#include <iostream>

using namespace std;
int main (int argc,char const*argv[])
{
 cout<<"HARDIFAL.COM\n\n";

 char nama [20];
 int nilai, nilaiAkhir,T,UT, UA;
 cout<<"//--------------------------------//\n";
 cout<<"Program Perhitungan Nilai Mahasiswa \n\n";
 cout<<"Masukan Nilai Mahasiswa : ";cin.getline(nama, sizeof(nama));
 cout<<"Masukan Nilai Tugas  : ";cin>>T;
 cout<<"Masukan Nilai UTS  : ";cin>>UT;
 cout<<"Masukan Nilai UAS  : ";cin>>UA;
 cout<<"//--------------------------------//\n";

 //Proses hitung nilai rata-rata
 //
 nilai = (T+UA+UT)/2.5;
 cout<<"//==========HASIL=========\\";
 cout<<"Nama Mahasiswa\t  : "<<nama<<endl;
 cout<<"Nilai Tugas\t  : "<<T<<endl;
 cout<<"Nilai UTS\t  : "<<UT<<endl;
 cout<<"Nilai UAS\t  : "<<UA<<endl;
 //
 if (nilai >= 90) {
  //Hasil Perhitungan
  cout<<"Skor  \t : A \n";
 } else if ((nilai>=80) && (nilai < 90)) {
  cout<<"Skor  \t : B \n";
 } else if ((nilai<80) && (nilai < 70)) {
  cout<<"Skor  \t : C \n";
 } else if ((nilai>=70) && (nilai < 60)) {
  cout<<"Skor  \t : D \n";
 } else if (nilai < 60) {
  cout<<"Skor  \t : E \n";
 }
 cout<<"//--------------------------------//\n";
 //Keluar dari Proses
 cin.get();
 return 0;
}
