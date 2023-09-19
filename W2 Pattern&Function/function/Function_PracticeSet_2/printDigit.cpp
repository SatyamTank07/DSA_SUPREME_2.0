#include <iostream>
using namespace std;

void printdigit(int num)
{
    int digit;
    while (num != 0)
    {
        digit = num % 10;
        cout << "digits : " << digit << " " << endl;
        ;
        num = num / 10;
    }
}
int main()
{
    int num;
    cin >> num;

    printdigit(num);
}