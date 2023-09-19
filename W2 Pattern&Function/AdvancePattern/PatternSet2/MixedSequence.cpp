#include <iostream>
using namespace std;

int main()
{

    // 1
    // 2 * 2
    // 3 * 3 * 3
    // 4 * 4 * 4 * 4

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
}