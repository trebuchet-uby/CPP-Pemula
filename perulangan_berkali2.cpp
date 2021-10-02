#include <iostream>
using namespace std;
int main (){
int x;
int y;
int z;

cout << "Banyaknya Perulangan: ";
cin >> x;

while (x <= 5) {
    int y=1 ;
    while (y <= x) {
       cout <<y*x<< ' ';
        y++;
    }
        cout << '\n';
        x++;
    }
    return 0;
}
