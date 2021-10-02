#include(iostream)
/*
# = preprocessor directive:
Preprocessor directive adalah perintah – perintah yang diberikan kepada compiler
untuk melakukan definisi, misalnya untuk memasukkan file library, dan lain sebagainya.
Jika kita lihat program diatas kita akan memasukkan (include) library iostream ke dalam program.
iostream adalah header yang dibutuhkan untuk “kegiatan” input dan output.*/

using namespace std;
/*Jadi intinya penggunaannya untuk memberitahukan kepada kompiler bahwa kita
akan menggunakan semua fungsi, class atau file yang terdapat pada memori namespace std.*/

int main()
/*Selanjuntya kode main() adalah blok program yang berfungsi sebagai badan sebuah
alur kondingan atau disebut sebagai program utama yang ditulis antara kode { hingga }.*/

{
cout << "Welcome to C++\n";
}
