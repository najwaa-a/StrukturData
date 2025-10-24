#ifndef CLL_2_H
#define CLL_2_H

#include <string>
using namespace std;

struct elm {
    string judul;
    string penyanyi;
    elm* next;
    elm* prev;
};

typedef elm* address;


struct List {
    address first;
    address last;
};

address createNewElm(string judul, string penyanyi);
void insertLast(address p, List &L);
void add(string judul, string penyanyi, List &L);
void deleteFirst(List &L, address &p);
void deleteAfter(address q, address &p);
address searchLagu(string judul, string penyanyi, List L);
void moveToEnd(string judul, string penyanyi, List &L);
void playLaguToLagu(string judul1, string penyanyi1, string judul2, string penyanyi2, List L);

#endif