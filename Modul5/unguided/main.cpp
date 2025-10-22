#include "singlyList.h"
#include <iostream>
using namespace std;

int main() {
    List L;
    address P1, P2, P3, P4, P5;

    createList(L);

    P1 = allocate(9);
    insertFirst(L, P1);

    P2 = allocate(12);
    insertFirst(L, P2);
    
    P3 = allocate(8);
    insertFirst(L, P3);
    
    P4 = allocate(0);
    insertFirst(L, P4);
    
    P5 = allocate(2);
    insertFirst(L, P5);

    printInfo(L);

    findElm(L, 8);

    totalInfo(L);

    return 0;
}