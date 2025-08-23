#include <iostream>
using namespace std;

int main() {
  float a, b;
  char aritmatika;

  cout << "Selamat Datang di Kalkulator Sederhana!" << endl;

  // Input angka pertama
  cout << "Masukkan angka pertama: ";
  cin >> a;

  cout << "Masukkan operator (+, -, *, /): ";
  cin >> aritmatika;

  // Input angka kedua
  cout << "Masukan angka kedua: ";
  cin >> b;

  switch (aritmatika) {
    case '+':
      cout << "Hasil: " << a + b << endl;
      break;
    case '-':
      cout << "Hasil: " << a - b << endl;
      break;
    case '*':
      cout << "Hasil: " << a * b << endl;
      break;
    case '/':
      if (b != 0) {
        cout << "Hasil: " << a / b << endl;
      } else {
        cout << "Error: Pembagian dengan nol tidak diperbolehkan!" << endl;
      }
      break;
    default:
      cout << "Operator tidak valid! Silakan gunakan +, -, *, atau /." << endl;
  }

  cout << "Terima kasih telah menggunakan kalkulator ini!" << endl;

  cin.get();
  return 0;
}