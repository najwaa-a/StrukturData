#ifndef MATRIKS_H
#define MATRIKS_H

#include  <string>

struct matriks {
    int data[3][3];
};

void tampilkanMatriks(const matriks& arr);
void tukarElemen(matriks& arr1, matriks& arr2, int row, int col);
void tukarPointer(int* p1, int* p2);

#endif 
