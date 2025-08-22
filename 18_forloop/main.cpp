#include <iostream>

using namespace std;

int main() {
  cout << "Starting loop..." << endl;

  for (int i = 0; i < 10; i++) {
    cout << i << endl;
  }

  for (int i = 9; i < 20; i += 2) {
    cout << i << endl;
  }

  for (int i = 19; i > -10; i--) {
    cout << i << endl;
  }

  int j = -10;
  for (int i = 0; i < 10; i++) {
    j += i;
    cout << i << endl;
  }

  cout << "End of loop..." << endl;

  return 0;
}