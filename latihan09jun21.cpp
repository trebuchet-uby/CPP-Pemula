#include<iostream>
using namespace std;

//prosedurnya

void HLS()
{
    int a, t;
    cout<<"Masukkan nilai alasnya "; cin>>a;
    cout<<"Masukkan nilai tingginya "; cin>>t;
    float luas;
    luas = 0.5 * a * t;
    cout<<"Nilai luas segitiganya adalah "<<luas<<endl;
}

int main()
{
    HLS();
}
