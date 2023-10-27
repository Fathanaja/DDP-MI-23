#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    
    if (x < 0) {
        cout << "Negatif" << endl;
    } else if (x % 2 == 0) {
        cout << "Positif Genap" << endl;
    } else if (x % 2 == 1) {
        cout << "Positif Ganjil" << endl;
    }
    
    return 0;
}