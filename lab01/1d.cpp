#include <iostream>
using namespace std;
int main()
{
    float a, b, c, p, v;
    cout << "A = ";
    cin >> a;
    cout << "B = ";
    cin >> b;
    cout << "C = ";
    cin >> c;
    p = 2 * a * b + 2 * a * c + 2 * b * c;
    v = a * b * c;
    cout << "Pole: " << p << endl;
    cout << "Objętość: " << v << endl;
    
    return 0;
}