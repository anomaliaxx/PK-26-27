#include <iostream>
#include <string>

using namespace std;

int main()
{
    char znak;
    string rodzaj;
    cout << "Podaj znak: ";
    cin >> znak;

    if ((znak >= 'A') && (znak <= 'Z'))
    {
        rodzaj = "wielka litera";
    }
    else if ((znak >= 'a') && (znak <= 'z'))
    {
        rodzaj = "mała litera";
    }
    else if ((znak >= '0') && (znak <= '9'))
    {
        rodzaj = "cyfra";
    }
    else
    {
        rodzaj = "inny znak";
    }

    cout << "Znak: '" << znak << "'" << endl;
    cout << "Rodzaj: " << rodzaj << endl;
    cout << "Kod dziesiętnie: " << dec << static_cast<int>(znak) << endl;
    cout << "Kod szesnastkowo: " << hex << showbase << static_cast<int>(znak) << endl;

    return 0;
}