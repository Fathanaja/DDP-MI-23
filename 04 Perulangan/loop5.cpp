#include <iostream>
using namespace std;
int main()
{
    char ulangi = 'y';
    int counter = 0;

    // perulangan while
    do
    {
        cout << "apakah kamu sayang dia?" << endl;
        cout << "jawab (y/t): ";
        cin >> ulangi;

        // increment counter
        counter++;
    } while (ulangi == 'y');

    cout << "\n\n-------\n";
    cout << "kamu masih punya harapan!" << endl;
    cout << "kamu berusaha sebanyak " << counter << " kali " << endl;
}