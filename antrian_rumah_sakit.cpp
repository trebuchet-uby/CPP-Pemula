#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <windows.h>
#include <sstream>
#include <ctime>
#define MAX 100
#include <stdio.h>

using namespace std;

void gotoxy (int x, int y){
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

struct antri{
    int kepala, ekor, n[MAX];
}antri;

//DEKLARASI NODE PERTAMA
struct Node{
    int code;
    int usia;
    string nama;
    string alamat;
    char jenkel;
    string kelas;
    Node* link;
}*depan = NULL, *belakang = NULL;

//DEKLARASI NODE KEDUA
struct Node1{
    int code1;
    int kode1;
    string layanan;
    Node1* link1;
}*depan1 = NULL, *belakang1 = NULL;

//FUNGSI CEK UNTUK NODE PERTAMA APAKAH TERDAPAT DATA DALAM NODE KE 1
bool isempty(){
    if(depan == NULL && belakang == NULL){
        return true;
    }
    else{
        return false;
    }
}

//FUNGSI CEK UNTUK NODE KEDUA APAKAH TERDAPAT DATA DALAM NODE KE 2
bool isempty1(){
    if(depan1 == NULL && belakang1 == NULL){
        return true;
    }
    else{
        return false;
    }
}

//FUNGSI ENQUEUE MEMASUKKAN DATA NODE PERTAMA
void tambah(Node** depan_ref, int code, string nama, string alamat,int usia,char jenkel,string kelas){
    Node* p = new Node();
    p->code = code;
    p->nama = nama;
    p->alamat = alamat;
    p->usia=usia;
    p->jenkel=jenkel;
    p->kelas=kelas;

    p->link = (*depan_ref);

    if(depan == NULL){
        depan = p;
        belakang = p;
    }

    else{
        belakang->link = p;
        belakang = p;
    }
}

//FUNGSI ENQUEUE MEMASUKKAN DATA NODE KEDUA
void tambah1(Node1** depan1_ref, int code1,int kode1,string layanan){
    Node1* p1 = new Node1();
    p1->code1 = code1;
    p1->kode1 =kode1;
    p1->layanan=layanan;
    p1->link1 = (*depan1_ref);

    if(depan1 == NULL){
        depan1 = p1;
        belakang1 = p1;
    }

    else{
        belakang1->link1 = p1;
        belakang1 = p1;
    }
}

//FUNGSI DEQUEUE MENGELUARKAN DATA NODE PERTAMA
void dequeue(){
    if(isempty()){
        gotoxy(60,37); cout << "BELUM ADA PENDAFTAR" << endl;
    }

    else{

        if(depan == belakang){
            free(depan);
            depan = belakang = NULL;
        }

        else{
            Node* p = depan;
            depan = depan->link;
            free(p);
        }
    }
}

//FUNGSI DEQUEUE MENGELUARKAN DATA NODE KEDUA
void dequeue1(){
    Node* p = depan;
    Node1* p1 = depan1;
    if(isempty()){
        gotoxy(60,37); cout << "BELUM ADA PENDAFTAR" << endl;
    }

    else{

        if(depan1 == belakang1){
            cout<< " ANTRIAN"<<endl;
            cout<< " NO ANTRIAN     : "    << p->code<<endl;
            cout<< " ATAS NAMA      : "    << p->nama << endl;
            cout<< " DENGAN LAYANAN   : "<< p1->layanan << endl;
            cout<< " ==================================="<<endl;
            free(depan1);
            depan1 = belakang1 = NULL;
        }

        else{
            Node1* p1 = depan1;
            cout<< " PANGGILAN ANTRIAN"<<endl;
            cout<< " NO ANTRIAN     : "    << p->code<<endl;
            cout<< " ATAS NAMA      : "    << p->nama << endl;
            cout<< " DENGAN LAYANAN   : "<< p1->layanan << endl;
            cout<< " ==================================="<<endl;
            depan1 = depan1->link1;
            free(p1);
        }
    }
}

//FUNGSI DISPLAY UNTUK MENAMPILKAN DATA
void kotak2();
void display(){

    if(isempty()){
        gotoxy(60,37);cout << "BELUM ADA PENDAFTAR" << endl;
    }

    else{

        Node* p = depan;
        Node1* p1 = depan1;
        system("cls");
        kotak2();
        gotoxy(0,7);
        while(p != NULL){
        cout<<"===================================="<<endl;
        cout<<" 1.NO            : "<<p->code<<endl;
        cout<<" 2.KODE          : "<<p1->kode1<<endl;
        cout<<" 3.NAMA          : "<<p->nama<<endl;
        cout<<" 4.UMUR          : "<<p->usia<<" Tahun"<<endl;
        cout<<" 5.JENIS KELAMIN : "<<p->jenkel<<endl;
        cout<<" 6.ALAMAT        : "<<p->alamat<<endl;
        cout<<" 7.PEMBAYARAN    : "<<p->kelas<<endl;
        cout<<"===================================="<<endl;
        cout<< "\n"<<endl;
        p = p->link;
        p1=p1->link1;
        }

    }
}


void waktu(){
    time_t now = time(0);
   char* dt = ctime(&now);
   cout<<" TIME : "<<dt<<endl;
}

//FUNGSI TAMPILAN KOTAK DENGAN KODE ASCII
void kotak(){

    gotoxy(1,1);
    cout << char( 201 );  //garis atas
    for ( int i = 0; i < 118; i++ ){
    cout << char( 205 );
    }cout << char( 187 ) << endl;



    for ( int j = 2; j <= 39; j++ ){ //garis samping kiri
      gotoxy( 1, j );
      cout << char( 186 ) << endl;
    }

    gotoxy(120,40);cout<<char(188);
    for ( int j = 2; j <= 39; j++ ){ //garis samping kanan
      gotoxy( 120, j );
      cout << char( 186 ) << endl;
    }

    gotoxy( 1, 40 );
    cout<<char(200);
    for ( int i = 0; i < 118; i++ ){  //garis bawah
      cout << char( 205 );
    }

    gotoxy( 1, 5 );
    cout<<char(204);
    for ( int i = 0; i < 118; i++ ){  //garis atas kedua
      cout << char( 205 );
    }cout<<char(185);

    gotoxy(40,3);cout<<"PROGRAM ANTRIAN RUMAH SAKIT MANTAPS DJIWA";

    gotoxy(2,4);waktu();

    gotoxy(88,4); cout<<"KOTA SAMARINDA KALIMANTAN TIMUR";


     gotoxy( 48, 5 );
   cout<<char(203);
    for ( int j = 6; j < 40; j++ ){  //garis tengah pertama
    gotoxy( 48, j );
      cout << char( 186 );
    }gotoxy(48,40);cout<<char(202);

      gotoxy( 1, 35 );
   cout<<char(204);
    for ( int i = 0; i < 46; i++ ){  //garis bawah nama kelompok
      cout << char( 205 );
    }cout<<char(185);

    gotoxy(3,36);cout<<"BY : ";
    gotoxy(3, 38); cout<<"- AGUNG";  gotoxy(15,38);cout<<"- HAIFA";
    gotoxy(3,39);cout<<"- FIDA";  gotoxy(15,39);cout<<"- NASYA";


      gotoxy( 52, 5 );
   cout<<char(203);
    for ( int j = 6; j < 40; j++ ){  //garis tengah kedua
    gotoxy( 52, j );
      cout << char( 186 );
    }gotoxy(52,40);cout<<char(202);

     gotoxy( 52, 35 );
   cout<<char(204);
    for ( int i = 0; i < 67; i++ ){  //garis bawah
      cout << char( 205 );
    }cout<<char(185);




    for ( int j = 6; j < 16; j++ ){  //aksen
    gotoxy( 50, j );
      cout<<char(176);
    }

    gotoxy(50,18);cout<<"R"; gotoxy(50,21);cout<<"S";
    gotoxy(50,24);cout<<"M"; gotoxy(50,28);cout<<"D";

       for ( int j = 30; j < 40; j++ ){  //aksen
    gotoxy( 50, j );
      cout<<char(176);
    }

}

void kotak2(){

    gotoxy(0,1);
    //garis atas
    for ( int i = 0; i < 48; i++ ){
    cout << char( 205 );
    }cout<<char(187);


    gotoxy( 0, 80 );
    for ( int i = 0; i < 48; i++ ){  //garis bawah
      cout << char( 205 );
    }cout<<char(188);

     gotoxy( 0, 5 );
    for ( int i = 0; i < 48; i++ ){  //garis atas kedua
      cout << char( 205 );
    }cout<<char(185);

    gotoxy(17,3);cout<<"DAFTAR ANTRIAN"<<endl;


    for ( int j = 2; j <80 ; j++ ){  //garis tengah pertama
    gotoxy( 48, j );
      cout << char( 186 );
    }

    gotoxy(48,5);
    cout<<char (185);

}
//FUNGSI MENCARI DATA NODE PERTAMA
bool cari(Node* kepala, int value){
    Node* cari = depan;
    while(cari != NULL){
        if(value == cari->code){

            gotoxy(54,9); cout<<"BERIKUT ADALAH DATA YANG COCOK";
            gotoxy(54,11); cout <<"KODE       : "<< cari->code<<endl;
            gotoxy(54,13); cout <<"NAMA       : " << cari->nama << endl;
            gotoxy(54,15); cout <<"PEMBAYARAN        : " << cari->kelas << endl;
            cari = cari->link;
            return true;
        }

        else{
            cari = cari->link;
        }
    }
}

//FUNGSI MENCARI DATA NODE KEDUA
bool cari1(Node1* kepala, int value){
    Node1* cari = depan1;
    while(cari != NULL){
        if(value == cari->code1){
            gotoxy(54,17); cout <<"KODE PEMBAYARAN   : "<< cari->kode1<<endl;
            return true;
        }

        else{
            cari = cari->link1;
        }
    }
}

string caps(string abjad){
    string ABJAD="";
    char hurufnya[abjad.length()];
    strcpy(hurufnya,abjad.c_str());
    for(int i=0;i<abjad.length();i++){
        hurufnya[i]=toupper(hurufnya[i]);
        ABJAD+=hurufnya[i];
    }
    return ABJAD;
}

int angka(){
    bool error1, error2;
    int numbah;
    string angka;
    stringstream toi;
    do{
        error1=false,error2=false;
        toi.str("");
        do{
            error1=false,error2=false;
            getline(cin,angka);
            if(angka.empty())
                error1=true;
            else{
                char number[angka.size()];
                strcpy(number,angka.c_str());
                for(char i:number) if(!isdigit(i)) error2 = true;
            }
            if(error1||error2){
                gotoxy(24,16);
                cout<<" ";
            }
            else{
                toi<<angka;
                toi>>numbah;
                break;
            }
        }while(true);
        if(numbah<=0){
            gotoxy(24,16);
            cout<<" ";

        }
        else return numbah;
    }while(true);
}

int carii(){
    bool error1, error2;
    int nambah;
    int numbah;
    string angka;
    stringstream toi;
    do{
        error1=false,error2=false;
        toi.str("");
        do{
            error1=false,error2=false;
            getline(cin,angka);
            if(angka.empty())
                error1=true;
            else{
                char number[angka.size()];
                strcpy(number,angka.c_str());
                for(char i:number) if(!isdigit(i)) error2 = true;
            }
            if(error1||error2){
                 gotoxy(79,6);
                cout<<" ";
            }
            else{
                toi<<angka;
                toi>>nambah;
                break;
            }
        }while(true);
        if(nambah<=0){
             gotoxy(79,6);
            cout<<" ";

        }
        else return numbah;
    }while(true);
}

string namaa(){
    std::string foo;

    bool valid;
    do {
        gotoxy(6,14); cout << "NAMA              : "; fflush(stdin);
        std::getline(std::cin, foo);

        valid = true;
        for (std::size_t i{}; i < foo.length() && valid; ++i) {
            if (!(std::isalpha(static_cast<unsigned char>(foo[i])) ||
                  std::isspace(static_cast<unsigned char>(foo[i]))))
                valid = false;
        }
    } while (!valid);
    return foo;
}

string alamata(){
    std::string foo;

    bool valid;
    do {
        gotoxy(6,15); cout << "ALAMAT           : "; fflush(stdin);
        std::getline(std::cin, foo);

        valid = true;
        for (std::size_t i{}; i < foo.length() && valid; ++i) {
            if (!(std::isalpha(static_cast<unsigned char>(foo[i])) ||
                  std::isspace(static_cast<unsigned char>(foo[i]))))
                valid = false;
        }
    } while (!valid);
    return foo;
}
int get_integer();

int main(){
    Node1* depan1 = NULL;
    Node* depan = NULL;
    Node* p = depan;

    string nama, alamat, kelas,layan,layan1,layan2,layan3;
    char jenkel;
    int code = 1,code1=1, value, choose, pilih, pilih1, ulang = 1,n;
    int usia, layanan,layanan1,layanan2,layanan3,kode1,milih;
    int z=45;

    while(ulang == 1){
        system("cls");
        kotak();

    gotoxy(6,6); cout << "1. PENDAFTARAN " << endl;
    gotoxy(6,7); cout << "2. ANTRIAN PENDAFTAR " << endl;
    gotoxy(6,8); cout << "3. PANGGIL ANTRIAN " <<endl;
    gotoxy(6,9); cout << "4. CARI KODE PENDAFTAR " << endl;
    gotoxy(6,10); cout<< "5. KELUAR " << endl;
        gotoxy(6,12); cout << "PILIHAN : "; cin >> choose;

        switch(choose){
            case 1:
                gotoxy(54,6);cout<<"NOMOR ANTRIAN ANDA : "<<code;
                    kotak();
                    nama=namaa();
                    alamat=alamata();

                    usia:
                    gotoxy(6,16); cout << "USIA          : "     ; usia=angka();

                    jenkel:

                        do{
                            gotoxy(6,17); cout << "JENIS jenkel L|P : ";jenkel=getch();
                            if(jenkel=='L'||jenkel=='P'||jenkel=='l'||jenkel=='p'){
                            jenkel=putchar(toupper(jenkel));
                            break;
                            }else{
                                gotoxy(60,39);
                                cout<<" ";
                                goto jenkel;
                            }
                        }while(true);

                    gotoxy(6,19); cout << "PILIH PEMBAYARAN : ";
                    gotoxy(6,20); cout << "[1]. BPJS";
                    gotoxy(6,21); cout << "[2]. NON BPJS";
                    bayar:
                    gotoxy(6,22); cout << "PILIHAN : "; cin >> pilih;
                    switch(pilih){
                        case 1:
                            kelas = "BPJS";
                            kode1=111;
                        break;

                        case 2:
                            kelas = "NON BPJS";
                            kode1=222;
                        break;

                        default:
                            cin.clear();
                            cin.ignore();
                            gotoxy(60,37); cout << "UNKNOWN INPUT, PLEASE TRY AGAIN!";
                            gotoxy(60,39); system("pause");
                            goto bayar;
                        break;
                    }

                    tambah(&depan, code, nama, alamat,usia,jenkel,kelas);


                    gotoxy(54,9);cout<<"MASUKKAN JUMLAH LAYANAN YANG INGIN DITUJU : ";cin>>n;
                    antri.n[antri.ekor] = n;
                    for(int x = 1; x <= n; x++){

                    gotoxy(6,24);cout <<"PELAYANAN:"<<endl;
                    gotoxy(6,25);cout <<"[1]. UGD"<<endl;
                    gotoxy(6,26);cout <<"[2]. IGD "<<endl;
                    gotoxy(6,27);cout <<"[3]. POLI ANAK"<<endl;
                    gotoxy(6,28);cout <<"[4]. POLI GIGI"<<endl;
                    gotoxy(6,29);cout <<"[5]. RAWAT INAP "<<endl;
                    gotoxy(6,30);cout <<"Pilih Layanan : ";cin>>layanan;
                    switch(layanan){
                    case 1:
                        layan="UGD";
                        break;
                    case 2:
                        layan="IGD";

                        break;
                    case 3:
                        layan="POLI ANAK";

                        break;
                    case 4:
                        layan="POLI GIGI";

                        break;
                    case 5:
                        layan="RAWAT INAP";

                        break;
                    default:
                        cin.clear();
                        cin.ignore();
                        gotoxy(60,37); cout << "UNKNOWN INPUT, PLEASE TRY AGAIN!";
                        gotoxy(60,39); system("pause");
                        break;

            }
                    gotoxy(69,37);cout<<"SILAHKAN MASUKKAN PELAYANAN SELANJUTNYA";
                    tambah1(&depan1, code, kode1,layan);
                    code1++;
                }
                    gotoxy(69,37);cout<<"******SELAMAT ANDA TELAH TERDAFTAR*****";
                    gotoxy(70,39);cout<<"        SILAHKAN MENUNGGU ANTRIAN";
                    getch();
                code++;
                antri.ekor++;

            break;

            case 2:
                display();
                gotoxy(60,39); system("pause");
            break;

            case 3:
            if(antri.ekor == 0){
                    gotoxy(60,37);cout << "BELUM ADA PENDAFTAR" << endl;
                }
                else{
                    antri.n[antri.kepala];
                    int x1 = 45;
                    for(int x = 1; x <= antri.n[antri.kepala]; x++){
                        gotoxy(0,x1);dequeue1();
                        x1+=10;
                    }
                    for(int i = antri.kepala; i < antri.ekor; i++){
                        antri.n[i] = antri.n[i + 1];
                    }
                    dequeue();
                    antri.ekor--;
                }
                gotoxy(60,39); system("pause");
            break;

            case 4:
                gotoxy(54,6); cout << " MASUKKAN NOMOR ANTRIAN : "; gotoxy(79,6);value=carii();


                gotoxy(60,36); cari(depan, value)? cari1(depan1, value) : cout << " MAAF DATA TERSEBUT TIDAK ADA DALAM ANTRIAN.....!!!!!";
                gotoxy(60,39); system("pause");
            break;

            case 5:
                ulang = 0;
                gotoxy(60,37); cout << "TERIMA KASIH, SAMPAI JUMPA LAGI.....!!!!!";
                gotoxy(60,39); system("pause");

            break;

            default:
                cin.clear();
                cin.ignore();
                gotoxy(60,37); cout << "UNKNOWN INPUT, PLEASE TRY AGAIN!";
                gotoxy(60,39);system("pause");
            break;
        }
    }
}
