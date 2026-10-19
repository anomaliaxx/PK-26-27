#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int wybor;
    cout<<"Wybierz sposób konwersji: \n[1] Celsjusza na Fahrenheita\n[2] Fahrenheita na Celsjusza"<<endl;
    cout<<"Wybór: ";
    cin>>wybor;
    float temp;

    if (wybor == 1)
    {
        cout<<"Podaj temperaturę: ";
        cin>>temp;
        
        if (temp >= -273.13)
        {
            float fahr;
            fahr = (temp * (9.0 / 5.0)) + 32.0;
            cout<<temp<<" st. Celsjusza to "<<fixed<<setprecision(2)<<fahr<<" st. Fahrenheita"<<endl;
        }
        else
        {
            cout<<"Zbyt zimno na liczenie!"<<endl;
        }
        

    }
    if (wybor == 2)
    {
        cout<<"Podaj temperaturę: ";
        cin>>temp;
        if (temp >= -459.67)
        {
            float cels;
            cels = (temp - 32.0) * (5.0 / 9.0);
            cout<<temp<<" st. Fahrenheita to "<<fixed<<setprecision(2)<<cels<<" st. Celsjusza"<<endl;
        }
        else
        {
            cout<<"Zbyt zimno na liczenie!"<<endl;
        }
        
    }

    return 0;
}