#include <iostream>
#include "queue.h"
using namespace std;
int main()
{
    infotype cargoPesawat;
    int i;
    i = 0;
    int j;
    j = 0;
    int sisa;
    queue antrianCargo;
    createQueue(antrianCargo);
    addres Q;
    cout << " ========== Selamat siang Pak/Bu =========== " << endl;
    cout << " ============= cargo bandara =============== " << endl;
    cout << " ============== Data antrian =============== " << endl;
    cout << " ============= 12 - 12 - 2012 ============== " << endl;
    cout << endl;

    //INPUTAN
    cargoPesawat.nomorBarang = 1;
    cargoPesawat.namaBarang = "Ducati Panigale V4";
    cargoPesawat.jenis = "Motor";
    Q = newElm(cargoPesawat);
    cargoMasuk(antrianCargo, Q);

    cargoPesawat.nomorBarang = 2;
    cargoPesawat.namaBarang = "Ferrari";
    cargoPesawat.jenis = "Mobil";
    Q = newElm(cargoPesawat);
    cargoMasuk(antrianCargo, Q);

    cargoPesawat.nomorBarang = 3;
    cargoPesawat.namaBarang = "BMW 1000RR";
    cargoPesawat.jenis = "Motor";
    Q = newElm(cargoPesawat);
    cargoMasuk(antrianCargo, Q);
    cargoPesawat.nomorBarang = 4;
    cargoPesawat.namaBarang = "Toyota Supra";
    cargoPesawat.jenis = "Mobil";
    Q = newElm(cargoPesawat);
    cargoMasuk(antrianCargo, Q);

    cargoPesawat.nomorBarang = 5;
    cargoPesawat.namaBarang = "BMW 4";
    cargoPesawat.jenis = "Mobil";
    Q = newElm(cargoPesawat);
    cargoMasuk(antrianCargo, Q);

    cargoPesawat.nomorBarang = 6;
    cargoPesawat.namaBarang = "Vespa";
    cargoPesawat.jenis = "Motor";
    Q = newElm(cargoPesawat);
    cargoMasuk(antrianCargo, Q);

    //CEK INPUTAN
    cout << " ==== Data cargo di awal keberangkatan ==== " <<endl;
    printInfo(antrianCargo);
    cout << endl;

    //PENURUNAN CARGO
    cout << " ========= Menghapus antrian cargo ========= "<<endl;
    cout << " Jumlah cargo yang ingin di turunkan : 2" << endl;
    cout << " Berjumlah "<< "2" << " cargo yang sudah turun...."<< endl;
    while (i < 2){
            addres X;
            cargoKeluar(antrianCargo, X);
            i++;
    }
    cout << endl;
    cout << endl;

    //CEK SETELAH CARGO TURUN
    cout << " ====== Data antrian cargo saat ini ====== " <<endl;
    printInfo(antrianCargo);
    cout << endl;
    cout << " Berjumlah "<< "4" << " cargo yang masih ada...."<< endl;
    cout << endl;
    cout << endl;

    //MASUKAN CARGO SETELAH PENURUNAN
    cout << " ============== Antrian Baru ============== " << endl;
    cout << " ada berapa yang ingin di masukan : 2 ";
    cargoPesawat.nomorBarang = 5;
    cargoPesawat.namaBarang = "Hayabusa";
    cargoPesawat.jenis = "Motor";
    Q = newElm(cargoPesawat);
    cargoMasuk(antrianCargo, Q);

    cargoPesawat.nomorBarang = 6;
    cargoPesawat.namaBarang = "Mercedes-Benz";
    cargoPesawat.jenis = "Mobil";
    Q = newElm(cargoPesawat);
    cargoMasuk(antrianCargo, Q);
    cout << endl;
    cout << endl;

    //CEK CARGO SETELAH ADA YANG MASUK DAN YANG TURUN
    cout << " ======= Data antrian cargo saat ini ======= " <<endl;
    printInfo(antrianCargo);
    cout << " Apakah anda ingin mencari antrian cargo(y/n) : " ;
    string cariAntrian;
    cin >> cariAntrian;
    cout << endl;
    if (cariAntrian == "y"){
        cout << " == Ini adalah data sesuai nomor antrian  == " <<endl;
        cargoCari(antrianCargo);
    }
    cout << endl;


    //EVALUASI CARGO
    cout << " Apakah anda ingin mengetahui nama barang sesuai jenisnya(y/n) : " ;
    string cariJenis;
    cin >> cariJenis;
    if (cariAntrian == "y"){
            cout << " ==== Evaluasi cargo yang masuk hari ini === " <<endl;
        cout << endl;

        cout << " Nama bedasarkarn jenis Motor" << endl;
        cargoMotor(antrianCargo);
        cout << endl;
        cout << " Nama bedasarkarn jenis mobil" << endl;
        cargoMobil(antrianCargo);
        cout << endl;
    }
    return 0;
}
