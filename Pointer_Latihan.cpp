#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	char nama [5];

	cout<<"Inputkan 5 elelemen nama anda: "<<endl<<endl;
        for (int i = 0; i < 5; i++){
            cout<<"Input Elemen ";
            cout<<"["<<i<<"]"<<" : ";
            cin>> nama[i];
            cout<<endl;
        }

	cout<<"Elemen yang telah dimasukkan akan terbaca sebagai berikut: "<<endl;
	char*elemen;
	elemen=&nama[0]; 	cout<<*elemen<<" ";
	elemen=&nama[1];	cout<<*elemen<<" ";
	elemen=&nama[2];	cout<<*elemen<<" ";
	elemen=&nama[3];	cout<<*elemen<<" ";
	elemen=&nama[4];	cout<<*elemen<<" ";
	cout<<endl;
	return 0;
}
