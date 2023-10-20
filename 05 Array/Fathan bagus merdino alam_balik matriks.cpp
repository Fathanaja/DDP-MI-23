#include <iostream>
using namespace std;

int main()
{
    int nilai1, nilai2;
    cin >> nilai1 >> nilai2;

    int matrix[nilai1][nilai2];

    for (int i = 0; i < nilai1; i++)
    {
        for (int j = 0; j < nilai2; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = nilai1 - 1; i >= 0; i--)
    {
        for (int j = nilai2 - 1; j >= 0; j--)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
