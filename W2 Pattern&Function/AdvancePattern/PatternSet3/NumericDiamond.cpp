#include <iostream>
using namespace std;

int main()
{
    //     1
    //    121
    //   12321
    //  1234321
    // 123454321
    //  1234321
    //   12321
    //    121
    //     1
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int space = 0; space < n - i - 1; space++)
        {
            cout << " ";
        }

        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1;
        }

        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int space = 0; space < i + 1; space++)
        {
            cout << " ";
        }

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << j + 1;
        }

        for (int j = n - i - 2; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}