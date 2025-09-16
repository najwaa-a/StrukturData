
// CONTOH 1
#include <iostream> 
using namespace std; //wajib ada titikkoma dibelakang, agar tdk menyebabkan error 
                    // jadi using namespace std; ini berfungsi agar kita tidak 
                    //selalu menulis std ketika ingin menampilkan output
int main(){ //menu utama dalam cpp
    cout<<"Hello World!"<<endl;      //end1 ini berfungsi enter. 
                                    // cout berfungsi untuk menampilkan output
    return 0; 
} 


// CONTOH 2
#include <iostream>
#include <conio.h> //digunkan untuk getch
using namespace std; // biar nggak nulis ulang std wktu mau print out 

int main(){
    int x, y; //variabel
    int *px; //pointer >> 
    x = 87; //nilai x = 87
    px = &x; //pointer px menyimpan alamat dari x
    y = *px; //menyimpan nilai yang ditunjuk oleh pointer px (y=87)

    cout<<"Alamat x  = "<< &x << endl; // menampilkan alamat memori
    cout<<"Isi px    = "<< px << endl; //isi pointer px = alamat x
    cout<<"Isi x     = "<< x << endl; // Nilai variabel x
    cout<<"Nilai *px = "<< *px << endl; // Nilai yang ditunjuk pointer
    cout<<"Nilai y   = "<< y << endl; // y menyimpan nilai yang ditunjuk oleh pointer px (y=87)

    getch(); //agar program tidak langsung berhenti
    return 0; 

    // untuk alamat dan px setiap orang akan berbeda2 karena tergantung laptop masing - masing
}

// CONTOH 3
#include <iostream>
#include <conio.h>
#define MAX 5 //ukuran array ditetapkan sebagai 5

using namespace std;

int main(){
    int i, j; //array 1 dimensi
    float nilai[MAX];
    static int nilai_tahun[MAX][MAX] = { // array 2 dimensi (5x5)
        {0, 2, 2, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 3, 3, 3, 0},
        {4, 4, 0, 0, 4},
        {5, 0, 0, 0, 5},
    };

    for (i = 0; i<MAX; i++) {
        cout << "Masukan nilai ke-" << (i+1) << ": ";
        cin >> nilai[i];
    }

    cout << "\nData nilai siswa::\n";
    for (i = 0; i < MAX; i++) {
        cout << "Nilai ke-" << i + 1 << nilai[i] << endl;
    }

    cout << "\nNilai tahunan: "; // Menampilkan array isi 2 dimensi
    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            cout << nilai_tahun[i][j] << " ";
        }
        cout << endl;
    }

    getch();
    return 0;
}


