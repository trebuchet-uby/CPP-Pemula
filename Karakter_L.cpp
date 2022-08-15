////MEMBUAT HURUF L

#include <iostream>
using namespace std;

int main()
{
	for(int y=1; y<=5; y++) //baris
	{
		for(int x=1; x<=5; x++) //kolom
		{
		if(y==5||x==1)
		cout<<"*";
		else cout<<" "; //karakter spasi
		}
		cout<<endl;
	}
}
