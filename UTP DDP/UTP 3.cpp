#include <iostream>
using namespace std;


int main() {
    int bilangan1, bilangan2;
    cin >> bilangan1 >> bilangan2;
    
    int matrix[bilangan1][bilangan2];
    
    for (int i=0; i<bilangan1; i++){
        for (int j=0; j<bilangan2; j++){
            cin >> matrix[i][j];
        }
    }
    
    for(int i=bilangan1-1; i>=0; i--){
        for(int j=bilangan2-1; j>=0; j--){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}