#include <iostream>
using namespace std;

int main()
{
    double cel, fah;

    cout << "Please enter a Celcius value: ";
    cin >> cel;

    fah = 1.8 * cel + 32;

    cout << cel << " degrees Celcius is " << fah << " degrees Fahrenheit.";

    return 0;
}