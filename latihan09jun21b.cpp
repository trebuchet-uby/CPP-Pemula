#include<iostream>
using namespace std;

//prosedurnya
void lps (int pj, int lb)
{
    float luas;
    luas = pj * lb;
    cout << "Nilai Luas Persegi adalah "<<luas<<endl;
}

void klps(int pj, int lbb)
{
    float kll;
    kll=2*(pj+lbb);
    cout << "Nilai keliling persegi adalah " <<kll<<endl;
}

int main()
{
    int p, l;
    cout << "Masukkan nilai panjangnya "; cin>>p;
    cout << "Masukkan nilai lebarnya "; ci>>l;
    lps(p,l);
    klps(p,l);
}
