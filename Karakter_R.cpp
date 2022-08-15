////MEMBUAT HURUF R

#include <iostream>
using namespace std;
int main()
{
	for(int y=1; y<=5; y++) //baris
	{
		for(int x=1; x<=5; x++) //kolom
		{
		if(y==3||y==1||x==1||x==5&&y<=3||y==x&&y>3) cout<<"*";
		else cout<<" "; //karakter spasi
		}
		cout<<endl;
	}
}
