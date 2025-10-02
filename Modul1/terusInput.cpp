#include <iostream>
#include<conio.h>

//Najwa Areefa Ghaisani_103122400028

using namespace std;

int main() {
    int x; // ini buat input angka
    int y = 0; // y itu disini buat ngitung jumlah semua angka
    int z = 0; // kalau z itu dia bakalan ngitung banyaknya angka

    cout << "Input angka (akhiri dengan -999): " << endl;
    
    while (true){ // pakek while biar dia loop sampai break
        cin >> x;

        if (x == -999) {
            break;
        } 

        y += x; // ini operasi buat nambahin angka ke total (jumlah semua angka)
        z++; // ini bakalan nambah jumlah data nya (counter)
    }

    if (z > 0 ) { 
        double rata = (double) y / z; // ini buat ngitung rata2, karena peluang besar hasilnya koma jdi kita pakek double
        cout << "Rata - rata: " << rata << endl;
    } else {
        cout << "Rata - rata: 0"<< endl; // ini misalkan angka yang di input tu langsung -999, hasilya bakalan 0
    }


    getch();
    return 0;
}