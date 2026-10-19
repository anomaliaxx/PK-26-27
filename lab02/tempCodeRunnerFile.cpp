#include <iostream>

using namespace std;

int main()
{
    float pkt;
    cout << "Punkty: ";
    cin >> pkt;

    if (pkt < 0.0)
    {
        cout << "Nieprawidłowa liczba punktów!"<<endl;
    }
    else if (pkt <= 4.4)
    {
        cout << "Uzyskana ocena to niedostateczny (2.0)";
    }
    else if (pkt <= 5.2)
    {
        cout << "Uzyskana ocena to dostateczny (3.0)";
    }
    else if (pkt <= 6.2)
    {
        cout << "Uzyskana ocena to ponad dostateczny (3.5)";
    }
    else if (pkt <= 7.2)
    {
        cout << "Uzyskana ocena to dobry (4.0)";
    }
    else if (pkt <= 8.2)
    {
        cout << "Uzyskana ocena to ponad dobry (4.5)";
    }
    else if (pkt <= 9.0)
    {
        cout << "Uzyskana ocena to bardzo dobry (5.0)";
    }
    else
    {
        cout << "Nieprawidłowa liczba punktów!"<<endl;
    }

    return 0;
}