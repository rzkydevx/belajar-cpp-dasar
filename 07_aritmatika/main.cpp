#include <iostream>
using namespace std;

int main() {
    int a = 6;
    int b = 3;

    int hasil;

    // Penjumlahan
    hasil = a + b;
    cout << a << " + " << b << " = " << hasil << endl;

    // Pengurangan
    hasil = a - b;
    cout << a << " - " << b << " = " << hasil << endl;

    // Perkalian
    hasil = a * b;
    cout << a << " * " << b << " = " << hasil << endl;

    // Pembagian
    hasil = a / b;
    cout << a << " / " << b << " = " << hasil << endl;

    // Modulus
    hasil = a % b;
    cout << a << " % " << b << " = " << hasil << endl;

    // Urutan Eksekusi
    hasil = (a + b) * 2;
    cout << hasil << endl;

    cin.get();
    return 0;
}