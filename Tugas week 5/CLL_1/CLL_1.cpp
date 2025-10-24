#include "CLL_1.h"
#include <iostream>
using namespace std;

address createNewElmt(string nim, string nama, int usia) {
    address p = new elm;
    if (p != NULL) {
        p->nim = nim;
        p->nama = nama;
        p->umur = usia;
        p->next = NULL;
    }
    return p;
}

bool isEmpty(List L) {
    return (L.first == NULL);
}

void pemilihan(List L, group &G) {
    if (!isEmpty(L)) {
        address p = L.first;
        address tertua = p;
        address termuda = p;
        
        // Cari mahasiswa tertua dan termuda
        do {
            if (p->umur > tertua->umur) {
                tertua = p;
            }
            if (p->umur < termuda->umur) {
                termuda = p;
            }
            p = p->next;
        } while (p != L.first);
        
        G.ketua = tertua;
        G.bendahara = termuda;
    }
}

void tambahAnggota(List &L, string nim, string nama, int usia) {
    address p = createNewElmt(nim, nama, usia);
    
    if (p != NULL) {
        if (isEmpty(L)) {
            // List kosong
            L.first = p;
            L.last = p;
            p->next = p;
        } else {
            p->next = L.first;
            L.last->next = p;
            L.first = p;
        }
    }
}