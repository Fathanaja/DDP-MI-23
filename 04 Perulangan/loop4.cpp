#include <iostream>
using namespace std;

int main()
{
    char ulangi = 'y';
    int counter = 0;

    while (ulangi == 'y')
    {
        cout << "apakah Pipah sayang aku?" << endl;
        cout << "jawb (y/t) ";
        cin >> ulangi;

        counter++;
    }

    cout << "\n\n--------------------\n";
    cout << "Anda kurang beruntung NT GES" << endl;
    cout << "Kamu berusaha sebanyak " << counter << " kali " << endl;
}