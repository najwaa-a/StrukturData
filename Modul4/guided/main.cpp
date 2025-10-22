#include <iostream>
#include <cstdlib>
#include "Singlylist.h"

using namespace std;

int main() {
    List L;
    address P1, P2, P3, P4, P5;

    CreateList(L); // membuat list kosong

    P5 = Alokasi(9);
    InsertFirst(L, P5);
    
    P4 = Alokasi(12);
    InsertFirst(L, P4);

    P3 = Alokasi(8);
    InsertFirst(L, P3);     

    P2 = Alokasi(0);
    InsertFirst(L, P2);

    P1 = Alokasi(2);
    InsertFirst(L, P1);

    cout << "Isi list adalah: ";
    printInfo(L); 

    system("pause");
    return 0;
}

