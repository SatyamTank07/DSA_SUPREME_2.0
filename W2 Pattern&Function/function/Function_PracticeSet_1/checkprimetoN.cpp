#include <iostream>
using namespace std;

int checkprime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

void checkprimetoN(int n)
{
    cout << "Prime number is : ";
    for (int i = 2; i <= n; i++)
    {
        if (checkprime(i) == 1)
        {
            cout << i;
        }
    }
}
int main()
{
    int num;
    cout << "Enter num : " << endl;

    cin >> num;

    checkprimetoN(num);
}