/*
Napisz program, który wykorzystując rekurencyjne wywołania funkcji obliczy wartość silni dla podanej liczby naturalnej N.
Program sprawdza poprawność podanego N i wypisuje komunikat "N musi być nieujemne" w przypadku niepoprawnej wartości.
*/

#include <iostream>

using namespace std;

unsigned long long silnia(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * silnia(n - 1);
}

int main()
{
    int n;
    cout << "N: ";
    cin >> n;

    if (n >= 0)
    {
        cout << "Silnia = " << silnia(n) << endl;
    }
    else cout << "N musi byc nieujemne" << endl;

    return 0;
}