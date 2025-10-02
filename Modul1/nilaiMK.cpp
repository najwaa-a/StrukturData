#include <iostream>   
#include <string>     
using namespace std;  

//Najwa Areefa Ghaisani_103122400028

// ini bikin struct dengan nama nilaiSTD buat nyimpen data nilai mahasiswa
struct nilaiSTD { 
    float clo1;          // Menyimpan nilai CLO 1
    float clo2;          // Menyimpan nilai CLO 2
    float clo3;          // Menyimpan nilai CLO 3
    float clo4;          // Menyimpan nilai CLO 4
    float nilai_akhir;   // Menyimpan nilai akhir setelah dihitung
    string indeks_nilai; // Menyimpan indeks nilai (A, B, C, dst)
};

// bikin fungsi buat nyimpen nilai CLO ke dalam struct
nilaiSTD simpanNilaiCLO(float clo1, float clo2, float clo3, float clo4) {
    nilaiSTD nilai_std;       // bikin variabel struct sementara
    nilai_std.clo1 = clo1;    // Menyimpan nilai CLO 1
    nilai_std.clo2 = clo2;    // Menyimpan nilai CLO 2
    nilai_std.clo3 = clo3;    // Menyimpan nilai CLO 3
    nilai_std.clo4 = clo4;    // Menyimpan nilai CLO 4
    return nilai_std;         // ngembaliin struct yang sudah ke isi
}

// bikin fungsi buat ngitung nilai akhir berdasarkan bobot CLO
float hitungNilaiAkhir(float clo1, float clo2, float clo3, float clo4) {
    float nilai_akhir = (0.30 * clo1) + (0.30 * clo2) + (0.20 * clo3) + (0.20 * clo4);
    return nilai_akhir;  // ngembaliin hasil perhitungan
}

// Fungsi untuk menentukan indeks nilai berdasarkan nilai akhir
string menentukanIndeksNilai(float nilaiAkhir) {
    string indeks;   // Variabel untuk menyimpan indeks nilai
    
    // Mengecek nilai akhir, lalu menentukan indeks sesuai rentang nilai
    if (nilaiAkhir > 80) {
        indeks = "A";
    } else if (nilaiAkhir > 70 && nilaiAkhir <= 80) {
        indeks = "AB";
    } else if (nilaiAkhir > 65 && nilaiAkhir <= 70) {
        indeks = "B";
    } else if (nilaiAkhir > 60 && nilaiAkhir <= 65) {
        indeks = "BC";
    } else if (nilaiAkhir > 50 && nilaiAkhir <= 60) {
        indeks = "C";
    } else if (nilaiAkhir > 40 && nilaiAkhir <= 50) {
        indeks = "D";
    } else {
        indeks = "E";  // Jika nilai <= 40, dapat indeks E
    }
    return indeks;  // Mengembalikan hasil indeks
}

//Najwa Areefa Ghaisani_103122400028

int main() {
    // Variabel untuk menyimpan input nilai CLO dari user
    float nilaiCLO1, nilaiCLO2, nilaiCLO3, nilaiCLO4;

    // Meminta user memasukkan nilai CLO satu per satu
    cout << "Silakan input nilai CLO 1: ";
    cin >> nilaiCLO1;
    cout << "Silakan input nilai CLO 2: ";
    cin >> nilaiCLO2;
    cout << "Silakan input nilai CLO 3: ";
    cin >> nilaiCLO3;
    cout << "Silakan input nilai CLO 4: ";
    cin >> nilaiCLO4;

    cout << " \n<<< Menampilkan hasil >>> " << endl;

    // Menyimpan nilai CLO yang sudah diinput user ke dalam struct mhs1
    nilaiSTD mhs1 = simpanNilaiCLO(nilaiCLO1, nilaiCLO2, nilaiCLO3, nilaiCLO4);

    // Menghitung nilai akhir berdasarkan input CLO, lalu simpan ke struct
    mhs1.nilai_akhir = hitungNilaiAkhir(mhs1.clo1, mhs1.clo2, mhs1.clo3, mhs1.clo4);

    // Menentukan indeks nilai berdasarkan nilai akhir, lalu simpan ke struct
    mhs1.indeks_nilai = menentukanIndeksNilai(mhs1.nilai_akhir);

    // Menampilkan semua data yang sudah diolah
    cout << "Nilai CLO 1: " << mhs1.clo1 << endl;
    cout << "Nilai CLO 2: " << mhs1.clo2 << endl;
    cout << "Nilai CLO 3: " << mhs1.clo3 << endl;
    cout << "Nilai CLO 4: " << mhs1.clo4 << endl;
    cout << "Nilai Akhir: " << mhs1.nilai_akhir << endl;
    cout << "Indeks Nilai: " << mhs1.indeks_nilai << endl;

    return 0; // Menandakan program selesai dengan normal
}

//Najwa Areefa Ghaisani_103122400028
