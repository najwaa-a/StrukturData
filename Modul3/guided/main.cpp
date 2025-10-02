#include <iostream>
#include "Mahasiswa.h"
#include "Mahasiswa.cpp"
using namespace std;

int main() {
    mahasiswa mhs;
    inputMhs(mhs);
    cout << "Rata-rata = " << rata2(mhs);
    return 0;
}