
#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
    string nama [5];
    string hobi [5];
    int y;
    cout<<"Masukkan namanya: "<<endl;
    for (y=0;y<5;y++)
    {
        cout <<"Masukan nama ke "<<y<<" : ";
        cin>>nama[y];

        cout <<"Masukan hobi data ke"<<y<<" : ";
        cin>>hobi[y];
    }

    cout<<"+++++++++++++++++++++++++++++"<<endl;
    cout<<"Panggil data indeks data ke 3 : "<<nama[3]<<endl;
    cout<<"Hobinya : "<<hobi[3]<<endl;
}
