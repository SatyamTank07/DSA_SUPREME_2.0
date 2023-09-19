#include <iostream>
using namespace std;

int findmax(int num1, int num2, int num3)
{
    int max = num1;
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            return num1;
        }
        else
        {
            return num3;
        }
    }
    else
    {
        if (num2 > num3)
        {
            return num2;
        }
        else
        {
            return num3;
        }
    }
}

int main()
{
    cout << findmax(10, 25, 20);
}