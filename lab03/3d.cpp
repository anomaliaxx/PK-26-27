#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "N: ";
    cin >> n;

    if (n >= 0)
    {
        long int wynik = 1;
        for (int i = 1; i <= n; i++)
        {
            wynik *= i;
        }
        cout << "Silnia = " << wynik << endl;
    }
    else
    {
        cout << "N musi być nieujemne" << endl;
    }
    return 0;
}