#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
    string nama [10];
    string nim [10];
    string prodi [10];
    string ipk [10];
    int y;
    int x=y+1;

    cout<<"Inputkan Data Mahasiswa: "<<endl;
    for (y=0;y<10;y++)
    {
        cout <<"Nama Mahasiswa Ke-"<<y+1<<" : ";
        cin>>nama[y];

        cout <<"NIM Mahasiswa Ke-"<<y+1<<" : ";
        cin>>nim[y];

        cout <<"PRODI Mahasiswa Ke-"<<y+1<<" : ";
        cin>>prodi[y];

        cout <<"IPK Mahasiswa Ke-"<<y+1<<" : ";
        cin>>prodi[y];

    }

    cout<<"+++++++++++++++++++++++++++++"<<endl;
    cout<< "Data Berapa yang ingin ditampilkan:";
    cin>> x;




}
