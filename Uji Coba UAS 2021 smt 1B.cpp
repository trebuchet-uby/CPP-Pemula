//  --------------------------------------------------------------------------------
//  PROGRAM DAFTAR NILAI MATA KULIAH C++
//  --------------------------------------------------------------------------------

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
int main()

float awal ()
    {
          cout<<" --------------------------------------------------------------- "<<endl;
          cout<<"                 PROGRAM DAFTAR NILAI MATA KULIAH C++       "<<endl;
          cout<<" --------------------------------------------------------------- "<<endl;
    }
float tampilan ()
    {
          cout<<" --------------------------------------------------------------- "<<endl;
          cout<<"                        DAFTAR NILAI "<<endl;
          cout<<"                    MATERI : PEMOGRAMAN C++ "<<endl;
          cout<<" --------------------------------------------------------------- "<<endl;
          cout<<" No.   Nama                         Nilai               Grade "<<endl;
          cout<<"       Mahasiswa       ------------------------------"<<endl;
          cout<<"                        Tugas    UTS    UAS    Akhir  "<<endl;
          cout<<" --------------------------------------------------------------- "<<endl;
    }
float terakhir ()
    {
          cout<<" --------------------------------------------------------------- "<<endl;
    }


int main(int argc, char *argv[])
{
    int i;
    int jum;
    char ulang ;
    char nama_mahasiswa [50][100];
    float nilai_tugas   [10];
    float nilai_uts     [10];
    float nilai_uas     [10];
    float nilai_akhir   [10];
    string strupr;

    do
    {
        awal ();        // digunakan untuk memanggil program awal
        cout<<" Masukkan Jumlah mahasiswa = ";cin>>jum;
        cout<<endl;
        terakhir ();     // digunakan untuk memanggil program terakhir

        for (i=1;i<=jum;i++)
        {
            cout<<" Mahasiswa ke - "<<i<<endl;
            cout<<" Nama Mahasiswa  = ";cin>>nama_mahasiswa [i];
            cout<<" Nilai Tugas     = ";cin>>nilai_tugas [i];
            cout<<" Nilai UTS       = ";cin>>nilai_uts [i];
            cout<<" Nilai UAS       = ";cin>>nilai_uas [i];
            nilai_akhir [i]=(nilai_tugas[i]*0.3)+(nilai_uts[i]*0.3)+(nilai_uas[i]*0.4);
            strupr (nama_mahasiswa[i]);
            cout<<endl;
        }
        cout<<endl;
        tampilan ();   // digunakan untuk memanggil program tampilan

        for (i=1;i<=jum;i++)
        {
            cout<<setiosflags (ios::left)<<" "<<setw (5)<<i;
            cout<<setiosflags (ios::left)<<" "<<setw (17)<<nama_mahasiswa[i];
            cout<<setiosflags (ios::left)<<" "<<setw (8)<<nilai_tugas [i];
            cout<<setiosflags (ios::left)<<" "<<setw (5)<<nilai_uts [i];
            cout<<setiosflags (ios::left)<<" "<<setw (7)<<nilai_uas [i];
            cout<<setiosflags (ios::left)<<" "<<setw (6)<<nilai_akhir [i];

            if (nilai_akhir[i]>=80)
               cout<<setprecision (4)  <<"   "<<" A ";
            else if (nilai_akhir[i]>=70)
                 cout<<setprecision (4)<<"   "<<" B ";
            else if (nilai_akhir[i]>=59)
                 cout<<setprecision (4)<<"   "<<" C ";
            else if (nilai_akhir[i]>=50)
                 cout<<setprecision (4)<<"   "<<" D ";
            else if (nilai_akhir[i]<50)
                 cout<<setprecision (4)<<"   "<<" E ";

            cout<<endl;
        }
        cout<<" --------------------------------------------------------------- "<<endl;
        cout<<endl;
        cout<<" Ulang Kembali ( Y/T )? ";       //pilihan perulangan
        cin>>ulang;
        system ("cls");       // digunakan untuk menghapus program yang ada di atasnya
    }
        while ((ulang=='Y')||(ulang=='y'));

        cout<<endl<<endl;

    // system("PAUSE");
    // return EXIT_SUCCESS;
}
