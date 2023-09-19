#include <iostream>
using namespace std;
#define miles 0.621
#define kme 1.609

void kmtomiles(int km)
{
    cout << km << " km in miles is : " << km * miles;
}

void miletokm(int mile)
{
    cout << mile << " miles in km is : " << kme * mile;
}
int main()
{
    int km;
    cout << "enter km to mile : ";
    cin >> km;

    kmtomiles(km);

    int mile;
    cout << endl;
    cout << "enter mile to km : ";
    cin >> mile;

    miletokm(mile);
}