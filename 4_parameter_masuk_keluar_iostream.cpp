#include <iostream>
using namespace std;

void Tukar (int *X, int *Y);
main ()
{
    int X, Y, Z;
    cout<<"X = ? \t: "; cin>>X;
    cout<<"Y = ? \t: "; cin>>Y;
    if (X<Y)
    Tukar (&X, &Y);
    Z = X - Y;
    cout<<"\nZ \t= "<<Z<<endl<<endl;
}

void Tukar (int *A, int *B)
{
    int temp;
    temp = *A;
    *A = *B;
    *B = temp;
}
