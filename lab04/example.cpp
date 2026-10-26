#include <iostream>

using namespace std;

// używając pętli for napisz odliczanie od zera do zadanej przez użytkownika wartości
// to samo, ale od zadanej wartości odliczanie w dół (wartości w obu przypadkach wczytujemy z konsoli)

// wartość od zera co drugą, do zadanej przez użytkownika, np.:
// N = 8
// 0, 2, 4, 6, 8



int main() {
    int liczba;
    cout << "Podaj liczbę: ";
    cin >> liczba;

    for (int i = 0; i < liczba + 1; i++)
    {
        cout << i << " ";
    }

    cout << endl;
    
    for (int i = liczba; i >= 0; i--)
    {
        cout << i << " ";
    }
    
    cout << endl;

    for (int i = 0; i < liczba + 1; i+=2)
    {
        cout << i << " ";
    }

    cout << endl;
    
    return 0;
}