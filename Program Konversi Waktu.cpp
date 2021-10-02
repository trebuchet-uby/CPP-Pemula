#include <iostream>

using namespace std ;

int main (){
    //Operasi Konversi Waktu
    cout<<"                      Iman Nurohman"<<endl;
    cout<<"                         X RPL 1"<<endl ;
    //Pendeklarasian
    int jam,menit,detik,total;
    //Proses Program
    cout<<"masukan jumlah jam   :";
    cin>>jam;
    cout<<"masukan jumlah menit :";
    cin>>menit;
    cout<<"masukan jumlah detik :";
    cin>>detik;
    total=(jam*3600)+(menit*60)+detik ;
    cout<<endl;
    cout<<"Banyaknya detik :"<<total<<" detik";


}
