#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;
main(){

int a[3][5];
for(int i=0;i<3;i++){
    for (int j=0;j<5;j++){
        printf("%x ",&a[j][i]);
    }
    printf("\n");
}
getch();
}


