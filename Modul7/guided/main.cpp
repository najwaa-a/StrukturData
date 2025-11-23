#include "stack.h"
#include <iostream>

//najwa_103122400028

using namespace std;

int main() {
    Stack S;
    CreateStack(S);

    Push(S, 3);
    Push(S, 4);
    Push(S, 8);
    pop(S);
    Push(S, 2);
    Push(S, 3);
    pop(S);
    Push(S, 9);

    cout << "Stack Awal: " << endl;
    printInfo(S);

    cout << "balik stack" << endl;
    balikStack(S);

    cout << "Stack Setelah dibalik: " << endl;
    printInfo(S);
    return 0;
}