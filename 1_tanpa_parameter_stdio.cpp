#include<stdio.h>

void HitungLuasSegitiga ();
main()
{
    int i, N;
    printf ("Banyaknya segitiga? "); scanf("%f",&N);
    for (i=1;i<=N;i++)
        HitungLuasSegitiga();
}

void HitungLuasSegitiga()
{
    float alas;
    float tinggi;
    float luas;
    printf("\nPanjang alas segitiga? "); scanf("%f",&alas);
    printf("Tinggi segitiga? ");scanf("%f", &tinggi);
    luas = (alas * tinggi)/2.0;
    printf("Luas segitiga = %f\n",luas);
}
