#include <iostream>

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    int h, m;

    cout << "Enter the number of hours: ";
    cin >> h;

    cout << "Enter the number of minutes: ";
    cin >> m;

    cout << "Time: " << h << ":" << m << endl;

    return 0;
}