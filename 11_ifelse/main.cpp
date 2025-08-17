#include <iostream>
using namespace std;

int main() {
    int x = 10;

    cout << "Enter a number: ";
    cin >> x;

    if (x == 5) {
        cout << "You entered five!" << endl;
    } else if (x < 5) {
        cout << "You entered number below five" << endl;
    } else {
        cout << "You entered number above five" << endl;
    }

    cout << "End of The Program..." << endl;

    cin.get();
    return 0;
}