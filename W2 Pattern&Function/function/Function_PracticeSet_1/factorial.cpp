#include <iostream>
using namespace std;
#define pi 3.14

void factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << "Factorial of " << n << " is : " << fact;
}
int main()
{

    int num;
    cout << "Enter num : " << endl;

    cin >> num;

    factorial(num);
}