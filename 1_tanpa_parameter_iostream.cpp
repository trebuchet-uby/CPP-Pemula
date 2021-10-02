#include<iostream>
using namespace std;
void HitungLuasSegitiga ();

main()
{
    int i, N;
    cout<<"Banyaknya segitiga? "; cin>>N;
    for (i=1;i<=N;i++);
        HitungLuasSegitiga();
}


void HitungLuasSegitiga()
{
    float alas;
    float tinggi;
    float luas;
    cout<<"\nPanjang alas segitiga?\t: "; cin>>alas;
    cout<<"Tinggi segitiga?\t: "; cin>>tinggi;
    luas = (alas * tinggi)/2.0;
    cout<<"Luas segitiga\t\t: "<<luas;
    cout<<endl<<endl;
}
