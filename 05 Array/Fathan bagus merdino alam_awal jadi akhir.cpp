#include <iostream>
using namespace std;

int main()
{
    int kalimat;
    cin >> kalimat;
    getchar();

    string arr[kalimat];
    for (int i = 0; i < kalimat; i++)
    {
        getline(cin, arr[i]);
    }
    for (int i = kalimat - 1; i >= 0; i--)
    {
        cout << arr[i] << endl;
    }
    return 0;
}