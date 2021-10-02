#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>

using namespace std;

int main(){

char str [100]="Andhi Prasetyo";
char karakter='A';
char *hasil;

hasil=strchr(str,karakter);

printf("Hasil Peubah:%s\n",hasil);
printf("Karakter %c ditemukan pada indeks ke-%d",karakter,(hasil- str));

getch();
return 0;
}
