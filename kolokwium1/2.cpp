#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double cisnienie;
    cout << fixed << setprecision(2);
    cout << "Podaj wartość ciśnieia: ";
    cin >> cisnienie;
    
    if (cisnienie < 0)
    {
        cout << "Wartość nie może być ujemna." << endl;
        return 0;
    }

    int wybor;
    cout << "Podaj jednostkę [1] kPa [2] hPa: ";
    cin >> wybor;

    if (wybor == 1)
    {
        double hpa = 0.0;
        hpa = 10 * cisnienie;
        cout << cisnienie << " kPa = " << hpa << " hPa" << endl;
    }
    else if (wybor == 2)
    {
        double kpa = 0.0;
        kpa = cisnienie / 10;
        cout << cisnienie << " hPa = " << kpa << " kPa" << endl;
    }
    else {
        cout << "Niepoprawny wybór jednostki." << endl;
    }


    return 0;
}