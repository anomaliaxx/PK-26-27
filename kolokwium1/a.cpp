#include <iostream>

using namespace std;

void choinka(int wysokosc)
{
    cout << "\nNormalna choinka:\n";

    for (int i = 0; i < wysokosc; i++)
    {
        for (int j = 0; j < wysokosc - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < (2 * i + 1); j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void trojkat1(int wysokosc)
{
    cout << "Trójkąt prostokątny (od lewej)\n";

    for (int i = 0; i < wysokosc; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << "";
}

void trojkat2(int wysokosc)
{
    cout << "Trójkąt prostokątny (od prawej)\n";

    for (int i = 0; i < wysokosc; i++)
    {
        for (int j = 0; j <= wysokosc - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= (i * 2) + 1; j++)
        {
            if (j <= i)
                cout << "*";
        }

        cout << endl;
    }
}

int main()
{
    int wysokosc;
    cout << "Podaj wysokość: ";
    cin >> wysokosc;

    choinka(wysokosc);
    trojkat1(wysokosc);
    trojkat2(wysokosc);
    return 0;
}