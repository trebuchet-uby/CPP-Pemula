#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
using namespace std;
main(){

char asal[100]; char hasil[100];
cout<<"Masukan kalimat : ";
gets(asal);

strcpy(hasil,asal);
cout<<endl;
cout<<"Kalimat asal : "<<asal<<endl;
cout<<"Kalimat hasil : "<<hasil<<endl;

getch();
}
