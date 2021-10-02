#include<stdio.h>

int main(){
    printf("Halo, ini adalah teks output header stdio.h printf\n");
    printf("Nama Saya %s\n","LATIHAN");//%s = string
    printf("Usia Saya %d\n", 35); //%d / %i = desimal / integer
    printf("Golongan Darah %c\n", 'O'); //%c = kacakter

    //fungsi "puts" tidak memerlukan format
    puts("Halo Dunia");
    puts("Nama Saya Andhi Prasetyo");

    //untuk menampilkan karakter
    putchar('Z');

    return 0;
}
