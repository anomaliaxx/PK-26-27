#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float pi = 3.14;
    float R, L, v;
    cout << "R = ";
    cin >> R;
    L = 2 * pi * R;
    v = pi * (R*R);
    cout << fixed << setprecision(2);
    cout << "Obwód: " << L << endl;
    cout << "Pole: " << v << endl;
    return 0;
}