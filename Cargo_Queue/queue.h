#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#define info(P) (P)->info
#define next(P) (P)->next
#define head(Q) ((Q).head)
#define tail(Q) ((Q).tail)
#include <iostream>
using namespace std;
struct cargo{
    int nomorBarang;
    string jenis, namaBarang;
};
typedef cargo infotype;
typedef struct elmQueue *addres;
struct elmQueue{
    infotype info;
    addres next;
};
struct queue {
    addres head, tail;
};
addres newElm(infotype x);
bool isEmpty(queue Q);
void createQueue(queue &Q);
void cargoMasuk(queue &Q, addres P);
void cargoKeluar(queue &Q, addres &P);
void printInfo(queue Q);
void cargoMobil(queue Q);
void cargoMotor(queue Q);
void cargoCari(queue Q);
#endif // QUEUE_H_INCLUDED
