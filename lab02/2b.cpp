#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int wybor;
    cout<<"Wybierz precyzję: "<<endl;
    cout<<"[1] pojedyncza precyzja"<<endl;
    cout<<"[2] podwójna precyzja"<<endl;
    cout<<"Wybór: ";
    cin>>wybor;

    if (wybor == 1)
    {
        float a, b, suma, roznica, iloczyn, iloraz;
        cout<<"Podaj a: ";
        cin>>a;
        cout<<"Podaj b: ";
        cin>>b;
        suma = a + b;
        roznica = a - b;
        iloczyn = a * b;
        iloraz = a / b;
        cout<<setprecision(12);
        cout<<fixed<<setprecision(12)<<"Suma: "<<suma<<endl;
        cout<<fixed<<setprecision(12)<<"Różnica: "<<roznica<<endl;
        cout<<fixed<<setprecision(12)<<"Iloczyn: "<<iloczyn<<endl;
        cout<<fixed<<setprecision(12)<<"Iloraz: "<<iloraz<<endl;

    } else if (wybor == 2)
    {
        double a, b, suma, roznica, iloczyn, iloraz;
        cout<<"Podaj a: ";
        cin>>a;
        cout<<"Podaj b: ";
        cin>>b;
        suma = a + b;
        roznica = a - b;
        iloczyn = a * b;
        iloraz = a / b;
        cout<<setprecision(12);
        cout<<fixed<<setprecision(12)<<"Suma: "<<suma<<endl;
        cout<<fixed<<setprecision(12)<<"Różnica: "<<roznica<<endl;
        cout<<fixed<<setprecision(12)<<"Iloczyn: "<<iloczyn<<endl;
        cout<<fixed<<setprecision(12)<<"Iloraz: "<<iloraz<<endl;
    } else 
    {
        cout<<"Niepoprawny wybór"<<endl;
    }

    return 0;
}