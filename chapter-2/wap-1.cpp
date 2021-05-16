#include <iostream>

double convert_lt_au(double);

int main()
{
    using namespace std;

    double light_years, astro;

    cout << "Enter the number of light years: ";
    cin >> light_years;

    astro = convert_lt_au(light_years);

    cout << light_years << " light years = " << astro << " astronomical units.";
    cout << endl;

    return 0;
}

double convert_lt_au(double lt)
{
    // An astronomical unit is the average distance
    // from Earth to the sun
    // 1 light year = 63,240 astronomical units
    return lt * 63240;
}