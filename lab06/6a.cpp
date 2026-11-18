/*
Napisz program, który pobiera liczbę całkowitą, a następnie implementuje funkcję o sygnaturze

int fib(int liczba), która wykorzystuje pętlę ‘do-while’ i oblicza pierwszą wartość w ciągu Fibonacciego, większą od podanej.

Wskazówki:

Ciąg Fibonacci’ego skonstruowany jest w następujący sposób: a0 = 0, a1 = 1, an = an-1 + an-2 dla n > 1.
*/

#include <iostream>

using namespace std;

int fib(int n)
{
    if (n == 1) return 1;

    int a = 0, b = 1;
    int next;

    do
    {
        next = a + b;
        a = b;
        b = next;
    } while (b <= n);

    return b;
}

int main()
{
    int n;
    cout << "Podaj wartość: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Wartość nie może być ujemna" << endl;
        return 0;
    }

    int wynik = fib(n);

    cout << "Następny wyraz ciągu to " << wynik << endl;
}