#include <iostream>
using namespace std;

int main()
{

    // 1
    // 2 * 2
    // 3 * 3 * 3
    // 4 * 4 * 4 * 4
    // 3 * 3 * 3
    // 2 * 2
    // 1

    int n = 4;
    // int n;
    // cin >> n;

    for (int row = 0; row < n; row++)
    {

        for (int col = 0; col < (row * 2) + 1; col++)
        {
            if (col % 2 != 0)
            {

                cout << "* ";
            }
            else
            {
                cout << row + 1 << " ";
            }
        }

        cout << endl;
    }
    int TotalCol = n * 2 - 3;
    for (int row = 0; row < n - 1; row++)
    {
        for (int col = 0; col < TotalCol; col++)
        {
            if (col % 2 != 0)
            {

                cout << "* ";
            }
            else
            {
                cout << n - row - 1 << " ";
            }
        }
        TotalCol = TotalCol - 2;
        cout << endl;
    }
}
