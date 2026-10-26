#include <iostream>

using namespace std;

int main()
{
    int wiersze, kolumny, nrKomorki = 1;

    cin >> wiersze >> kolumny;

    for (int w = 0; w < wiersze; w++)
    {
        for (int k = 0; k < kolumny; k++)
        {
            cout << nrKomorki << " ";
            nrKomorki++;
        }
        cout << endl;
    }

    return 0;
}