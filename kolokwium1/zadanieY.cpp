#include <iostream>

using namespace std;

int main()
{
    int bok = 0;
    cout << "Podaj rozmiar boku: ";
    cin >> bok;

    while (bok < 3)
    {
        cout << "Za mały rozmiar, spróbuj ponownie." << endl;
        cout << "Podaj rozmiar boku: ";
        cin >> bok;
    }

    for (int i = 0; i < bok; i++)
    {
        if ((i == 0) || (i == bok - 1))
        {
            for (int j = 0; j < bok; j++)
            {
                cout << "#";
            }
        }
        else
        {
            for (int j = 0; j < bok; j++)
            {
                if ((j == 0) || (j == bok - 1))
                {
                    cout << "#";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        
        cout << endl;
    }
    
    return 0;
}