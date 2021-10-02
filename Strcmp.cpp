#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>

main() {
char sa[]="Andhi Boyolali";
char sb[]="Universitas Boyolali";
char sc[]="Andhi Mahasiswa Universitas Boyolali";

/*Melakukan perbandingan terhadap dua string dan penampilan
nilainya*/

printf("Nilai Yang dibandingkan sa,sb : %d\n",strcmp(sa,sb));
printf("Nilai Yang dibandingkan sa,sc : %d\n",strcmp(sa,sc));
printf("Nilai Yang dibandingkan sb,sa : %d\n",strcmp(sb,sa));

getch();
return 0;
}
