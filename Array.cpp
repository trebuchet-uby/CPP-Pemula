#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
using namespace std;

int main(){

int bil [5];

cout<<"Masukkan 5 bilangan genap : "<<endl;
for (int i = 0; i < 5; i++){
    cout<<"Bilangan "; cout<< i + 1 <<" : "; cin>> bil[i]; cout<<endl;
    }

cout<<endl;
cout<<"5 bilangan genap yang dimasukkan" <<endl;

for (int i = 0; i < 5; i++) cout<<" "<<bil[i];

getch();
}
