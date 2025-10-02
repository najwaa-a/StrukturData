#include <iostream>
using namespace std;

int main(){
    //-------------- pointer

    int x= 42;   //deklarasi variabel
    int *p;      //deklarasi pointer

    p = &x;    //menyimpan alamat variabel ke pointer

    cout << "Nilai variabel: " << x << endl;
    cout << "Alamat variabel: " << &x << endl;
    cout << "Nilai pointer: " << p << endl;
    cout << "Nilai yang ditunjuk pointer: " << *p << endl;
    cout << endl;

    //-------------- pointer & array
    int arr[5] = {10,20,30,40,50};
    int *p = arr; //pointer menunjuk ke array
    cout << "Array menggunakan pointer: " << endl;
    for (int i = 0; i < 5; i++){
        cout << "Alamat: " << "arr[" << i << "] = " << *(p + i) << endl;
    }
    cout << endl;

    //-------------- pointer & string
    const char* str = "Hello, World!";
    cout << "String: " << endl;

    cout << "Akses tiap karakter dengan pointer: " << endl;
    const char* pstr = str;
    while (*pstr != '\0'){
        cout << 
        pstr++;
    }




    return 0;
}