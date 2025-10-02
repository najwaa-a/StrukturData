#include <iostream>
#include<conio.h>

//Najwa Areefa Ghaisani_103122400028

using namespace std;

const int nMax = 51;

struct mahasiswa {
    string NIM;
    string nama;
    int nilai;
};

int nilaiPertama(mahasiswa T[], int N, string NIM) {
    int hasil = -1;
    for(int i = 0; i < N; i++) {
        if (T[i].NIM == NIM) {
            hasil = T[i].nilai;
            return hasil;
        }
    }
    return hasil;
}

//Najwa Areefa Ghaisani_103122400028

int main() {
    mahasiswa T[nMax] = {
        {"113", "Jojo", 70},
        {"113", "Jojo", 50},
        {"113", "Jojo", 80},
        {"118", "Rere", 88},
        {"116", "Koko", 40},
        {"116", "Koko", 90},
        {"117", "Keke", 60},
        {"119", "Roro", 100}
    };

    int N = 8;
    string cariNIM;

    cout << "Input NIM yang dicari: ";
    cin >> cariNIM;

    int hasil = nilaiPertama(T, N, cariNIM);

    if (hasil != -1) {
        cout << "Nilai pertama mahasiswa dengan NIM " << cariNIM << " adalah " << hasil << endl;
    } else {
        cout << "Mahasiswa dengan NIM " << cariNIM << " tidak ditemukan" << endl;
    }

    return 0;
}