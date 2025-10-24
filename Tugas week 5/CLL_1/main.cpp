#include "CLL_1.h"
#include <iostream>
using namespace std;

void tampilkanList(List L) {
    if (isEmpty(L)) {
        cout << "List kosong!" << endl;
        return;
    }
    
    address p = L.first;
    cout << "\n=== DATA ANGGOTA UKM ===" << endl;
    int no = 1;
    do {
        cout << no << ". NIM: " << p->nim << endl;
        cout << "   Nama: " << p->nama << endl;
        cout << "   Umur: " << p->umur << " tahun" << endl;
        cout << endl;
        p = p->next;
        no++;
    } while (p != L.first);
}

void tampilkanGroup(group G) {
    cout << "\n=== STRUKTUR KEPENGURUSAN UKM ===" << endl;
    if (G.ketua != NULL) {
        cout << "Ketua:" << endl;
        cout << "  NIM  : " << G.ketua->nim << endl;
        cout << "  Nama : " << G.ketua->nama << endl;
        cout << "  Umur : " << G.ketua->umur << " tahun" << endl;
    }
    
    cout << endl;
    
    if (G.bendahara != NULL) {
        cout << "Bendahara:" << endl;
        cout << "  NIM  : " << G.bendahara->nim << endl;
        cout << "  Nama : " << G.bendahara->nama << endl;
        cout << "  Umur : " << G.bendahara->umur << " tahun" << endl;
    }
    
    if (G.ketua == G.bendahara && G.ketua != NULL) {
        cout << "\n(Ketua merangkap sebagai Bendahara karena hanya ada 1 anggota)" << endl;
    }
}

int main() {
    List L;
    L.first = NULL;
    L.last = NULL;
    
    group G;
    G.ketua = NULL;
    G.bendahara = NULL;
    
    cout << "========================================" << endl;
    cout << "  PROGRAM MANAJEMEN ANGGOTA UKM" << endl;
    cout << "  (Circular Single Linked List)" << endl;
    cout << "========================================" << endl;
    
    // Menambahkan anggota UKM
    cout << "\n>>> Menambahkan Anggota UKM <<<\n" << endl;
    
    tambahAnggota(L, "2301001", "Lee Haechan", 20);
    cout << "Ditambahkan: Budi Santoso (20 tahun)" << endl;
    
    tambahAnggota(L, "2301002", "Kim Jisoo", 19);
    cout << "Ditambahkan: Siti Nurhaliza (19 tahun)" << endl;
    
    tambahAnggota(L, "2301003", "Lee Jeno", 22);
    cout << "Ditambahkan: Ahmad Yani (22 tahun)" << endl;
    
    tambahAnggota(L, "2301004", "Karina", 18);
    cout << "Ditambahkan: Dewi Lestari (18 tahun)" << endl;
    
    tambahAnggota(L, "2301005", "Woonhak", 21);
    cout << "Ditambahkan: Rudi Hartono (21 tahun)" << endl;
  
    tampilkanList(L);
    
    cout << "\n>>> Melakukan Pemilihan Ketua dan Bendahara <<<" << endl;
    pemilihan(L, G);
    
    tampilkanGroup(G);
    
    cout << "\n\n========================================" << endl;
    cout << "  TEST CASE: UKM DENGAN 1 ANGGOTA" << endl;
    cout << "========================================" << endl;
    
    List L2;
    L2.first = NULL;
    L2.last = NULL;
    
    group G2;
    G2.ketua = NULL;
    G2.bendahara = NULL;
    
    tambahAnggota(L2, "2301006", "Jaehyun", 20);
    cout << "Ditambahkan: Jaehyun (20 tahun)" << endl;
    
    tampilkanList(L2);
    
    pemilihan(L2, G2);
    tampilkanGroup(G2);
    
    cout << "\n========================================" << endl;
    cout << "  Program selesai" << endl;
    cout << "========================================" << endl;
    
    return 0;
}