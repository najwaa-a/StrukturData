#include <iostream>
#include <conio.h>

//Najwa Areefa Ghaisani_103122400028

using namespace std;

int main(){
    int x;

    cout << "Input angka: ";
    cin >> x;

    if (x % 3 == 0) {
        cout << "x adalah bilangan kelipatan 3" << endl;
    } else {
        cout << "x bukan bilangan kelipatan 3" << endl;
    }

    getch();
    return 0;
}