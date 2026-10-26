#include <iostream>

using namespace std;

int main()
{
    int a, n;

    cout << "N: ";
    cin >> n;
    cout << "A: ";
    cin >> a;

    if (n <= 0)
    {
        cout << "N musi być większe niż 0" << endl;
        return 0; 
    }

    if (a < 0)
    {
        cout << "A nie jest liczbą naturalną" << endl;
        return 0;
    }

    int wynik = 0;
    
    for (int i = 0; i < n; i++)
    {
        wynik += (a + i);
    }

    cout << "Suma = " << wynik << endl;

    return 0;
}