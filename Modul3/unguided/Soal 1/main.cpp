#include "Nilai.h"
#include <iostream>
#include <limits>
#include <string>
using namespace std;

int main(){
    int jumlah_mahasiswa;
    const int MAX = 10;
    Nilai mhs[MAX];

    cout << "Input jumlah mahasiswa (max 10): ";
    cin >> jumlah_mahasiswa;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (jumlah_mahasiswa > MAX) {
        cout << "Jumlah mahasiswa melebihi batas maksimum!" << endl;
        return 0;
    }

    for (int i = 0; i < jumlah_mahasiswa; i++) {
        cout << "\nMasukkan data mahasiswa ke-" << (i + 1) << ":" << endl;

        cout << "Masukkan nama mahasiswa: " << endl;
        getline(cin, mhs[i].nama); 

        cout << "Masukkan NIM mahasiswa: ";
        cin >> mhs[i].nim;
        cout << "Masukkan nilai UTS: ";
        cin >> mhs[i].uts;
        cout << "Masukkan nilai UAS: ";
        cin >> mhs[i].uas;
        cout << "Masukkan nilai Tugas: ";
        cin >> mhs[i].tugas;

        mhs[i].nilai_akhir = hitung_nilai_akhir(mhs[i].uts, mhs[i].uas, mhs[i].tugas);

        cout << "\n[Data Mahasiswa ke-" << (i + 1) << "]" << endl;
        cout << "Nama: " << mhs[i].nama << endl;
        cout << "NIM: " << mhs[i].nim << endl;
        cout << "Nilai Akhir: " << mhs[i].nilai_akhir << endl;

        cin.ignore(); // Membersihkan newline sebelum getline berikutnya
    }

    return 0;
}