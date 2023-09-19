#include <iostream>
using namespace std;

void counttooN(int a)
{
    for (int i = 1; i <= a; i++)
    {
        cout << i << endl;
    }
}

bool primeornot(int a)
{
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
}

int main()
{
    counttooN(10);

    if (primeornot(70))
    {
        cout << "prime";
    }
    else
    {
        cout << "not prime";
    }
}
