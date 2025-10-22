#include "singlyList.h"
#include <iostream>
using namespace std;

void createList(List &L) {
    L.first = NULL;
}

address allocate(infotype x) {
    address P = new tElmtlist;
    if (P != NULL) {
        P->info = x;
        P->next = NULL;
    }
    return P;
}

void deallocate(address P) {
    delete P;
}

void insertFirst(List &L, address P) {
    if (L.first == NULL) {
        L.first = P;
    } else {
        P->next = L.first;
        L.first = P;
    }
}

void printInfo(List L) {
    address P = L.first;
    while (P != NULL) {
        cout << P->info;
        if (P->next != NULL) cout << " -> ";
        P = P->next;
    }
    cout << endl;
}

address findElm(List L, infotype x) {
    address P = L.first;
    while (P != NULL) {
        if (P->info == x) {
            cout << x << " ditemukan dalam list" << endl;
            return P;
        }
        P = P->next;
    }
    cout << x << " tidak ditemukan dalam list" << endl;
    return NULL;
}

int totalInfo(List L) {
    address P = L.first;
    int total = 0;
    while (P != NULL) {
        total += P->info;
        P = P->next;
    }
    cout << "Total info dari kelima elemen adalah " << total << endl;
    return total;
}