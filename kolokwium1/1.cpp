#include <iostream>

using namespace std;

int main() {
    int N;

    while (true) {
        cout << "Liczba pomiarów: ";
        cin >> N;
        if (N > 0) {
            break;
        } else {
            cout << "Liczba pomiarów musi być większa od zera." << endl;
        }
    }

    int pierwsza_temperatura, najwyzsza, najnizsza;
    bool wszystkie_takie_same = true;

    cout << "Podaj temperatury: ";
    cin >> pierwsza_temperatura;
    najwyzsza = pierwsza_temperatura;
    najnizsza = pierwsza_temperatura;

    for (int i = 1; i < N; ++i) {
        int kolejna_temperatura;
        cin >> kolejna_temperatura;
        
        if (kolejna_temperatura > najwyzsza) {
            najwyzsza = kolejna_temperatura;
        }
        if (kolejna_temperatura < najnizsza) {
            najnizsza = kolejna_temperatura;
        }
        if (kolejna_temperatura != pierwsza_temperatura) {
            wszystkie_takie_same = false;
        }
    }

    if (wszystkie_takie_same) {
        cout << "Wszystkie temperatury są takie same: " << pierwsza_temperatura << endl;
    } else {
        cout << "Najwyższa temperatura: " << najwyzsza << endl;
        cout << "Najniższa temperatura: " << najnizsza << endl;
        cout << "Różnica: " << (najwyzsza - najnizsza) << endl;
    }

    return 0;
}