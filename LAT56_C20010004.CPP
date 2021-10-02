#include <iostream>
using namespace std;

int main()
{
    int var = 2;
    int *pVar = &var;
    cout<<"var = "<<var<<endl;
    cout<<"pVar = "<<*pVar<<endl;
    cout<<"====="<<endl<<endl;

    *pVar= 109;
    cout<<"var = "<<var<<endl;
    cout<<"pVar = "<<*pVar<<endl;

    return 0;
}
