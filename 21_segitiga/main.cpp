#include <iostream>

using namespace std;

int main() {
  int n;

  cout << "Masukan panjang pola: ";
  cin >> n;

  cout << "\nPola 1\n\n";

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << "*";
    }
    cout << endl;
  }

  cout << "\nPola 2\n\n";

  for (int i = 1; i <= n; i++) {
    for (int j = n; j >= i; j--) {
      cout << "*";
    }
    cout << endl;
  }

  cout << "\nPola 3\n\n";

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j < i; j++) {
      cout << " ";
    }
    for (int k = n; k >= i; k--) {
      cout << "*";
    }
    cout << endl;
  }

  cout << "\nPola 4\n\n";

  for (int i = 1; i <= n; i++) {
    for (int j = n; j > i; j--) {
      cout << " ";
    }
    for (int k = 1; k <= i; k++) {
      cout << "*";
    }
    cout << endl;
  }

  cin.get();
  return 0;
}