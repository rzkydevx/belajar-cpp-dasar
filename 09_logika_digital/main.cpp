#include <iostream>
using namespace std;

int main() {
  int a = 3;
  int b = 2;

  bool hasil;

  // Not
  hasil = !(a == 3);
  cout << "Not : " << hasil << endl;

  // And
  hasil = (a == 3) && (b == 2);
  cout << "And : " << hasil << endl;

  // Or
  hasil = (a == 3) || (b == 3);
  cout << "Or : " << hasil << endl;

  cin.get();
  return 0;
}