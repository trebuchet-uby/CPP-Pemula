#include <iostream>
#include <conio.h>
#include <string>

using namespace std;
int main()
{
 string pin;
 char salahpin;
 char ulang='Y';
 do
 {
  int();
  cout<<"\t________________________________________\n"<<endl;
  cout<<"================SELAMAT DATANG DI BANK SABBIHISMA================="<<endl;
   cout<<"===================YOGA FIRZA SABBIHISMA================="<<endl;
   cout<<"======================1700018253================="<<endl;
  cout<<"\t________________________________________\n"<<endl;;
        cout<<"Masukkan PIN Anda "<<endl;
   cout<<"Salah 3x Pin Anda Terblokir "<<endl<<endl<<endl;
   cout<<"SILAHKAN MASUKKAN PIN : ";cin>>pin;
  if(pin!="1700018253")
  {
   cout<<endl;
            cout<<"PIN yang anda masukkan salah\n";
            cout<<"SILAHKAN MASUKKAN PIN [Y/N] : ";cin>>ulang;
   salahpin='3';
            getch();
   }
   else
   {
    int saldo=5000000;
    char ulang='Y';
    int pilihan = ulang;
    int nabung=0;
    int tarik=0;

    do
    {
     nabung=0;
     tarik =0;
     salahpin='0';
     int();
     cout<<"\t________________________________________\n"<<endl;
     cout<<"================SELAMAT DATANG DI BANK SABBIHISMA================="<<endl;
     cout<<"====================YOGA FIRZA SABBIHISMA================="<<endl;
     cout<<"==========================1700018253================="<<endl;
     cout<<"\t________________________________________\n"<<endl;
     cout<<"\t________________________________________\n"<<endl;
     cout<<"\t<-1 Menabung             INFO SALDO 3->"<<endl<<endl;
     cout<<"\t<-2 Penarikan               Keluar 4->"<<endl<<endl;
     cout<<"\t________________________________________"<<endl<<endl;
     cout<<endl;
     cout<<"     Pilihan : ";cin>>pilihan;
     cout<<endl;
     switch (pilihan)
     {
      case 1:
       {
        int();
        cout<<"================SELAMAT DATANG DI BANK SABBIHISMA================="<<endl;
        cout<<"====================YOGA FIRZA SABBIHISMA================="<<endl;
        cout<<"=======================1700018253================="<<endl;
        cout<<"\t________________________________________\n"<<endl;
        cout<<"   Masukkan Nominal Nabung : ";cin>>nabung;
        int h();
        saldo+=nabung;
        cout<<"   Sisa Saldo Anda Rp "<<saldo<<endl;
        cout<<"\n========TERIMA KASIH TELAH BERTRANSAKSI DI BANK SABBIHISMA========="<<endl;
        cout<<"====================YOGA FIRZA SABBIHISMA================="<<endl;
        cout<<"=======================1700018253================="<<endl;
        cout<<"\t________________________________________\n"<<endl;
        cout<<"   Ada Transaksi Lain [Y/N] : ";cin>>ulang;
        break;
        }
        case 2:
         {
          int();
          cout<<"================SELAMAT DATANG DI BANK SABBIHISMA================="<<endl;
           cout<<"====================YOGA FIRZA SABBIHISMA================="<<endl;
           cout<<"=======================1700018253================="<<endl;
            cout<<"\t________________________________________\n"<<endl;
            cout<<"   Masukkan Nominal Penarikan : ";cin>>tarik;
            cout<<endl;
            if(saldo < 50000)
            {
            cout<<"   Saldo tidak mencukupi untuk melakukan penarikan"<<endl<<endl;
            cout<<"   Ada Transaksi Lain [Y/N] : ";cin>>ulang;
            }
             else if(tarik>saldo)
             {
              cout<<"   Saldo anda tidak mencukupi"<<endl<<endl;
               cout<<"   Sisa Saldo Anda Rp "<<saldo<<endl;
               cout<<"   Ada Transaksi Lain [Y/N] : ";cin>>ulang;
                }
                else if((saldo-tarik)<10000)
                {
                cout<<"   Jumlah penarikan tidak bisa dilakukan"<<endl<<endl;
                cout<<"   Saldo anda tidak mencukupi "<<saldo<<endl;
                cout<<"   Ada Transaksi Lain [Y/N] : ";cin>>ulang;
                 break;
                 }
                 else if((tarik % 50000) != 0 )
                 {
                  cout<<"   Jumlah penarikan tidak bisa dilakukan "<<endl<<endl;
                  cout<<"   Keliptan Rp 50.000,- atau Rp 100.000,-"<<endl<<endl;
                  cout<<"   Ada Transaksi Lain [Y/N] : ";cin>>ulang;
                  }
                  else if(tarik >5000000 )
                  {
                   cout<<"   Jumlah penarikan tidak bisa dilakukan maksimum Rp 5.000.000,- /hari"<<endl<<endl;
                   cout<<"   Ada Transaksi Lain [Y/N] : ";cin>>ulang;
                   }
                   else
                   {
                    cout<<"   Proses Penarikan Berhasil "<<endl;
                    saldo-=tarik;
                    cout<<"   Sisa Saldo Anda Rp "<<saldo<<endl;
                    cout<<"\n========TERIMA KASIH TELAH BERTRANSAKSI DI BANK SABBIHISMA========="<<endl;
                    cout<<"=======================1700018253================="<<endl;
                    cout<<"\t________________________________________\n";
                    cout<<"   Ada Transaksi Lain [Y/N] : ";cin>>ulang;
                    }
                    break;
                    }
                     case 3:
                      {
                       int();
                       cout<<"================SELAMAT DATANG DI BANK SABBIHISMA================="<<endl;
                       cout<<"====================YOGA FIRZA SABBIHISMA================="<<endl;
                       cout<<"=======================1700018253================="<<endl;
                       cout<<"\t________________________________________\n"<<endl;
                       cout<<"   Jumlah Saldo Akhir Rp "<<saldo<<endl<<endl;
                       cout<<"\n========TERIMA KASIH TELAH BERTRANSAKSI DI BANK SABBIHISMA========="<<endl;
                       cout<<"=======================1700018253================="<<endl;
                       cout<<"\t________________________________________\n"<<endl;
                       cout<<"   Ada Transaksi Lain [Y/N] : ";cin>>ulang;
                       break;
                       }
                       case 4:
                        {
                         ulang = 'n';
                         break;
                         }
                         default :
                          {
                           int();
                           cout<<"   Pilihan tidak ada"<<endl<<endl;
                           cout<<"   Ada Transaksi Lain [Y/N] : ";cin>>ulang;
                           break;
                           }
                           }
                           cout<<ulang<<endl<<salahpin;
                           getch();
                           if(ulang == 'N') ulang= 'n';
                           }while ((ulang!='n')) ;
                           }
                           }while(salahpin!='0');

                           }
