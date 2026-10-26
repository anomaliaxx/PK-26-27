/*
Napisz program, który pobiera dwie liczby całkowite: ‘podstawę’ i ‘wykładnik’. 
Następnie program, wykorzystując pętlę ‘for’, oblicza wartość ‘podstawa’ do potęgi ‘wykładnik’ i wypisuje na ekran wynik.
Wykładnik nie może być ujemny.
*/

#include <iostream>

using namespace std;

int main()
{
    int podstawa, wykladnik;
    long long wynik = 1;
    cout << "Podstawa: ";
    cin >> podstawa;
    cout << "Wykładnik: ";
    cin >> wykladnik;

    if (wykladnik < 0)
    {
        cout << "Wykładnik nie może być ujemny" << endl;
        return 1;
    }
    else
    {
        for (int i = 1; i <= wykladnik; i++)
        {
            wynik = podstawa * podstawa;
        }
        cout << wynik;
    }


    return 0;
}