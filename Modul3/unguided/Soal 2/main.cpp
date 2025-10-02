#include <iostream>
#include "Pelajaran.h"
#include "pelajaran.cpp"
using namespace std;

int main() {
    string namapel, kodepel;
    cout << "Masukkan nama pelajaran: ";
    getline(cin, namapel);
    cout << "Masukkan kode pelajaran: ";
    cin >> kodepel;
    cin.ignore(); 

    cout << endl;
    cout << "[Data Pelajaran]" << endl;
    Pelajaran pel = create_pelajaran(namapel, kodepel);
    tampil_pelajaran(pel);

    return 0;
}
