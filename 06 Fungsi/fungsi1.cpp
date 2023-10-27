#include <iostream>
using namespace std;

void myFunction()
{
    cout << "I just got executed" << endl;
}

void myFunction2(string name = "Athans", int umur = 19)
{
    cout << "Nama saya : " << name << " Umur saya : " << umur << endl;
}

int myFunction3(int x)
{
    return 5 + x;
}

int main()
{
    myFunction();
    myFunction();
    myFunction();

    myFunction2("Athans");
    myFunction2("Pragos", 19);
    myFunction2("Balaram", 19);
    myFunction2("Krisna", 18);

    cout << myFunction3(17) << endl; // 22
    cout << myFunction3(25) << endl; // 30
    cout << myFunction3(30) << endl; // 35

    int value1 = myFunction3(18); // 23
    cout << value1 << endl;
    return 0;
}