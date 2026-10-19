#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char jednostka;
    float temp;
    cout << "Jednostka: ";
    cin >> jednostka;
    cout << "Temperatura: ";
    cin >> temp;

    if (jednostka == 'F')
    {
        float Tf = temp;
        float Tc = (Tf - 32) * (5.0 / 9.0);
        float Tk = Tc + 273.15;
        
        cout << "F = " << fixed << setprecision(2) << Tf << endl;
        cout << "C = " << fixed << setprecision(2) << Tc << endl;
        cout << "K = " << fixed << setprecision(2) << Tk << endl;
    }
    else if (jednostka == 'K')
    {
        float Tk = temp;
        float Tc = Tk - 273.15;
        float Tf = (Tc * (9.0 / 5.0)) + 32;
        
        cout << "F = " << fixed << setprecision(2) << Tf << endl;
        cout << "C = " << fixed << setprecision(2) << Tc << endl;
        cout << "K = " << fixed << setprecision(2) << Tk << endl;
    }
    else if (jednostka == 'C')
    {
        float Tc = temp;
        float Tf = (Tc * (9.0 / 5.0)) + 32;
        float Tk = Tc + 273.15;
        
        cout << "F = " << fixed << setprecision(2) << Tf << endl;
        cout << "C = " << fixed << setprecision(2) << Tc << endl;
        cout << "K = " << fixed << setprecision(2) << Tk << endl;

    }
    else
    {
        cout << "Nieprawidłowa jednostka" << endl;
    }

    return 0;
}