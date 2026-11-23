/*
Napisz program, który alokuje tablicę dwuwymiarową dynamiczną A i wypełnia ją kolejnymi liczbami,
a następnie tworzy tablicę B, która jest transponowaną tablicą A.
Następnie program wypisuje obydwie tablice.
Program pobiera dwie liczby N i M, które określają rozmiar NxM tablicy A.
Każda liczba (komórka tabeli) wydrukowywana jest na polu o długości 6 miejsc.

Wskazówka:

Napisz funkcje do alokowania pamięci i wypisywania tablicy.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int** alokujTablice(int wiersze, int kolumny)
{
    int** tablica = new int*[wiersze];
    for (int i = 0; i < wiersze; i++)
    {
        tablica[i] = new int[kolumny];
    }
    return tablica;
}

void zwolnijPamiec(int** tablica, int wiersze)
{
    for (int i = 0; i < wiersze; i++)
    {
        delete[] tablica[i];
    }
    delete[] tablica;
}

void wypiszTablice(int** tablica, int wiersze, int kolumny)
{
    for (int i = 0; i < wiersze; i++)
    {
        for (int j = 0; j < kolumny; j++) {
            cout << setw(6) << tablica[i][j];
        }
        cout << endl;
    }
}

int main() {
    int N, M;

    cout << "N: ";
    cin >> N;
    cout << "M: ";
    cin >> M;

    int** A = alokujTablice(N, M);
    int licznik = 1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            A[i][j] = licznik++;
        }
    }

    int** B = alokujTablice(M, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            B[j][i] = A[i][j];
        }
    }

    cout << "A: " << endl;
    wypiszTablice(A, N, M);

    cout << "B:" << endl;
    wypiszTablice(B, M, N);

    zwolnijPamiec(A, N);
    zwolnijPamiec(B, M);

    return 0;
}