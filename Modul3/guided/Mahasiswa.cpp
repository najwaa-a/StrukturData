#include <iostream>
#include "Mahasiswa.h" // memasukan file header ke cpp biar bisa dipanggil fungsi dan prosedur nya
using namespace std;

void inputMhs(mahasiswa &m) { // prosedur 
    cout << "Input Nama = ";
    cin >> (m).nim;
    cout << "Input NIM = ";
    cin >> m.nim;
    cout << "Input nilai1 = ";
    cin >> m.nilai1;
    cout << "Input nilai2 = ";
    cin >> m.nilai2;
}

float rata2(mahasiswa m) { // ini buat ngitung rata - rata
    return float(m.nilai1 + m.nilai2) / 2;
}