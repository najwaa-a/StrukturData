#ifndef CIRCULARLIST_H
#define CIRCULARLIST_H

// Najwa Areefa Ghaisani_103122400028

#include <iostream>
using namespace std;

typedef struct mahasiswa{
    string nama;
    string nim;
    char jenis_kelamin;
    float ipk;
} infotype;

typedef struct elmlist *address;

typedef struct elmlist {
    infotype info;
    address next;
} elmlist;

struct List {
    address first;
};

void createList(List &L);
address alokasi(infotype x);
void dealokasi(address &P);
void insertFirst(List &L, address P);
void insertLast(List &L, address P);
void insertAfter(List &L, address Prec, address P);
void deleteFirst(List &L, address &P);
void deleteLast(List &L, address &P);
void deleteAfter(List &L, address Prec, address &P);
address findElm(List L, string nim);
void printInfo(List L);


#endif