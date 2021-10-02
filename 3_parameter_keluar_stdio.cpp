#include <stdio.h>

void HitungLuasSegitiga (float a, float t, float *L);
main()
{
    int i, N;
    float a, t;
    float L;
    printf ("Banyaknya segitiga? "); scanf("%d",&N);
    for (i=1;i<=N;i++)
    {
        printf("\nPanjang alas segitiga? "); scanf("%f",&a);
        printf("Tinggi segitiga? "); scanf("%f",&t);
        HitungLuasSegitiga (a,t,&L);
        printf("Luas segitia = %5.2f", &L);
    }
}

void HitungLuasSegitiga (float alas, float tinggi, float *luas)
{
    *luas = (alas*tinggi)/2.0;
}
