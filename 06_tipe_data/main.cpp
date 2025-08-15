#include <iostream>
#include <limits>
using namespace std;

int main() {
    // Bilangan Bulat
    int a = 3; // 32-bit
    long b = 6; // 64-bit
    short c = 1; // 16-bit

    // Bilangan Desimal
    float d = 3.14; 
    double e = 2.5;

    // Character
    char f = 'f'; // Character 1-bit

    // Boolean
    bool g = true; // True or False

    // Unsigned
    unsigned int x = 5; // 32-bit

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;
    cout << g << endl;

    cout << sizeof(a) << " byte" << endl;
    cout << sizeof(b) << " byte" << endl;
    cout << sizeof(c) << " byte" << endl;
    cout << sizeof(d) << " byte" << endl;
    cout << sizeof(e) << " byte" << endl;
    cout << sizeof(f) << " byte" << endl;
    cout << sizeof(g) << " byte" << endl;

    cout << numeric_limits<int>::max() << endl;
    cout << numeric_limits<int>::min() << endl;

    cout << numeric_limits<unsigned int>::max() << endl;
    cout << numeric_limits<unsigned int>::min() << endl;

    cin.get();
    return 0;
}