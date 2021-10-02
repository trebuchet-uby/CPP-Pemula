#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;
int tabungan=10000000;

void saldo()
{
 cout<<"Saldo Anda Saat Ini Adalah Rp. "<<tabungan<<endl;
 cout<<endl;
}
int penarikan()
{
 int tarik;
 cout<<"Masukkan Nominal yang Anda Tarik = Rp. ";
 cin>>tarik;
 tabungan=tabungan-tarik;
 cout<<"Sisa Saldo Anda Saat Ini Rp. "<<tabungan<<endl;
}

int setoran()
{
 int setor;
 cout<<"Masukkan Nominal yang Anda Setor = Rp. ";
 cin>>setor;
 tabungan=tabungan+setor;
 cout<<"Jumlah Saldo Anda Saat Ini Adalah = Rp. "<<tabungan<<endl;

}

void keluar()
{
 cout<<"================================"<<endl;
 cout<<"Sisa Saldo Anda Saat Ini Adalah Rp."<<tabungan<<endl;
 cout<<"================================"<<endl;
 cout<<"==========TERIMA KASIH=========="<<endl;
 cout<<"================================"<<endl;
};

int main ()
{
 cout<< "=====================================" <<endl;
 cout<< "============ATM KITA KLP33===========" <<endl;
 cout<< "=====================================" <<endl;
 cout<<endl;
 cout<< "=====================================" <<endl;
 awal:
  int pilihan, pilih;
 cout<< "====================================="<<endl;
 cout<<endl;

cout<< " 1. CEK SALDO"<<endl;
 cout<< " 2. PENARIKAN TUNAI"<<endl;
 cout<< " 3. SETOR TUNAI"<<endl;
 cout<< " 4. KELUAR"<<endl;
 cout<< "Masukkan pilihan anda (1/2/3/4) = " ;
 cin>>pilih;

 switch (pilih)
 {
  case 1:
   system ("cls");
   saldo();
   goto awal;
   break;

  case 2:
   system ("cls");
   penarikan();
   goto awal;
   break;

  case 3:
   system ("cls");
   setoran ();
   goto awal;
   break;

  case 4:
   system ("cls");

   keluar ();
 };
}
