//Program Konversi Reamur ke Celcius
#include <iostream>
using namespace std;
int main()
{
    float Reamur;
    float Celcius;
    cout << "Konversi REAMUR ke CELCIUS" << endl;
    cout << "========================" << endl << endl;
    cout << "Masukkan Suhu Reamur: ";
    cin >> Reamur; cout << endl;
    Celcius = (Reamur*5)/4; // R = 4/5 C
    cout << "Jadi suhu dalam Celcius adalah: ";
    cout << Celcius; cout << " Derajat Celcius" << endl;
    return 0;
}
