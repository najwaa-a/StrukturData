#include <iostream>
using namespace std;

struct Node { //memiliki 2 bagian yaitu data dan pointer ke node berikutnya
    int data;
    Node* next;
};


//fungsi buat cari linear
Node* linearSearch(Node* head, int key) { 
    Node* current = head; // current adalah pointer yang akan menujuk ke node saat ini
    while (current != nullptr) {
        if (current->data == key) 
            return current;
        current = current->next;
    }
    return nullptr; 
}

void append(Node*& head, int value) {
    Node* newNode = new Node{value, nullptr};
    if(head) head= newNode;
    else{
        Node* temp = head;
        while(temp->next) temp = temp->next;
        temp->next = newNode;
    }
}

int main() {
    Node* head = nullptr;
    append(head, 10);append(head, 20);append(head, 30);
    
    Node* result = linearSearch(head, 20);

    cout << (result ? "Found: ":"Not Found") << endl;
   
    return 0;
}