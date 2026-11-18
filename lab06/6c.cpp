/*
Napisz program, który implementuje prosty kalkulator. Program wczytuje działanie, a następnie w zależności od działania wywołuje jedną z poniższych funkcji do obliczenia wartości wyrażenia:

float dodaj(float, float)
float odejmij(float, float)
float pomnoz(float, float)
float podziel(float, float)
Działanie ma postać 'a operator b' gdzie jako operator może być jeden ze znaków: + - / *
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a, b;
    char znak;
    cout << "Działanie: ";
    cin >> a >> znak >> b;
    cout << fixed << setprecision(6);

    switch (znak)
    {
        case '+':
            cout << "Wynik: " << a + b << endl;
            break;
        case '-':
            cout << "Wynik: " << a - b << endl;
            break;
        case '*':
            cout << "Wynik: " << a * b << endl;
            break;
        case '/':
            cout << "Wynik: " << a / b << endl;
            break;
        default:
            cout << "Nieprawidłowe działanie" << endl;
        
    }

    return 0;
}