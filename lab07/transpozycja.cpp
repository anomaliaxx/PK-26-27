// ConsoleApplication49.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <iomanip>

using namespace std;

// na podstawie pliku tablice statyczne i dynamiczne stwórz dwie tablice dynamiczne A i B, odpowiednio o wymiarach M x N i N x M
// rozpisz sobie ręcznie tablicę A na kartce, wypełnioną kolejnymi wartościami; następnie samodzielnie transponuj ją na kartce
// do danych wartości dopisz sobie ołówkiem indeksy (współrzędne)... w jakich wsp. jest np.: wartość 3 w tablicy A, a w jakich jest w tablicy B?
// zrób to dla kilku wartości. Powinieneś zauważyć pewną zależność...
// jeśli zauważyłeś - gratulacje, masz rozwiązane zadanie.

// napisz funkcję, do transpozycji macierzy. Funkcja ma przyjmować 4 argumenty, dwie macierze dynamicznie utworzone w main i rozmiar M i N.
// jesli chcesz mozesz dopisac funckje, ktora bedzie uzupelniac macierz A i funkcje ktora bedzie wyswietlac przekazana w parametrze macierz

// do drukowania wartosci na "polu o szerokości 6" służy funkcja setw(szerokosc) -> czyli setw(6)

int ** alokujTablice(int wiersze, int kolumny)
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
        for (int j = 0; j < kolumny; j++)
        {
            cout << setw(6) << tablica[i][j];
        }
        cout << endl;
    }
}

int main()
{
    int N, M;

    cout << "N: ";
    cin >> N;
    cout << "M: ";
    cin >> M;

    int ** A = alokujTablice(N, M);
    int licznik = 1;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            A[i][j] = licznik++;
        }
    }

    int** B = alokujTablice(M, N);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            B[j][i] = A[i][j];
        }
    }

    cout << "A: " << endl;
    wypiszTablice(A, N, M);

    cout << "B: " << endl;
    wypiszTablice(B, M, N);

    zwolnijPamiec(A, N);
    zwolnijPamiec(B, M);


    return 0;
}


