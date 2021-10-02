#include <iostream>
using namespace std;

int main()
{
    int var = 2;
    int *pVar = &var;
    cout<<sizeof(pVar)<<endl;

    return 0;
}
