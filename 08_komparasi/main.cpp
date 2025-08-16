#include <iostream>
using namespace std;

int main() {
    int a = 2;
    int b = 2;

    bool hasil1, hasil2;

    // Komparasi, Relational Expression

    // Sebanding
    hasil1 = (a == b);
    cout << hasil1 << endl;

    // Tidak Sebanding
    hasil2 = (a != b);
    cout << hasil2 << endl;

    // Kurang dari
    hasil1 = (a < b);
    cout << hasil1 << endl;

    // Lebih dari
    hasil2 = (a > b);
    cout << hasil2 << endl;

    // Kurang dari atau sama dengan
    hasil1 = (a <= b);
    cout << hasil1 << endl;

    // Lebih dari atau sama dengan
    hasil2 = (a >= b);
    cout << hasil2 << endl;

    cin.get();
    return 0;
}