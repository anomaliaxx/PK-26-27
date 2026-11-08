#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double dystans, spalanie, cena1l;

    cout << "Dystans (km): ";
    cin >> dystans;
    if (dystans <= 0)
    {   
        cerr << "Błąd: wartości muszą być dodatnie." << endl;
        return 1;
    }

    cout << "Spalanie (l/100km): ";
    cin >> spalanie;
    if (spalanie <= 0)
    {   
        cerr << "Błąd: wartości muszą być dodatnie." << endl;
        return 1;
    }

    cout << "Cena z litr w PLN: ";
    cin >> cena1l;
    if (cena1l <= 0)
    {   
        cerr << "Błąd: wartości muszą być dodatnie." << endl;
        return 1;
    }

    double koszt;
    koszt = (dystans / 100) * spalanie * cena1l;
    cout << fixed << setprecision(2) << "Całkowity koszt: " << koszt << endl;

    return 0;
}