/*
Napisz program, który pobiera liczbę całkowitą ‘wysokosc’.
Następnie program, wykorzystując dowolne pętle, rysuje w konsoli choinkę ze znaków '*'. 
*/

#include <iostream>

using namespace std;

int main()
{
    int wysokosc;
    cout << "Wysokość: ";
    cin >> wysokosc;

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
        cout << endl;
    }

    return 0;
}