#include <iostream>
#include "matriks.h"
using namespace std;

int main() {
    matriks matrix1 = {{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}};
    matriks matrix2 = {{{9, 8, 7}, {6, 5, 4}, {3, 2, 1}}};

    cout << "Matriks 1:" << endl;
    tampilkanMatriks(matrix1);
    cout << "Matriks 2:" << endl;
    tampilkanMatriks(matrix2);

    int row = 1, col = 1; 
    tukarElemen(matrix1, matrix2, row, col);

    cout << "\nSetelah menukar elemen di posisi (" << row << ", " << col << "):" << endl;
    cout << "Matriks 1:" << endl;   
    tampilkanMatriks(matrix1);
    cout << "Matriks 2:" << endl;
    tampilkanMatriks(matrix2);

    int a = 10, b = 20;
    int *ptrA = &a;
    int *ptrB = &b;

    cout << "\nSebelum menukar isi melalui pointer:" << endl;
    cout << "a: " << a << ", b: " << b << endl;

    tukarPointer(ptrA, ptrB);

    cout << "Setelah menukar isi melalui pointer:" << endl;
    cout << "a: " << a << ", b: " << b << endl;

    return 0;

}