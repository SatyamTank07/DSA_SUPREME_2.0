#include <iostream>
using namespace std;

void evenoddusingbit(int num)
{
    if (num & 1)
    {
        cout << "number is odd";
    }
    else
    {
        cout << "number is even";
    }
}
int main()
{
    int num;
    cout << "enter a number to check Odd or Even : ";
    cin >> num;

    evenoddusingbit(num);
}
