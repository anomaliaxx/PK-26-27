#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "Podaj A: ";
    cin >> a;
    cout << "Podaj B: ";
    cin >> b;

    if (((a < 0) || (b < 0)) || (a > b))
    {
        cout << "Błąd: A musi być mniejsze lub równe B." << endl;
        return 0;
    }
    else
    {
        int spelniajaceWarunekSuma = 0;
        bool spr;

        for (int i = a; i <= b; i++)
        {
            if ((i % 2 != 0) && (i % 3 == 0))
            {
                spelniajaceWarunekSuma += i;
                spr = true;
            }
        }

        if (spr == false)
        {
            cout << "Brak liczb spełniających warunek." << endl;
        }
        else
        {
            cout << "Suma liczb nieparzystych i podzielnych przez 3 z przedziału ["
            << a << ", " << b << "] wynosi: " << spelniajaceWarunekSuma << endl;
        }
    }

    return 0;
}