#include<iostream>
using namespace std;

void HitungLuasSegitiga (float a, float t);
main()
{
    int i, N;
    float a, t;
    cout<<"Banyaknya segitiga? "; cin>>N;
    for (i=1;i<=N;i++)
    {
        cout<<"\nPanjang alas segitiga?\t: "; cin>>a;
        cout<<"Tinggi segitiga?\t: ";cin>>t;
        HitungLuasSegitiga(a,t);
    }
}

void HitungLuasSegitiga(float alas, float tinggi)
{
    float luas;
    luas = (alas * tinggi)/2.0;
    cout<<"Luas segitiga\t\t: "<<luas<<endl<<endl;
}
