// ConsoleApplication49.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double EPS = 0.001;           // Epsilon to dokładność z jaką chcemy znaleźć miejsce zerowe
// const int MAX_N = 100;              // Max stopień wielomianu


// dodatkowe: wartość bezwzględna z double fabs(), potęga pow()


// tablica wsp[] służy do przechowywania współczynników wielomianu
// tu mamy policzyć wartość wielomianu
double wartoscWielomianu(double x, const double wsp[], int n)
{
    double wynik = 0.0;
    double potegaX = 1.0;

    for (int i = 0; i <= n; i++)
    {
        wynik += wsp[i] * potegaX;
        potegaX *= x;
    }

    return wynik;

}


// ta funkcja sprawdza, czy mamy w ogóle miejsce zerowe (najprościej: policz wartość wielomianu dla a i dla b
// jeśli mamy zmianę znaku to z mnożenia wyjdzie wartość ujemna lub 0
//bool ma_miejsce_zerowe(double a, double b, double wsp[], int n) {       
//}


// Rekurencyjna bisekcja: zwraca miejsce zerowe jako double
double bisekcja(double a, double b, double wsp[], int n) {
    // liczymy połowę przedziału ze wzoru polowa = (a+b) / 2
    // liczymy wartosc wielomianu dla 'polowa' - > wartoscWielomianu (...), wynik wywołania funkcji przypisujemy do zmiennej... np fpolowa

    // sprawdzamy warunek stopu rekurencji - moze wlasnie znalezlismy miejse zerowe?
    // warunkiem stopu jest znalezienie miejsca zerowego, czyli wartość f(polowa) < EPS lub (b - a) < EPS (przedział już tak mały, że traktujemy jako miejsce zerowe

    //liczymy wartosci wielomianu dla a fa = wartoscWielomianu(a, ....)

    // szukamy przedzialu gdzie funkcja zmienai znak, czyli sprawdzamy czy f(a) * fpolowa <=0 jeśli tak, to jest nasz nowy przedzial dla rekurencji
    // jesli nie, naszym przedzialem dla rekurencji jest bisekcja(polowa, b, wsp, n)

    double c = (a + b) / 2.0;
    double f_c = wartoscWielomianu(c, wsp, n);

    if ((b - a) < EPS || abs(f_c) < EPS) return c;

    double f_a = wartoscWielomianu(a, wsp, n);

    if (f_a * f_c < 0) return bisekcja(a, c, wsp, n);
    else return bisekcja(c, b, wsp, n);

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
        cout << "Błędny stopień" << endl;
        return 1;
    }

    double wsp[n + 1];

    double f_a = wartoscWielomianu(a, wsp, n);
    double f_b = wartoscWielomianu(b, wsp, n);

    if (f_a * f_b > 0) cout << "Brak miejsca zerowego w zadanym przedziale" << endl;
    else
    {
        double miejsceZerowe = bisekcja(a, b, wsp, n);        
        cout << fixed << setprecision(3);
        cout << "\nMiejsce zerowe: " << miejsceZerowe << endl;
    }

    // wczytaj dane, tak jak jest opisane na upelu
    //a, b, n

    // wsp x do wsp[MAX_N]

    // sprawdz czy w ogole występuje miejsce zerowe
    //jelsi tak :  wywolaj bisekcje i przypisz wart zwracaną do zmiennej -> to bedzie Twoje miejsce zerowe

    return 0;
}


