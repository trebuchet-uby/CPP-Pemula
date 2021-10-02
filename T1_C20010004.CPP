/*
TUGAS 1
Matkul      : Struktur Data
Hari/Tgl.   : Rabu, 17 Februari 2021
Nama        : Andhi Prasetyo
NIM         : C20010004
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
//type data

string name_004[5];
string from_004[5];
string adress_004[5];
string department_004[5];
int array_004;
int show_004;

//pembukaan
cout    <<"====================================="<<endl;
cout    <<"DATA CALON MAHASISWA BARU UBY"<<endl;
cout    <<"====================================="<<endl<<endl;

//Input Data Array
for (array_004=0;array_004<5;array_004++){

        cout    <<"Nama Calon ke-"<<array_004+1<<"\t: ";
        cin     >>name_004[array_004];

        cout    <<"Asal Sekolah"<<"\t: ";
        cin     >>from_004[array_004];

        cout    <<"Alamat Domisili"<<"\t: ";
        cin     >>adress_004[array_004];

        cout    <<"Prodi Pilihan"<<"\t: ";
        cin     >>department_004[array_004];

        cout    <<endl;
        cout    <<"-------------------------------------"<<endl<<endl;

}

//pembukaan 2
cout    <<"====================================="<<endl;
cout    <<"MENAMPILKAN DATA PILIHAN"<<endl;
cout    <<"====================================="<<endl<<endl;

//perulangan while-do
show_004 = 1;
while ((show_004 != 0)&&(show_004==1)){

        //saya masih kesulitan membuat logika input
        //saat masukan A, komputer akan membaca sebagai array A-1
        cout    <<"PILIH NOMOR DATA:" <<endl;
        cout    <<"Nomor Data - 1 --> (0,1,2,3,4)"<<"\t: ";
        cin     >>array_004;

        cout    <<endl;
        cout    <<"-------------------------------------"<<endl<<endl;

        cout    <<"DATA CALON KE-"<<array_004+1<<endl;
        cout    <<"Nama Calon"<<"\t: "<<name_004[array_004]<<endl;
        cout    <<"Asal Sekolah"<<"\t: "<<from_004[array_004]<<endl;
        cout    <<"Alamat Domisili"<<"\t: "<<adress_004[array_004]<<endl;
        cout    <<"Program Studi"<<"\t: "<<department_004[array_004]<<endl;

        cout    <<endl;
        cout    <<"-------------------------------------"<<endl<<endl;

        //saat konstanta saya isi "Y" ada peringatan const char bermasalah
        //jadi saya buat pilihan angka integer
        //saat diisi selain 1 dan 0, program berhenti
        //saya masih belum bisa membatasi lebih rinci agar hanya bisa menampilkan dua pilihan saja
        cout    <<"INGIN MENAMPILKAN DATA LAGI?"<<endl;
        cout    <<"(Y = 1 / N = 0) \t: ";
        cin     >>show_004;

        cout    <<endl;
        cout    <<"-------------------------------------"<<endl<<endl;

    }

//penutupan
cout    <<endl;
cout    <<"PROGRAM TELAH SELESAI"<<endl;
cout    <<"+++++++++++++++++++++++++++++++++++++";

getch();
return 0;

}
