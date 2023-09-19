#include <iostream>
using namespace std;

bool evenornot(int a)
{
    if (a % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int sumofnum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}

int sumofeven(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }
    return sum;
}

int main()
{
    if (evenornot(7))
    {
        cout << "even";
    }
    else
    {
        cout << "odd";
    }
    cout << "sum of all number : " << sumofnum(30);
    cout << "sum of all even number : " << sumofeven(30);
}
