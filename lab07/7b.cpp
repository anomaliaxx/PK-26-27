/*
Napisz program, który wczyta linię tekstu ze standardowego wejścia a następnie wypiszę ją zmieniając wielkość liter:

1. małe
2. WIELKIE
3. Tytułowe
*/

#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <cctype>

using namespace std;
string male(string txt)
{
    for (int i = 0; i <= txt.length(); i++)
    {
        txt[i] = tolower(txt[i]);
    }
    return txt;
}

string wielkie(string txt)
{
    for (int i = 0; i <= txt.length(); i++)
    {
        txt[i] = toupper(txt[i]);
    }
    return txt;
}

string tytulowe(string txt)
{
    bool nowyWyraz = true;

    for (int i = 0; i < txt.length(); i++) {
        if (isspace(txt[i])) {
            nowyWyraz = true;
        } else {
            if (nowyWyraz) {
                txt[i] = toupper(txt[i]);
                nowyWyraz = false;
            } else {
                txt[i] = tolower(txt[i]);
            }
        }
    }
    return txt;
}


int main()
{
    string txt;
    int wybor;
    cout << "Tekst: ";
    getline(cin, txt);

    cout << "Konwersja:" << endl;
    cout << "1. małe" << endl;
    cout << "2. WIELKIE" << endl;
    cout << "3. Tytułowe" << endl;

    cout << "Wybór: ";
    cin >> wybor;

    switch (wybor)
    {
        case 1:
            cout << male(txt);
            break;
        case 2:
            cout << wielkie(txt);
            break;
        case 3:
            cout << tytulowe(txt);
            break;
        default:
            break;
    }

    return 0;
}