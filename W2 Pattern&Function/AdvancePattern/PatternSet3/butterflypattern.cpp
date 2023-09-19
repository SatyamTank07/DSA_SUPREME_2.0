#include <iostream>
using namespace std;

int main()
{

    // butterfly pattern...
    int n = 6, var = 2;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }

        for (int space = 0; space <= (var + 4) - (i * 2); space++)
        {
            cout << "=";
        }

        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}