#include<iostream>
using namespace std;

void ubahByValue(int x) {
    x = x + 10;
    cout << "[Dalam fungsi ubahByValue] X =" << x << endl;
}

void ubahByPointer (int* x) {
    *x = *x + 10;
    cout << "[Dalam fungsi ubahByValue] X =" << *x << endl;
}

void ubahByReference(int& x) {
    x = x + 10;
    cout << "[Dalam fungsi ubahByValue] X =" << x << endl; 
}

int main() {
    int a = 5, b = 5, c = 5;

    cout << "Sebelum fungsi dipanggil: " << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
    endl;

    ubahByValue(a);
    cout << "setelah ubahByValue, a = " << a << " (tidak berubah)" << endl << endl;

    ubahByPointer(&b);
    cout << "Setelah ubahByPointer, b = " << b << "(berubah)" << endl << endl;

    ubahByReference(c);
    cout << "Setelah ubahByReference, c = " << c << "(berubah)" << endl;

    return 0;
}



