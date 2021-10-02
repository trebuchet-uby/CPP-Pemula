#include <iostream>
using namespace std;
int main ()
{
float C_C20010004;
float F_C20010004;
float K_C20010004;

cout << "Konversi Suhu dari Celcius ke Fahrenheit dan Kelvin \n";
cout << "\n";
cout << "Masukan suhu dalam Celcius: ";

cin >> C_C20010004;
F_C20010004 = C_C20010004 * 9 / 5 + 32;
K_C20010004 = C_C20010004 + 273;

cout << endl;
cout << "=================================";
cout << endl;
cout << endl;
cout << "Jadi, nilai suhu dalam Fahrenheit adalah: " << F_C20010004;
cout << endl;
cout << "Dan nilai suhu dalam Kelvin adalah: " << K_C20010004;
cout << endl;

}
