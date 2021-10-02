#include <iostream>
#include <conio.h>
using namespace std;

int main(){
int a,b;
for (a=10; a>=1; a--){
for (b=1; b<=a; b++)
    cout << "@" << " ";
    cout << endl;
}
getch();
}
