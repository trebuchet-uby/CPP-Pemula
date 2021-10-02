#include <iostream>
using namespace std;
int main ()

{
int x, y, z;
cout << "Banyaknya Perulangan: ";
cin >> x;

for (y=1; y<=x; y++){
    for (z=1; z<=y; z++){
        cout << y << ' ';
        }
    cout << endl;
    }
    return 0;
}


