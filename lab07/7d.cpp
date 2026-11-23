/*
Napisz program, który alokuje tablicę dwuwymiarową o wymiarze N na M po czym wypełnia ją liczbami od 1 do n*m a następnie wypisuje tablice na ekran.
Wypełnianie tablicy następuje wg spirali, czyli w kolejności: w prawo, w dół, w lewo, w górę. Każda liczba (komórka tabeli) wydrukowywana jest na polu o długości 6 miejsc.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int** alokujTablice(int n, int m) {
    int** tab = new int*[n];
    for (int i = 0; i < n; i++) {
        tab[i] = new int[m];
    }
    return tab;
}

void zwolnijPamiec(int** tab, int n) {
    for (int i = 0; i < n; i++) {
        delete[] tab[i];
    }
    delete[] tab;
}

void wypelnijSpirala(int** tab, int n, int m) {
    int gora = 0;
    int dol = n - 1;
    int lewo = 0;
    int prawo = m - 1;
    int wartosc = 1;

    while (gora <= dol && lewo <= prawo) {
        // ruch w prawo po górnym wierszu
        for (int j = lewo; j <= prawo; j++) {
            tab[gora][j] = wartosc++;
        }
        gora++;

        // ruch w dół po prawej kolumnie
        for (int i = gora; i <= dol; i++) {
            tab[i][prawo] = wartosc++;
        }
        prawo--;

        // ruch w lewo po dolnym wierszu
        if (gora <= dol) {
            for (int j = prawo; j >= lewo; j--) {
                tab[dol][j] = wartosc++;
            }
            dol--;
        }

        // ruch w górę po lewej kolumnie
        if (lewo <= prawo) {
            for (int i = dol; i >= gora; i--) {
                tab[i][lewo] = wartosc++;
            }
            lewo++;
        }
    }
}

void wypiszTablice(int** tab, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << setw(6) << tab[i][j];
        }
        cout << endl;
    }
}

int main() {
    int n, m;

    cout << "N: ";
    cin >> n;
    cout << "M: ";
    cin >> m;

    if (n <= 0 || m <= 0) {
        return 1;
    }

    int** tablica = alokujTablice(n, m);

    wypelnijSpirala(tablica, n, m);

    wypiszTablice(tablica, n, m);

    // Zwolnienie pamięci
    zwolnijPamiec(tablica, n);
    
    return 0;
}