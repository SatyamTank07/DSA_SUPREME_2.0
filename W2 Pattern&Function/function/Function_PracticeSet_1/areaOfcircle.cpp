#include <iostream>
using namespace std;
#define pi 3.14

void areaofcircle(int r)
{
    float area = pi * r * r;

    cout << "area of circle is : " << area;
}
int main()
{

    int r;
    cout << "Enter r : " << endl;

    cin >> r;

    areaofcircle(r);
}