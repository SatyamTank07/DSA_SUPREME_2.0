#include <iostream>
#include <cmath>

using namespace std;

void converttobinary(int n)
{

    int binaryno = 0;
    int i = 0;

    while (n > 0)
    {
        int bit = (n & 1);
        binaryno = bit * pow(10, i++) + binaryno;
        n = n >> 1;
    }
    cout << binaryno;
}
int main()
{
    int n;
    cout << "Enter numer : ";
    cin >> n;

    converttobinary(n);
}