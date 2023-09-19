#include <iostream>
using namespace std;

int main()
{

    // 1 2 3 4 5
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }

    int n;
    if (cin >> n)
    {
        cout << "satyam tank";
    }

    int n = 10;
    if (cout << n)
    {
        cout << "satyam tank";
    }
}
