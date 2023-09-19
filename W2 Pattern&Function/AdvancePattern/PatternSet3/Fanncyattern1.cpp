#include <iostream>
using namespace std;

int main()
{

    // 1
    // 1_2
    // 1__3
    // 1___4
    // 12345
    // int n = 5;
    int n;
    cin >> n;
    cout << "1" << endl;
    for (int row = 0; row < n - 2; row++)
    {

        for (int col = 0; col < row + 3; col++)
        {
            if (col == 0)
            {
                cout << col + 1;
            }
            else if (col == row + 2)
            {
                cout << row + 2;
            }
            else if (col > 0 && col < row + 2)
            {
                cout << "_";
            }
        }
        cout << endl;
    }
    for (int row = 0; row < n; row++)
    {
        cout << row + 1;
    }
}