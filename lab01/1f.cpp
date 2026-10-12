#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float P, R, I;
    int T;
    cout << "P = ";
    cin >> P;
    cout << "T = ";
    cin >> T;
    cout << "R = ";
    cin >> R;
    I = (P * T * R )/100;
    cout << fixed << setprecision(2);
    cout << "Wynik rzeczywisty: " << I << endl;
    cout << "Wynik całkowity: " << static_cast<int>(I) << endl;
    return 0;
}