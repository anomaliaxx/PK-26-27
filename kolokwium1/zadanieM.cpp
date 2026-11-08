//zadanie M
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Podaj rozmiar n: ";
    cin >> n;

    while ((n < 3) || (n % 2 == 0))
    {
        cout << "Błędny rozmiar. Podaj nieparzystą liczbę (min. 3): ";
        cin >> n;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i == j) || ((n - j - 1) == i))
            {
                cout << "*";
            }
            else
            {
                cout << ".";
            }
        }

        cout << endl;
    }

    return 0;
}