#include <iostream>
using namespace std;

void HitungLuasSegitiga(int i, int N)
{
    cout<<"Banyaknya segitiga?\t: ";
    cin>>N;
    for(i=1;i<=N;i++);

}

int main()
{
    float alas;
    float tinggi;
    float luas;
    cout<<"\nPanjang alas segitiga?\t: ";
    cin>>alas;
    cout<<"\nTinggi segitiga?\t: ";
    cin>>tinggi;
    luas=(alas*tinggi)/2.0;
    cout<<"Luas segitiga\t\t: "<<luas<<endl;
}
