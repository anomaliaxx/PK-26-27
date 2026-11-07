#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Podaj rozmiar: ";
    cin >> n;

    if ((n % 2 == 0) || ((n < 3) || (n > 21)))
    {
        cout << "Nieprawidłowy rozmiar." << endl;
    }
    else
    {
        int srodek = (n + 1) / 2;
        for (int i = 1; i <= n; i++)
        {

            if (i == srodek)
            {
                for (int j = n; j > 0; j--)
                {
                    cout << "+";
                }
            }
            else
            {
                for (int j = n; j > 0; j--)
                {
                    if (j == srodek)
                    {
                        cout << "+";
                    }
                    else
                    {
                        cout << ".";
                    }
                }
            }
            cout << endl;
        }
    }

    return 0;
}