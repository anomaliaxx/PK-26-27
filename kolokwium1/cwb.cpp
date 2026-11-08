#include <iostream>

using namespace std;

int main()
{
    int wysokosc;
    cout << "Podaj wysokość: ";
    cin >> wysokosc;

    for (int i = 0; i < wysokosc; i++)
    {
        for (int j = 0; j < wysokosc; j++)
        {
            if (i == j)
            {
                cout << "\\";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}