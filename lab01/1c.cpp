#include <iostream>
using namespace std;
int main()
{
    int a, b;
    float suma, roznica, iloczyn;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    suma = a + b;
    roznica = a - b;
    iloczyn = a * b;
    cout << "Suma: " << suma << endl;
    cout << "Różnica: " << roznica << endl;
    cout << "Iloczyn: " << iloczyn << endl;
    return 0;
}