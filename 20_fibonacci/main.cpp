#include <iostream>

using namespace std;

int main() {
  int n;
  int fn;
  int fn1;
  int fn2;

  cout << "Program Deret Fibonacci" << endl;
  cout << "Masukan nilai ke n: ";
  cin >> n;

  fn1 = 1;
  fn2 = 0;
  fn = fn1 + fn2;
  cout << fn << endl;

  for (int i = 1; i < n; i++) {
    fn = fn1 + fn2;
    fn2 = fn1;
    fn1 = fn;

    cout << fn << endl;
  }

  cin.get();
  return 0;
}