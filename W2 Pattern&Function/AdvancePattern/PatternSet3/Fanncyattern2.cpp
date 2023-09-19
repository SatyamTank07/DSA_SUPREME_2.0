#include <iostream>
using namespace std;

int main()
{
    // A
    // ABA
    // ABCBA
    // ABCDCBA
    // ABCDEDCBA

    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';

        for (int j = 1; j <= i; j++)
        {
            cout << ch;
            ch++;
        }
        ch = 'A' + (i - 2);
        for (int j = 1; j < i; j++)
        {
            cout << ch;
            ch--;
        }
        cout << endl;
    }
}