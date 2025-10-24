#include "CLL_2.h"
#include <iostream>
using namespace std;

void tampilkanPlaylist(List L) {
    if (L.first == NULL) {
        cout << "Playlist kosong!" << endl;
        return;
    }
    
    address p = L.first;
    cout << "\n=== PLAYLIST LAGU ===" << endl;
    int no = 1;
    do {
        cout << no << ". " << p->judul << " - " << p->penyanyi << endl;
        p = p->next;
        no++;
    } while (p != L.first);
    cout << "=====================" << endl;
}

int main() {
    List L;
    L.first = NULL;
    L.last = NULL;
    
    cout << "============================================" << endl;
    cout << "     PROGRAM MANAJEMEN PLAYLIST LAGU" << endl;
    cout << "============================================" << endl;
    
    cout << "\n>>> Menambahkan Lagu ke Playlist <<<\n" << endl;
    
    add("Imagine", "John Lennon", L);
    cout << "Ditambahkan: Imagine - John Lennon" << endl;
    
    add("Bohemian Rhapsody", "Queen", L);
    cout << "Ditambahkan: Bohemian Rhapsody - Queen" << endl;
    
    add("Hotel California", "Eagles", L);
    cout << "Ditambahkan: Hotel California - Eagles" << endl;
    
    add("Stairway to Heaven", "Led Zeppelin", L);
    cout << "Ditambahkan: Stairway to Heaven - Led Zeppelin" << endl;
    
    add("Sweet Child O Mine", "Guns N Roses", L);
    cout << "Ditambahkan: Sweet Child O Mine - Guns N Roses" << endl;
    
    add("Smells Like Teen Spirit", "Nirvana", L);
    cout << "Ditambahkan: Smells Like Teen Spirit - Nirvana" << endl;
    
    tampilkanPlaylist(L);

    cout << "\n>>> Test: Memutar dari 'Bohemian Rhapsody' sampai 'Sweet Child O Mine' <<<" << endl;
    playLaguToLagu("Bohemian Rhapsody", "Queen", "Sweet Child O Mine", "Guns N Roses", L);

    cout << "\n>>> Test: Mencari Lagu 'Hotel California' <<<" << endl;
    address cari = searchLagu("Hotel California", "Eagles", L);
    if (cari != NULL) {
        cout << "Lagu ditemukan: " << cari->judul << " - " << cari->penyanyi << endl;
    } else {
        cout << "Lagu tidak ditemukan!" << endl;
    }

    cout << "\n>>> Test: Memindahkan 'Imagine' ke Akhir Playlist <<<" << endl;
    moveToEnd("Imagine", "John Lennon", L);
    cout << "Lagu 'Imagine - John Lennon' dipindahkan ke akhir." << endl;
    tampilkanPlaylist(L);

    cout << "\n>>> Test: Memindahkan 'Hotel California' ke Akhir Playlist <<<" << endl;
    moveToEnd("Hotel California", "Eagles", L);
    cout << "Lagu 'Hotel California - Eagles' dipindahkan ke akhir." << endl;
    tampilkanPlaylist(L);

    cout << "\n>>> Test: Memutar dari 'Bohemian Rhapsody' sampai 'Imagine' <<<" << endl;
    playLaguToLagu("Bohemian Rhapsody", "Queen", "Imagine", "John Lennon", L);

    cout << "\n>>> Test: Mencari Lagu yang Tidak Ada <<<" << endl;
    cari = searchLagu("Yesterday", "The Beatles", L);
    if (cari != NULL) {
        cout << "Lagu ditemukan: " << cari->judul << " - " << cari->penyanyi << endl;
    } else {
        cout << "Lagu 'Yesterday - The Beatles' tidak ditemukan dalam playlist!" << endl;
    }
 
    cout << "\n>>> Test: Memutar dengan Lagu yang Tidak Ada <<<" << endl;
    playLaguToLagu("Yesterday", "The Beatles", "Imagine", "John Lennon", L);
    
    cout << "\n============================================" << endl;
    cout << "         Program selesai" << endl;
    cout << "============================================" << endl;
    
    return 0;
}