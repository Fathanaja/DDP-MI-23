#include <iostream>
using namespace std;

int main()
{
    int angka;
    cin >> angka;

    if (angka % 2 == 1) {
        cout << "Ganjil";
    } else {
        cout << "Genap";
    }
}