#include<stdio.h>

void HitungLuasSegitiga (float a, float t);
main()
{
    int i, N;
    float a, t;
    printf ("Banyaknya segitiga? "); scanf("%f",&N);
    for (i=1;i<N;i++)
    {
        printf("\nPanjang alas segitiga? "); scanf("%f",&a);
        printf("Tinggi segitiga? ");scanf("%f", &t);
        HitungLuasSegitiga(a,t);
    }
}

void HitungLuasSegitiga(float alas, float tinggi)
{
    float luas;
    luas = (alas * tinggi)/2.0;
    printf("Luas segitiga = %f\n",luas);
}
