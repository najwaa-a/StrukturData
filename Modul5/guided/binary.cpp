#include <iostream>
using namespace std;

// Definisi node
struct Node { // Memiliki 2 bagian yaitu data dan pointer
    int data;
    Node* next; // Pointer ke node berikutnya
};



// Fungsi untuk menambah node
void append(Node*& head, int value) { // Node* ini pointer (kembalian) // fs linear search
    Node* newNode = new Node{value, nullptr}; // newNode adalah pointer yang menunjuk ke node baru yang akan dibuat. // value == null karena node baru berada di paling akhir
    if (!head) head = newNode; // jika head null, head diisi node baru
    else { 
        Node* temp = head; // mulai dari head
        while (temp->next) temp = temp->next; // pindah ke node berikutnya sampai ketemu node terakhir
        temp->next = newNode; // node terakhir dihubungkan ke node baru
    }
}

// Fungsi binary search pada Linked List
Node* binarySearch(Node* head, int key) { // Node* ini pointer (kembalian) // head ini pointer ke node pertama // key ini data yang dicari
    int size = 0; // var size diisi 0
    for (Node* current = head; current; current = current->next) size++;  // current adalah pointer yang digunakan untuk menyusuri linked list
    Node *start = head; // start adalah pointer yang menunjuk ke node pertama
    Node* end = nullptr; // end adalah pointer yang menunjuk ke node terakhir (null karena linked list tidak memiliki node terakhir yang pasti)

    while (size > 0) { // selama masih ada elemen > 0
        int mid = size / 2; // bagi size jadi 2
        Node* midNode = start; // midNode adalah pointer yang menunjuk ke node tengah
        for (int i = 0; i < mid; ++i) midNode = midNode->next; // pindah ke node tengah

        if (midNode->data == key) return midNode; // Jika ditemukan data yang cocok, kembalikan node
        if (midNode->data < key) {  // Jika data midNode lebih kecil dari key, kita cari di bagian kanan
            start = midNode->next;  // Mulai pencarian dari node setelah midNode
        }
        else { // Jika data midNode lebih besar dari key, kita cari di bagian kiri
            end = midNode; // Batasi pencarian ke bagian kiri
        }
        size -= mid; // kita mengurangi size dengan mid
    }
    return nullptr; // Jika key tidak ditemukan
}

int main() {
    Node* head = nullptr; // Inisialisasi linked list kosong
    append(head, 10); append(head, 20); append(head, 30); append(head, 40); append(head, 50);

    // Mencari data 30 menggunakan binarySearch
    Node* result = binarySearch(head, 30);
    cout << (result ? "Found" : "Not Found") << endl; // Menampilkan hasil pencarian

    return 0;
}