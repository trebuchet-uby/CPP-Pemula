#include <iostream>
using namespace std;

int main()
{

float cm, m, km;

km  = cm/100000;
m   = cm/100;

cout    << "Konversi dari cm ke meter dan kilometer \n";
cout    << "Masukkan nilai dalam sentimeter / cm : ";

cin     >> cm;

cout    << "Nilai tersebut dalam meter / m: " << m << endl;
cout    << "Nilai tersebut dalam kilometer / km: "  << km ;

}
