#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char operacja;
    double a, b;
    cout << "Podaj rodzaj operacji (+, -, *, /): ";
    cin >> operacja;
    cout << fixed << setprecision(4);

    switch (operacja)
    {
    case '+':
        cout << "Podaj 1 liczbę: ";
        cin >> a;
        cout << "Podaj 2 liczbę: ";
        cin >> b;
        cout << "Wynik: " << a + b << endl;
        break;
    
    case '-':
        cout << "Podaj 1 liczbę: ";
        cin >> a;
        cout << "Podaj 2 liczbę: ";
        cin >> b;
        cout << "Wynik: " << a - b << endl;
        break;
    
    case '*':
        cout << "Podaj 1 liczbę: ";
        cin >> a;
        cout << "Podaj 2 liczbę: ";
        cin >> b;
        cout << "Wynik: " << a * b << endl;
        break;
    
    case '/':
        cout << "Podaj 1 liczbę: ";
        cin >> a;
        cout << "Podaj 2 liczbę: ";
        cin >> b;
        if (b == 0)
        {
            cerr << "Błąd: próba dzielenia przez zero." << endl;
            return 1;
        }
        else
        {
            cout << "Wynik: " << a / b << endl;
        }
        break;
    
    default:
        cout << "Nierozpoznana operacja." << endl;
        break;
    }

    return 0;
}