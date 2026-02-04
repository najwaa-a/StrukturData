#include "circularlist.h"
#include <iostream>
using namespace std;

// Najwa Areefa Ghaisani_103122400028

void createList(List &L) {
    L.first = NULL;
}

address alokasi(infotype x) {
    address P = new elmlist;
    P -> info = x;
    P -> next = NULL;
    return P;
}

void dealokasi(address &P) {
    delete P;
    P = NULL;
}

void insertFirst(List &L, address P) {
    if (L.first == NULL) {
        L.first = P;
        P->next = P;
    } else {
        address Q = L.first;
        while (Q -> next != L.first) {
            Q = Q -> next;
        }
        Q -> next = P;
        P -> next = L.first;
        L.first = P;
        
    }
}

void insertLast(List &L, address P) {
    if (L.first == NULL) {
        L.first = P;
        P -> next = P;
    } else {
        address Q = L.first;
        while (Q -> next != L.first) {
            Q = Q -> next;
        }
        Q -> next = P;
        P -> next = L.first;
    }
}

void insertAfter(List &L, address Prec, address P) {
    if (Prec != NULL) {
        P -> next = Prec -> next;
        Prec -> next = P;
    }
}

void deleteFirst(List &L, address &P) {
    if (L.first != NULL) {
        address Q = L.first;
        while (Q -> next != L.first) Q = Q -> next;
        P = L.first;   
        if (P -> next == P) {
            L.first = NULL;
        } else {
           L.first = P -> next;
           Q -> next = L.first;
        }
        P -> next = NULL;
    }
}

void deleteLast(List &L, address &P) {
    if (L.first != NULL) {
        address Q = L.first;
        address Prev = NULL;
        while (Q -> next != L.first) {
            Prev = Q;
            Q = Q -> next;
        }
        P = Q;
        if (Prev == NULL) {
            L.first = NULL;
        } else {
            Prev -> next = L.first;
        }
        P -> next = NULL;
    }
}

void deleteAfter(List &L, address Prec, address &P) {
    if (Prec != NULL && Prec -> next != NULL) {
        P = Prec -> next;
        Prec -> next = P -> next;
        P -> next = NULL;
    }
}

address findElm(List L, string nim) {
    if (L.first == NULL) return NULL;
    
    address P = L.first;
    do {
        if (P -> info.nim == nim) {
            return P;
        }
        P = P -> next;
    } while (P != L.first);
    return NULL;
}

void printInfo(List L) {
    if (L.first == NULL) {
        cout << "List Kosongg!" << endl;
        return;
    }
    address P = L.first;
    do {
        cout << "Nama : " << P -> info.nama << endl;
        cout << "NIM  : " << P -> info.nim << endl;
        cout << "L/P  : " << P -> info.jenis_kelamin << endl;
        cout << "IPK  : " << P -> info.ipk << endl;
        cout << endl;
        P = P -> next;
    } while (P != L.first);
}