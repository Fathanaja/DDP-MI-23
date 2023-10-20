#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string value;
    getline(cin, value);

    for (int i = value.length() - 1; i >= 0; i--)
    {
        cout << value[i];
    }
    return 0;
}
