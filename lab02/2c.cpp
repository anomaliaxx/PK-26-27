#include <iostream>

using namespace std;

int main()
{
    int liczba;
    cout<<"Podaj liczbę: ";
    cin>>liczba;

    if (liczba % 2 == 0)
    {
        cout<<"Parzysta: TAK"<<endl;
    }
    else
    {
        cout<<"Parzysta: NIE"<<endl;
    }

    if (liczba % 8 == 0)
    {
        cout<<"Podzielna przez 8: TAK"<<endl;
    }
    else
    {
        cout<<"Podzielna przez 8: NIE"<<endl;
    }

    if (liczba % 16 == 0)
    {
        cout<<"Podzielna przez 16: TAK"<<endl;
    }
    else
    {
        cout<<"Podzielna przez 16: NIE"<<endl;
    }

    cout<<"Ósemkowo: "<<oct<<liczba<<endl;
    cout<<"Szesnastkowo: "<<hex<<liczba<<endl;
}