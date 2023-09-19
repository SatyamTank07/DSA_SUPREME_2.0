#include <iostream>
using namespace std;

int main()
{

    // ********1********
    // *******2*2*******
    // ******3*3*3******
    // *****4*4*4*4*****
    // ****5*5*5*5*5****

    // n * 2 - i - 2
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int star = 0; star < n * 2 - i - 2; star++)
        {
            cout << "*";
        }
        for (int j = 0; j < i * 2 + 1; j++)
        {
            if ((j + 1) % 2 == 0)
            {
                cout << "*";
            }
            else
            {
                cout << i + 1;
            }
        }
        for (int star = 0; star < n * 2 - i - 2; star++)
        {
            cout << "*";
        }
        cout << endl;
    }
}