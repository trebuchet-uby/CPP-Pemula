#include <iostream>
#include <conio.h>
using namespace std;

int main(){

    int belanja, diskon, bayar;
    cout << "PROGRAM HITUNG BESARNYA DISKON\n"<<endl;
    cout << "Masukkan jumlah belanja : ";
    cin >> belanja;


    if (belanja > 100000){
        diskon = belanja * 20 / 100;
        bayar = belanja - diskon;
        cout << "Diskon anda : " << diskon << " rupiah" << endl ;
        cout << "Tagihan anda : " << bayar << " rupiah" << endl ;
    } else if (belanja >= 50000 && belanja <= 100000){
        diskon = belanja * 15 / 100;
        bayar = belanja - diskon;
        cout << "Diskon anda : " << diskon << " rupiah" << endl ;
        cout << "Tagihan anda : " << bayar << " rupiah" << endl ;
    } else if (belanja > 20000 && belanja){
        diskon = belanja * 10 / 100;
        bayar = belanja - diskon;
        cout << "Diskon anda : " << diskon << " rupiah" << endl ;
        cout << "Tagihan anda : " << bayar << " rupiah" << endl ;
    } else if (belanja <= 0){
        cout << "Anda didenda karena tidak belanja hahahaha" <<endl;
    }else {
        cout << "Maaf anda tidak mendapatkan diskon"<<endl;
        cout << "Tagihan anda : " << belanja << " rupiah" << endl ;
    }
    getch();
    return 0;
}
