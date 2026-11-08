#include <iostream>
#include <iomanip> // Wymagane dla zaokrąglenia wyników

using namespace std;

int main()
{
    int n;
    while (true)
    {
        cout << "Liczba pomiarów: ";
        cin >> n;

        if (n > 0)
            break;
        else
        {
            cout << "Podaj dodatnią ilość pomiarów!" << endl;
        }
    }

    double koltemp, suma = 0.0, srednia = 0.0;
    int iledod = 0;

    cout << "Podaj wartości: ";

    for (int i = 0; i < n; i++)
    {
        cin >> koltemp;
        if (koltemp > 0)
        {
            iledod++;
            suma += koltemp;
        }
    }

    if (iledod > 0)
    {
        srednia = suma / iledod;
        cout << fixed << setprecision(2);
        cout << "Średnia z liczb dodatnich: " << srednia << endl;
    }
    else
    {
        cout << "Brak liczb do obliczenia średniej." << endl;
    }

    return 0;
}