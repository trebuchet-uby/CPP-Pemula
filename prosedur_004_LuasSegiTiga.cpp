#include <iostream>
using namespace std;

void LuasSegitiga(int z, int y)
{
int x;
    x=(z*y)/2;
    cout << "Luas Segitiga\t: "<<x<<endl;

}

int main()
{
int alas,tinggi;
    cout<<"MENGHITUNG LUAS SEGITIGA"<<endl;
    cout<<"Masukkan datanya:"<<endl<<endl;
    cout<<"Alas Segitiga\t: ";
    cin>>alas;
    cout<<"Tinggi Segitiga\t: ";
    cin>>tinggi;
    LuasSegitiga(alas,tinggi);

}
