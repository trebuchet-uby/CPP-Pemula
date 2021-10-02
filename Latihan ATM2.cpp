#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;
struct nasabah
{
                char nama[50];
                char alamat[30];
                long int norek;
                double saldo;
};
int main()
{
                int n=0;
                nasabah nas[50];
                int i,pil,x,pos;
                long int no;
                double setor,tarik;
                bool ketemu=false;
                menu:
                                system("cls");
                                cout<<" __________________ "<<endl;
                                cout<<"|                   Bank Mad Arief                   |"<<endl;
                                cout<<"|__________________|"<<endl;
                                cout<<"|______Menu Transaksi______|"<<endl;
                                cout<<"|    1. Pendaftaran Nasabah                          |"<<endl;
                                cout<<"|    2. Menabung                                     |"<<endl;
                                cout<<"|    3. Penarikan                                    |"<<endl;
                                cout<<"|    4. Cetak Daftar Nasabah                         |"<<endl;
                                cout<<"|    5. Cari Nasabah                                 |"<<endl;
                                cout<<"|    6. Keluar                                       |"<<endl;
                                cout<<"|__________________|"<<endl;
                                cout<<" Pilihan Anda : "; cin>>pil;
                                if(pil==1)
                                {
                                                lagi:
                                                                cout<<endl;
                                cout<<"======================================================"<<endl;
                                                                cout<<" Masukan Nomer Rekening : "; cin>>no;
                                                                for(i=0; i<n; i++)
                                                                {
                                                                                if(no==nas[i].norek)
                                                                                ketemu=true;
                                                                                else
                                                                                ketemu=false;
                                                                }
                                                                if(ketemu)
                                                                {
                                                                cout<<" Nomer Rekening Tersebut Sudah Ada, Ulangi Lagi"<<endl;
                                                                                goto lagi;
                                                                }
                                                                else
                                                                {
                                cout<<"======================================================"<<endl;
                                                                                cout<<" Masukan Nama Anda      : "; cin>>nas[n].nama;
                                                                                cout<<" Masukan Alamat         : "; cin>>nas[n].alamat;
                                                                                cout<<" Masukan Saldo Awal     : Rp."; cin>>nas[n].saldo;
                                                                }
                                                                n=n+1;
                                                                nas[i].norek=no;
                                cout<<"======================================================"<<endl;
                                cout<<" Masukan Sembarang Angka Untuk Kembali Ke Menu Utama : "; cin>>x;
                                                                goto menu;
                                }
                                else if(pil==2)
                                {
                                                cout<<endl;
                                cout<<"======================================================"<<endl;
                                                cout<<" Masukan Nomer Rekening  : "; cin>>no;
                                                for(i=0; i<n; i++)
                                                {
                                                                if(no==(nas[i].norek))
                                                                {
                                                                                pos=i;
                                                                                ketemu=true;
                                                                                break;
                                                                }
                                                                else
                                                                ketemu=false;
                                                }
                                                if(ketemu)
                                                {
                                cout<<"======================================================"<<endl;
                                                                cout<<" Masukan Nominal Setoran : Rp."; cin>>setor;
                                                                nas[pos].saldo=nas[pos].saldo+setor;
                                                                cout<<" Setoran Behasil"<<endl;
                                                                cout<<" Jumlah Saldo Anda       : Rp."<<nas[pos].saldo<<endl;
                                                                cout<<endl;
                                                }
                                                else
                                cout<<" Nomer Rekening Tidak Ditemukan"<<endl<<endl;
                                cout<<" Masukan Sembarang Angka Untuk Kembali Ke Menu Utama : "; cin>>x;
                                                goto menu;
                                }
                                else if(pil==3)
                                {
                                                cout<<endl;
                                cout<<"======================================================"<<endl;
                                                cout<<" Masukan Nomer Rekening   : "; cin>>no;
                                                for(i=0; i<n; i++)
                                                {
                                                                if(no==(nas[i].norek))
                                                                {
                                                                                pos=i;
                                                                                ketemu=true;
                                                                                break;
                                                                }
                                                                else
                                                                ketemu=false;
                                                }
                                                if(ketemu)
                                                {
                                cout<<"======================================================"<<endl;
                                                                cout<<" Masukan Jumlah Penarikan : Rp."; cin>>tarik;
                                                                if(tarik<(nas[pos].saldo))
                                                                {
                                                                                nas[pos].saldo=nas[pos].saldo-tarik;
                                                                                cout<<" Penarikan Berhasil"<<endl;
                                                                                cout<<" Sisa Saldo Anda          : Rp."<<nas[pos].saldo<<endl;
                                                                                cout<<endl;
                                                                }
                                                                else
                                                                cout<<" Maaf Saldo Anda Tidak Mencukupi"<<endl;
                                                }
                                                else
                                                cout<<" Nomer Rekening Tidak Ditemukan"<<endl<<endl;
                                cout<<" Masukan Sembarang Angka Untuk Kembali Ke Menu Utama : "; cin>>x;
                                                goto menu;
                                }
                                else if(pil==4)
                                {
                                cout<<endl;
                                cout<<" ====================================================================== "<<endl;
                                                cout<<"                             DAFTAR NASABAH BANK                        "<<endl;
cout<<"|====|=================|==============|==============|=================|"<<endl;
cout<<"| No |   No Rekening   |     Nama     |    Alamat    |   Total Saldo   |"<<endl;
cout<<"|====|=================|==============|==============|=================|"<<endl;
                                                for(i=0; i<n; i++)
                                                {
                                                                cout<<setw(4)<<i+1;;
                                                                cout<<setw(16)<<nas[i].norek;
                                                                cout<<setw(13)<<nas[i].nama;
                                                                cout<<setw(16)<<nas[i].alamat;
                                                                cout<<setw(18)<<((nas[i].saldo)+(nas[i].saldo*0.1))<<endl;
                                                }
cout<<"|====|=================|==============|==============|=================|"<<endl;
                cout<<endl;
                cout<<" Jumlah Total Saldo Diatas Setelah Ditambah Bunga 10%"<<endl<<endl;
                cout<<" Masukan Sembarang Angka Untuk Kembali Ke Menu Utama : "; cin>>x;
                                                goto menu;
                                }
                                else if(pil==5)
                                {
                                                cout<<endl;
                                cout<<"======================================================"<<endl;
                                                cout<<" Masukan Nomer Rekening Yang Akan Dicari : "; cin>>no;
                                                cout<<endl;
                                                for(i=0; i<n; i++)
                                                {
                                                                if(no==(nas[i].norek))
                                                                {
                                                                                pos=i;
                                                                                ketemu=true;
                                                                                break;
                                                                }
                                                                else
                                                                ketemu=false;
                                                }
                                                if(ketemu)
                                                {
                                                                cout<<" Nomer Rekening            : "<<nas[pos].norek<<endl;
                                                                cout<<" Nama Nasabah              : "<<nas[pos].nama<<endl;
                                                                cout<<" Alamat                    : "<<nas[pos].alamat<<endl;
                                                                cout<<" Saldo                     : Rp."<<nas[pos].saldo<<endl;
                cout<<"Total  Saldo Setelah Bunga : Rp."<<((nas[i].saldo)+(nas[i].saldo*0.1))<<endl<<endl;
                                                }
                                                else
                                cout<<" Nomer Rekening Tidak Ditemukan"<<endl<<endl;
                                cout<<" Masukan Sembarang Angka Untuk Kembali Ke Menu Utama : "; cin>>x;
                                                goto menu;
                                }
                                else
                                {
                                                cout<<endl<<" Terima Kasih Telah Bertransaksi Disini......"<<endl<<endl;
                                }
                return 0;
}
