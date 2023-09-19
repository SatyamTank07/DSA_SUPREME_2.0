#include <iostream>
using namespace std;

void createnumber(int lengthofnumber)
{
    int digit, number = 1;
    for (int i = 1; i <= lengthofnumber; i++)
    {
        cout << "Enter Digit " << i << " : ";

        cin >> digit;
        if (i > 1)
        {
            number = digit + 10 * number;
        }
        else
        {
            number = digit;
        }
    }

    cout << "digit to number is : " << number;
}
int main()
{
    int lengthofnumber;
    cout << "enter length of number : ";
    cin >> lengthofnumber;

    createnumber(lengthofnumber);
}