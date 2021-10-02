#include <stdio.h>
#include <conio.h>

int main()
{
    int r;              // r = jari-jari lingkaran
    float Kll, phi;     // kll = keliling

    phi = 3.1428;
    Kll = 2 * phi * r;

    printf  ("Menghitung Keliling Lingkaran\n");
    printf  ("Masukkan jumlah jari-jari : ");

    scanf   ("%i", r);

    printf  ("Nilai keliling lingkarannya adalah: ");

    return 0;

}
