#include <iostream>
using namespace std;

int main()
{
    // 1 -> 100 even print
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}