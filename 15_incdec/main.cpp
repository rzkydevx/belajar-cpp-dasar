#include <iostream>
using namespace std;

int main() {
    // Increment and Decrement Example
    // Post-increment and Post-decrement Example
    int x = 10, y = 20;

    cout << "Nilai awal x: " << x << endl;
    cout << "Nilai awal y: " << y << endl;

    x++;
    y--;

    cout << "Nilai x setelah increment: " << x << endl;
    cout << "Nilai y setelah decrement: " << y << endl;

    // Pre-increment and Pre-decrement Example
    int a = 5, b = 15;
    cout << "Nilai awal a: " << a << endl;
    cout << "Nilai awal b: " << b << endl;

    ++a;
    --b;

    cout << "Nilai a setelah pre-increment: " << a << endl;
    cout << "Nilai b setelah pre-decrement: " << b << endl;
}