/*
Napisz program wyszukujący miejsce zerowe funkcji zadanej wielomianem, przy pomocy przeszukiwania binarnego.
Program przyjmuje liczby 'a' i 'b', które określają początek i koniec przedziału do przeszukania oraz przyjmuje 'n' określający stopnień wielomianu.
Następnie program przyjmuje n+1 liczb określających współczynniki wielomianu. x0 oznacza x do potęgi 0 czyli wyraz wolny, x1 oznacza x do potęgi 1 itd.
Następnie rekurencyjnie uruchamia funkcję do poszukiwania miejsca zerowego. Stopień wielomianu będzie mniejszy niż 100.

Wskazówki:

Wykorzystaj tablicę do przechowywania współczynników wielomianu.
Określ dokładność znalezienia i wypisywania na ekran jako 0,001.
Metoda ta nie zawsze znajduje miejsce zerowe.
Utwórz funkcję do obliczania wartości wielomianu w zadanym miejscu.
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double EPSILON = 0.001;

double wartoscWielomianu(double x, const double wsp[], int n) {
    double wynik = 0.0;
    double potegaX = 1.0;

    for (int i = 0; i <= n; i++) {
        wynik += wsp[i] * potegaX;
        potegaX *= x;
    }

    return wynik;
}

double bisekcja(double a, double b, const double wsp[], int n) {
    double c = (a + b) / 2.0;
    double f_c = wartoscWielomianu(c, wsp, n);

    if ((b - a) < EPSILON || abs(f_c) < EPSILON) {
        return c;
    }

    double f_a = wartoscWielomianu(a, wsp, n);

    if (f_a * f_c < 0) {
        return bisekcja(a, c, wsp, n);
    } else {
        return bisekcja(c, b, wsp, n);
    }
}


int main()
{
    double a, b;
    int n;

    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;

    cout << "n: ";
    cin >> n;

    if (n >= 100 || n < 0)
    {
        cout << "Bledny stopien wielomianu!" << endl;
        return 1;
    }

    double wsp[n + 1];

    for (int i = 0; i <= n; i++) {
        cout << "x" << i << ": ";
        cin >> wsp[i];
    }

    double f_a = wartoscWielomianu(a, wsp, n);
    double f_b = wartoscWielomianu(b, wsp, n);

    if (f_a * f_b > 0) cout << "Brak miejsca zerowego w zadanym przedziale" << endl;
    else {
        double miejsceZerowe = bisekcja(a, b, wsp, n);
        
        cout << fixed << setprecision(3);
        cout << "\nMiejsce zerowe: " << miejsceZerowe << endl;
    }

    return 0;
}