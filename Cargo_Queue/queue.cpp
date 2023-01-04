#include <iostream>
#include "queue.h"
using namespace std;
bool isEmpty(queue Q){
    if(head(Q) == NULL && tail(Q) == NULL){
        return true;
    }else {
        return false;
    }
}
void createQueue(queue &Q){
    head(Q) = NULL;
    tail(Q) = NULL;
}
void cargoMasuk(queue &Q, addres P){
    if(isEmpty(Q)){
        head(Q) = P;
        tail(Q) = P;
    }else{
        next(tail(Q)) = P;
        tail(Q) = P;
    }
}
void cargoKeluar(queue &Q, addres &P){
    if(isEmpty(Q)){
        cout << "Antrian kosong" << endl;
    }else if(head(Q) == tail(Q)){
        P = head(Q);
        head(Q) = NULL;
        tail(Q) = NULL;
    }else {
        P = head(Q);
        addres bantu = next(head(Q));
        while(bantu != NULL){
            info(bantu).nomorBarang--;
            bantu = next(bantu);
        }
        head(Q) = next(head(Q));
        next(P) = NULL;
    }
}
void printInfo(queue Q){
    addres P = head(Q);
    while(P != NULL){
        cout << " Nomor antrian : " << info(P).nomorBarang << endl;
        cout << " jenis         : " << info(P).jenis << endl;
        cout << " Nama Barang   : " << info(P).namaBarang << endl;
        cout << endl;
        P = next(P);
    }
}
void cargoMotor(queue Q){

    addres P = head(Q);
    while(P != NULL){
        while( info(P).jenis == "Motor"){
        cout << " Nama Barang   : " << info(P).namaBarang << endl;
        P = next(P);
        }
        P = next(P);
    }
}
void cargoMobil(queue Q){
    addres P = head(Q);
    while(P != NULL){
        while( info(P).jenis == "Mobil"){
        cout << " Nama Barang   : " << info(P).namaBarang << endl;
        P = next(P);
        }
        P = next(P);
    }
}
void cargoCari(queue Q){
    int urut;
    addres P = head(Q);
    cout << " Nomor antrian : "  ;
    cin >> urut;
    while(P != NULL){
        while( info(P).nomorBarang == urut){
            cout << " Nama Barang   : " << info(P).namaBarang << endl;
            cout << " jenis         : " << info(P).jenis << endl;
        P = next(P);
        }
        P = next(P);
    }
}
addres newElm(infotype x){
    addres P = new elmQueue;
    info(P) = x;
    next(P) = NULL;
    return P;
}



