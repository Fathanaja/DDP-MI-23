#include <iostream>
using namespace std;

int main()
{
    float a, b;
    cin >> a >> b;

    float penjumlahan = a + b;
    float pengurangan = a - b;
    float perkalian = a * b;
    float pembagian = a / b;

    cout << "Hasil dari Penjumlahan " << a << " dengan " << b << " adalah " << penjumlahan << endl;
    cout << "Hasil dari Pengurangan " << a << " dengan " << b << " adalah " << pengurangan << endl;
    cout << "Hasil dari Perkalian " << a << " dengan " << b << " adalah " << perkalian << endl;
    cout << "Hasil dari Pembagian " << a << " dengan " << b << " adalah " << pembagian << endl;

    return 0;
}