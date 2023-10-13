#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    if (t<0){
        cout << "Negatif\n";
    } else if (t%2==0){
        cout << "Positif Genap\n";
    }
    else if (t%2==1){
        cout << "Positif Ganjil\n";
    }
    return 0;
}