/*
Pattern for N = 5
1234554321
1234**4321
123****321
12******21
1********1
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 0, nums = n - 1;

    while (i < n)
    {
        int k = 0, nums = n - i;
        while (k < nums)
        {
            cout << k + 1;
            k++;
        }
        int star = i * 2;
        while (star > 0)
        {
            cout << "*";
            star = star - 1;
        }
        k = n - i;
        while (k > 0)
        {
            cout << k;
            k--;
        }
        i++;
        cout << "\n";
    }
}