#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float x = 7.42891;
    cout << fixed << setprecision(2);
    cout << x << endl;
    int xx = static_cast<int>(x);
    cout << xx << endl;
    return 0;
}