#include <iostream>
using namespace std;

int countSetBits(int n)
{
    int count = 0;
    while (n)
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
int main()
{
    int num;
    cout << "enter a number to count set bit : ";
    cin >> num;

    int countedbit = countSetBits(num);

    cout << "countedbit is : " << countedbit;
}