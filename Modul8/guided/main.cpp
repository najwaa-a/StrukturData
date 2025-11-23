#include <iostream>  // Menyertakan library untuk input/output
#include "queue.h"  // Menyertakan file header queue kita

using namespace std; // Menggunakan namespace standar

//najwa_103122400028

// Fungsi utama program
int main() {
    Queue Q; // Deklarasikan variabel queue bernama Q

    createQueue(Q); // Panggil prosedur untuk inisialisasi queue
    printInfo(Q);   //Tampilkan isi queue (seharusnya kosong)

    cout << "\n Enqueue 3 Elemen" << endl; 
    enqueue(Q, 5); 
    printInfo(Q);  
    enqueue(Q, 2); 
    printInfo(Q); 
    enqueue(Q, 7); 
    printInfo(Q);  

    cout << "\n Dequeue 1 Elemen" << endl; 
    // Hapus 1 elemen dan tampilkan nilainya
    cout << "Elemen keluar: " << dequeue(Q) << endl;
    printInfo(Q); // Tampilkan isi queue setelah dequeue

    cout << "\n Enqueue 1 Elemen" << endl; 
    enqueue(Q, 4); 
    printInfo(Q);  

    cout << "\nDequeue 2 Elemen" << endl; 
    // Hapus 1 elemen dan tampilkan nilainya
    cout << "Elemen keluar: " << dequeue(Q) << endl; 
    // Hapus 1 elemen lagi dan tampilkan nilainya
    cout << "Elemen keluar: " << dequeue(Q) << endl;
    printInfo(Q); // Tampilkan isi queue

    return 0; 
}