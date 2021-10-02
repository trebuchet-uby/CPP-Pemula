#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
    char X[5];
    int y;
    cout<<"Mengisikan data huruf ke indeks array X"<<endl;
    cout<<"======================================="<<endl;
    for (y=0;y<5;y++)
    {
        cout<<"Masukan huruf untuk Indeks Ke ["<<y<<"] :";
        cin>>X[y];
    }
    cout<<endl<<endl;
    cout<<"Menampilkan Data yang telah di inputkan "<<endl;
    cout<<"======================================="<<endl;
    for (y=0;y<5;y++)
    {
        cout<<"Nilai X["<<y<<"]: "<<X[y]<<endl;

    }
    cout<<endl<<endl;
    cout<<"Menampilkan Data dengan urutan terbalik "<<endl;
    cout<<"======================================="<<endl;
    for (y=4;y>=0;y--)
    {
        cout<<"Nilai X["<<y<<"]: "<<X[y]<<endl;

    }
    getch();

    cout<<"======================================="<<endl;
    cout<<"Nilai X["<<3<<"]: "<<X[3]<<endl;

    return 0;
}
