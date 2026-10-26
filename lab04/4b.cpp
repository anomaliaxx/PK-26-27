/*
Napisz program, który pobiera liczbę całkowitą ‘rozmiar’.
Następnie program, wykorzystując pętlę ‘for’, rysuje szachownicę o zadanym rozmiarze.
Szachownicę proszę narysować ze znaków podwójnej spacji ‘  ‘ i podwójnego znaku hash ‘##’.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string hash = "##";
    string spac = "  ";
    int rozmiar;
    cout << "Rozmiar: ";
    cin >> rozmiar;

    for (int i = 0; i < rozmiar; i++)
    {
        for (int j = 0; j < rozmiar; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << hash;
            }
            else
            {
                cout << spac;
            }
        }
        
        cout << endl;
    }
    

    return 0;
}