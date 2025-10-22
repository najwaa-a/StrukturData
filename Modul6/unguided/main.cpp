#include "Doublylist.h"
#include <iostream>
#include <string>
using namespace std;

void baca_dan_masukkan(List &L) {
    infotype newK;
    string nopolisiInput;
    address P;

    cout << "Input nomor polisi: ";
    if (!getline(cin >> ws, nopolisiInput)) return;
    newK.nopolisi = nopolisiInput;

    P = findElm(L, newK.nopolisi);
    if (P != NULL) { 
        cout << "nomor polisi sudah terdaftar\n";
        return;
    }

    cout << "Input warna kendaraan: ";
    getline(cin >> ws, newK.warna);
    cout << "masukkan tahun kendaraan: ";
    cin >> newK.thnBuat;

    address newElm = alokasi(newK);
    insertLast(L, newElm);
}

int main() {
    List L;
    CreateList(L);

    cout << "~~~ INPUT DATA ~~~" << endl;
    baca_dan_masukkan(L);
    baca_dan_masukkan(L);
    baca_dan_masukkan(L);
    baca_dan_masukkan(L);

    cout << "\n~~~ DATA LIST ~~~" << endl;
    printInfo(L);

    infotype cari;
    cari.nopolisi = "D001";
    address found = findElm(L, cari);
    if (found != NULL) {
        cout << "\nKendaraan dengan nopol " << cari.nopolisi << " ditemukan." << endl;
    } else {
        cout << "\nKendaraan dengan nopol " << cari.nopolisi << " tidak ditemukan." << endl;
    }

    address del = findElm(L, "D003");
    if (del == L.First) {
        deleteFirst(L, del);
    } else if (del == L.Last) {
        deleteLast(L, del);
    } else if (del != NULL) {
        deleteAfter(del->prev, del);
    }

    if (del != NULL) {
        cout << "\nElemen dengan nopol D003 dihapus." << endl;
        dealokasi(del);
    }

    cout << "\n~~~ DATA SETELAH DELETE ~~~" << endl;
    printInfo(L);

    address current = L.First;
    address nextElm;
    while (current != NULL) {
        nextElm = current->next;
        dealokasi(current);
        current = nextElm;
    }
    L.First = NULL;
    L.Last = NULL;

    return 0;
}
