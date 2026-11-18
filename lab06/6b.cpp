#include <iostream>

using namespace std;

void jednosci(int liczba);
void dziesiatki(int liczba);
void setki(int liczba);

int main() {
    setlocale(LC_ALL, "Polish");

    int liczba;
    //cout << "Podaj liczbę całkowitą z zakresu od -999 do 999: ";
    cin >> liczba;

    if (liczba < -999 || liczba > 999) {
        cout << "Błąd: Liczba spoza zakresu!" << endl;
        return 1;
    }
    if (liczba == 0) {
        cout << "zero" << endl;
        return 0;
    }
    if (liczba < 0) {
        cout << "minus ";
        liczba = -liczba;
    }

    setki(liczba);
    dziesiatki(liczba);
    jednosci(liczba);

    cout << endl;
    return 0;
}

void setki(int liczba) {
    int s = liczba / 100;
    string tab[] = {"", "sto ", "dwieście ", "trzysta ", "czterysta ", "pięćset ", "sześćset ", "siedemset ", "osiemset ", "dziewięćset "};
    if (s > 0) cout << tab[s];
}

void dziesiatki(int liczba) {
    int reszta = liczba % 100;
    int d = reszta / 10;

    if (reszta >= 10 && reszta <= 19) {
        string nastki[] = {"dziesięć ", "jedenaście ", "dwanaście ", "trzynaście ", "czternaście ", "piętnaście ", "szesnaście ", "siedemnaście ", "osiemnaście ", "dziewiętnaście "};
        cout << nastki[reszta - 10];
        return;
    }

    string dzies[] = {"", "", "dwadzieścia ", "trzydzieści ", "czterdzieści ", "pięćdziesiąt ", "sześćdziesiąt ", "siedemdziesiąt ", "osiemdziesiąt ", "dziewięćdziesiąt "};
    if (d > 0) cout << dzies[d];
}

void jednosci(int liczba) {
    int reszta = liczba % 100;
    if (reszta >= 10 && reszta <= 19) return;

    int j = liczba % 10;
    string jedns[] = {"", "jeden", "dwa", "trzy", "cztery", "pięć", "sześć", "siedem", "osiem", "dziewięć"};
    if (j > 0 || liczba == 0) cout << jedns[j];
}
