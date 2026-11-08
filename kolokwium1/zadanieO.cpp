//zadanieO
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Podaj N: ";
    cin >> n;

    if ((n < 1) || (n > 15))
    {
        cout << "Błąd danych." << endl;
        return 0;
    }
    
    int w;
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            if (j <= i)
            {
                w = i * j;
                cout << hex << static_cast<int>(w) << " ";
            }
        }

        cout << endl;
    }

    return 0;
}