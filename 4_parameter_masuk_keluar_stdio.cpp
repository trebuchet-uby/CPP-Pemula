#include <stdio.h>

void Tukar (int *X, int *Y);
main ()
{
    int X, Y, Z;
    printf("X = ? \t: "); scanf("%d", &X);
    printf("Y = ? \t: "); scanf("%d", &Y);
    if (X<Y)
    Tukar (&X, &Y);
    Z = X - Y;
    printf("\nZ \t= %d",Z);
}

void Tukar (int *A, int *B)
{
    int temp;
    temp = *A;
    *A = *B;
    *B = temp;
}
