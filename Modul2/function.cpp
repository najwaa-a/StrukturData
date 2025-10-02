#include <iostream>
using namespace std;

int tambah(int a, int b){
    return a + b;
}

void cetakPesan(string nama){
    cout << "Halo, " << nama << "! Selamat belajar C++. " << endl;
}

int main() {
    int x = 7, y = 5;
    int hasil = tambah(x,y);
    cout << "Hasil penjumlahan  " << x << " + " << y << " = " << hasil << endl;

    cetakPesan("Najwa");

    return 0;
} 