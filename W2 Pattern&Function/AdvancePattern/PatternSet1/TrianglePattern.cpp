#include <iostream>
using namespace std;

int main()
{
    //     *
    //    * *
    //   * * *
    //  * * * *
    // * * * * *

    int num;
    cin >> num;

    int n = num / 2;

    for (int i = 0; i < n; i++)
    {
        for (int space = n - i - 1; space > 0; space--)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}