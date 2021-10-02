#include <iostream>
using namespace std;

void HitungLuasSegitiga (float a, float t, float *L);
main()
{
    int i, N;
    float a, t;
    float L;
    cout<<"Banyaknya segitiga? "; cin>>N;
    for (i=1;i<=N;i++)
    {
        cout<<"\nPanjang alas segitiga?\t: "; cin>>a;
        cout<<"Tinggi segitiga?\t: "; cin>>t;
        HitungLuasSegitiga (a,t,&L);
        cout<<"Luas segitiga\t\t: "<<L<<endl<<endl;
    }
}

void HitungLuasSegitiga (float alas, float tinggi, float *luas)
{
    *luas = (alas*tinggi)/2.0;
}
