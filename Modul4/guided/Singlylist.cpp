#include "Singlylist.h"
#include <iostream>
using namespace std;

void CreateList(List &L) {
    L.First = Nil; // menginisialisasi elemen First dengan Nil
}

address Alokasi(infotype x) { //parameter x adalah nilai yang akan disimpan dalam elemen baru
    address P = new Elmtlist; // mengalokasikan memori untuk elemen baru
    P->info = x; // mengisi elemen info dengan
    P->next = Nil; // biar program tahu bahwa ini belum ada elemen setelahnya
    // next di isi dengan Nil karena belum ada elemen setelahnya
    return P; // mengembalikan alamat elemen baru
}

void Dealokasi(address &P) { 
    delete P; // menghapus elemen yang ditunjuk oleh P
}
// void tidak perlu ada return

void InsertFirst(List &L, address P) {
    P->next = L.First; // menghubungkan elemen baru dengan elemen pertama yang lama
    L.First = P; // mengubah elemen First menjadi elemen baru
}

void printInfo(List L) {
    address P = L.First;
    if(P == Nil) {
        cout << "List kosong" << endl;
    } else {
        while(P != Nil) {
            cout << P->info << " "; // mencetak elemen info
            P = P->next; // pindah ke elemen berikutnya
        }
        cout << endl; // mencetak baris baru setelah mencetak semua elemen
    }
}