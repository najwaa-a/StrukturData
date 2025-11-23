#include <iostream>
#include "stack.h"
using namespace std;

// najwa_103122400028

int main() {
    Stack S;
    createStack(S);
    
    int pilih, nilai;
    
    do {
        cout << "\nPilih menu: " << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Print Info" << endl;
        cout << "4. Balik Stack" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilih;
        switch(pilih) {
            case 1:
                cout << "Input nilai: ";
                cin >> nilai;
                push(S, nilai);
                break;
            case 2:
                pop(S);
                cout << "Pop berhasil!" << endl;
                break;
            case 3:
                printInfo(S);
                break;
            case 4:
                balikStack(S);
                cout << "Balik stack berhasil!" << endl;
                break;
            case 5:
                cout << "Terima kasih!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }
    } while (pilih != 5);
    
    return 0;
}