#include <iostream>
using namespace std;

//Najwa Areefa Ghaisani_1031224000028

struct mahasiswa{ 
    char nim[10];  // array dengan tipe data char yang nilai maksimum nya 10
    int nilai1, nilai2;
};

void inputMhs(mahasiswa &m); //digunakan untuk prosedur input data dari user
float rata2(mahasiswa m); // digunakan untuk menghitung rata - rata 2 buah nilai yang akan dimasukan. ini sbuah fungsi

int main() { //tinggal manggil dari prosedur
    mahasiswa mhs; 
    inputMhs(mhs); 
    cout << "Rata-rata = " << rata2(mhs);
    return 0;
}

void inputMhs(mahasiswa &m) { // prosedur 
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



