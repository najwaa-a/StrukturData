#ifndef QUEUE_H  // Jika QUEUE_H belum didefinisikan
#define QUEUE_H // Maka definisikan QUEUE_H untuk mencegah inklusi ganda


//najwa_103122400028

#define MAX_QUEUE 5 // Menentukan ukuran maksimal antrean 

// Mendefinisikan struktur (tipe data) untuk Queue
struct Queue {
    int info[MAX_QUEUE]; // Array untuk menyimpan data antrean
    int head;            //  Penanda untuk elemen paling depan (kepala) 
    int tail;            //  Penanda untuk elemen paling belakang (ekor) 
    int count;           // Penghitung jumlah elemen saat ini 
};

//  Prosedur untuk membuat queue kosong 
void createQueue(Queue &Q);

// Fungsi untuk mengecek apakah queue kosong
bool isEmpty(Queue Q);

// Fungsi untuk mengecek apakah queue penuh
bool isFull(Queue Q);

// Prosedur untuk menambahkan elemen ke queue (enqueue) 
void enqueue(Queue &Q, int x);

// Fungsi untuk menghapus dan mengembalikan elemen dari queue (dequeue) 
int dequeue(Queue &Q);

// Prosedur untuk menampilkan semua isi queue
void printInfo(Queue Q);

#endif 