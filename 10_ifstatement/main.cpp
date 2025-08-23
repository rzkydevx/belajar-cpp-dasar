#include <iostream>
using namespace std;

int main() {
  int a;

  cout << "Enter a number: ";
  cin >> a;

  if (a == 3) {
    cout << "Hello, World!" << endl;
    cout << "You entered: " << a << endl;
  }

  cout << "End of The Program..." << endl;

  cin.get();
  return 0;
}