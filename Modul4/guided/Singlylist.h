#ifndef SINGLYLIST_H_INCLUDE // untuk memeberikan proteksi pada header file
#define SINGLYLIST_H_INCLUDE 
//tanpa menggunakan ini otomatis akan error ketika ada file yang meng-include header file ini lebih dari satu kali
// hal ini disebut dengan one deinition rule (ODR)

// Najwa Areefa Ghaisani_103122400028

#include <iostream> // biar bisa input dan output

#define Nil NULL // mendefinisikan Nil sebagai NULL

typedef int infotype; // mendefinisikan tipe data infotype sebagai integer

typedef struct Elmtlist *address; 

// '*' namanya asterisk = alamat sekaligus mengakses isi alamat tsb
// sedangkan '&' namanya ampersand = hanya alamat tanpa mengakses isi alamat tsb

struct  Elmtlist { // mendefinisikan struct tElmtlist
    infotype info; // elemen info bertipe infotype
    address next; // elemen next bertipe address
};


struct List { // mendefinisikan struct List
    address First ; // elemen First bertipe address
};

void CreateList(List &L); // prosedur untuk membuat list kosong
address Alokasi(infotype x); // fungsi untuk mengalokasikan elemen baru
void Dealokasi(address &P); // prosedur untuk menghapus elemen
void InsertFirst(List &L, address P); // prosedur untuk memasukkan elemen di awal list
void printInfo(List L); // prosedur untuk mencetak elemen list

#endif 

