#ifndef CLL_1_H
#define CLL_1_H

#include <string>
using namespace std;

struct elm {
    string nim;
    string nama;
    int umur;
    elm* next;
};

typedef elm* address;

struct List {
    address first;
    address last;
};

struct group {
    address ketua;
    address bendahara;
};

address createNewElmt(string nim, string nama, int usia);
bool isEmpty(List L);
void pemilihan(List L, group &G);
void tambahAnggota(List &L, string nim, string nama, int usia);

#endif