//zadanieN
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Podaj A: ";
    cin >> a;
    cout << "Podaj B: ";
    cin >> b;

    if (a > b)
    {
        cout << "Niepoprawny przedział." << endl;
        return 0;
    }
    else
    {
        for (int i = a; i <= b; i++)
        {
            cout << "Dziesietnie: " << dec << static_cast<int>(i) << " | Osemkowo: " << oct << showbase << static_cast<int>(i) << " | Szesnastkowo: " << hex << showbase << static_cast<int>(i) << endl;
        }
    }

    return 0;
}