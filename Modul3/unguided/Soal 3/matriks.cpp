#include "matriks.h"
#include <iostream>

using namespace std;

void tampilkanMatriks(const matriks& arr) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << arr.data[i][j] << " ";
        }
        cout << endl;
    }
}

void tukarElemen(matriks& arr1, matriks& arr2, int row, int col) {
    if (row >= 0 && row < 3 && col >= 0 && col < 3) {
        int temp = arr1.data[row][col];
        arr1.data[row][col] = arr2.data[row][col];
        arr2.data[row][col] = temp;
    } else {
        cout << "Indeks di luar batas matriks." << endl;
    }
}

void tukarPointer(int* p1, int* p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}