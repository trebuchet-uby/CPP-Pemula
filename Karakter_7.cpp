////MEMBUAT ANGKA 7

#include <iostream>
using namespace std;

int main()
{
	for(int y=1; y<=5; y++) //baris
	{
		for(int x=1; x<=5; x++) //kolom
		{
		if(y==1||(y==2&&x>=4&&x<=4)||(y==3&&x>=3&&x<=3)||(y==4&&x<=2&&x>=2)||(y==5&&x>=1&&x<=1))
		cout<<"*";
		else cout<<" "; //karakter spasi
		}
		cout<<endl;
	}
}
