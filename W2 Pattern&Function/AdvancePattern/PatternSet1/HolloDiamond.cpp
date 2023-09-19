#include <iostream>
using namespace std;

int main()
{

    //     *
    //    * *
    //   *   *
    //  *     *
    // *       *
    // *       *
    //  *     *
    //   *   *
    //    * *
    //     *
    // n=5;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int space = n - i - 1; space > 0; space--)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0 || j == i)
            {

                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    for (int row = 0; row < n; row++)
    {
        for (int space = 0; space < row; space++)
        {
            cout << " ";
        }
        int totalcol = n - row;
        for (int col = 0; col < totalcol; col++)
        {
            if (col == 0 || col == totalcol - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
