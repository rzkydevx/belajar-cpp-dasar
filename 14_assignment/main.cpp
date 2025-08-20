#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20, c = 30, d = 40, e = 50;
    cout << "Nilai awal a: " << a << endl;
    cout << "Nilai awal b: " << b << endl;
    cout << "Nilai awal c: " << c << endl;
    cout << "Nilai awal d: " << d << endl;
    cout << "Nilai awal e: " << e << endl;

    a += 3;
    b -= 5;
    c *= 2;
    d /= 4;
    e %= 3;

    cout << "Nilai a setelah penambahan 3: " << a << endl;
    cout << "Nilai b setelah pengurangan 5: " << b << endl;
    cout << "Nilai c setelah perkalian 2: " << c << endl;
    cout << "Nilai d setelah pembagian 4: " << d << endl;
    cout << "Nilai e setelah modulus 3: " << e << endl;

    cin.get();
    return 0;
}