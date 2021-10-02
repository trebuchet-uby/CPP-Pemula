#include <stdio.h>
int main()
{
    int x, Nilai;
    x = 5;
    Nilai = ++x;
    printf("Nilai = %d, x = %d\n", Nilai, x);
    Nilai = x++;
    printf("Nilai = %d, x = %d\n", Nilai, x);
}
