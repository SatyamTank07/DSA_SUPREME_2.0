#include <iostream>
using namespace std;

void celsiustofahrenheit(int celsius)
{
    int fahrenheit = (celsius * 9 / 5) + 32;
    cout << celsius << " celsius in fahrenheit is : " << fahrenheit;
}

void fahrenheittocelsius(int fahrenheit)
{
    int celsius = (fahrenheit - 32) * 5 / 9;
    cout << fahrenheit << "fahrenheit in celsius is : " << celsius;
}

int main()
{
    int celsius;
    cout << "enter celsius to fahrenheit : ";
    cin >> celsius;
    cout << endl;
    celsiustofahrenheit(celsius);

    cout << endl;
    cout << endl;

    int fahrenheit;
    cout << "enter fahrenheit to celsius : ";
    cin >> fahrenheit;
    cout << endl;
    fahrenheittocelsius(fahrenheit);
    cout << endl;
}