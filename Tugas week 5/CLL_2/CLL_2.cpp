#include "CLL_2.h"
#include <iostream>
using namespace std;

address createNewElm(string judul, string penyanyi) {
    address p = new elm;
    if (p != NULL) {
        p->judul = judul;
        p->penyanyi = penyanyi;
        p->next = NULL;
        p->prev = NULL;
    }
    return p;
}

void insertLast(address p, List &L) {
    if (p != NULL) {
        if (L.first == NULL) {
            L.first = p;
            L.last = p;
            p->next = p;
            p->prev = p;
        } else {
            p->prev = L.last;
            p->next = L.first;
            L.last->next = p;
            L.first->prev = p;
            L.last = p;
        }
    }
}

void add(string judul, string penyanyi, List &L) {
    address p = createNewElm(judul, penyanyi);
    if (p != NULL) {
        insertLast(p, L);
    }
}

void deleteFirst(List &L, address &p) {
    if (L.first != NULL) {
        p = L.first;
        if (L.first == L.last) {
            L.first = NULL;
            L.last = NULL;
        } else {
            L.first = p->next;
            L.first->prev = L.last;
            L.last->next = L.first;
        }
        p->next = NULL;
        p->prev = NULL;
    } else {
        p = NULL;
    }
}

void deleteAfter(address q, address &p) {
    if (q != NULL && q->next != NULL) {
        p = q->next;
        q->next = p->next;
        p->next->prev = q;
        p->next = NULL;
        p->prev = NULL;
    } else {
        p = NULL;
    }
}

address searchLagu(string judul, string penyanyi, List L) {
    if (L.first == NULL) {
        return NULL;
    }
    
    address p = L.first;
    bool found = false;
    
    do {
        if (p->judul == judul && p->penyanyi == penyanyi) {
            found = true;
        } else {
            p = p->next;
        }
    } while (!found && p != L.first);
    
    if (found) {
        return p;
    } else {
        return NULL;
    }
}

void moveToEnd(string judul, string penyanyi, List &L) {
    if (L.first != NULL) {
        address p = searchLagu(judul, penyanyi, L);
        
        if (p != NULL && p != L.last) {
            address q;
            
            if (p == L.first) {
                deleteFirst(L, q);
            } else {
                // Cari elemen sebelum p
                q = L.first;
                while (q->next != p) {
                    q = q->next;
                }
                deleteAfter(q, p);
            }

            insertLast(p, L);
        }
    }
}

void playLaguToLagu(string judul1, string penyanyi1, string judul2, string penyanyi2, List L) {
    if (L.first != NULL) {
        address start = searchLagu(judul1, penyanyi1, L);
        address end = searchLagu(judul2, penyanyi2, L);
        
        if (start != NULL && end != NULL) {
            cout << "\n=== Memutar Playlist ===" << endl;
            address p = start;
            bool found = false;
            int no = 1;
            
            do {
                cout << no << ". ♪ " << p->judul << " - " << p->penyanyi << endl;
                if (p == end) {
                    found = true;
                }
                p = p->next;
                no++;
            } while (!found);
            
            cout << "=== Selesai ===" << endl;
        } else {
            if (start == NULL) {
                cout << "Lagu awal \"" << judul1 << " - " << penyanyi1 << "\" tidak ditemukan!" << endl;
            }
            if (end == NULL) {
                cout << "Lagu akhir \"" << judul2 << " - " << penyanyi2 << "\" tidak ditemukan!" << endl;
            }
        }
    } else {
        cout << "Playlist kosong!" << endl;
    }
}