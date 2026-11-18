#include <iostream>
#include <string>

using namespace std;

void przeliczRekurencyjnie(long long n, int podstawa) {
    const string cyfry = "0123456789ABCDEF";
    
    if (n >= podstawa) {
        przeliczRekurencyjnie(n / podstawa, podstawa);
    }
    
    cout << cyfry[n % podstawa];
}

int main() {
    long long n;
    string nazwy[] = {"Binarnie", "Piątkowo", "Siódemkowo", "Ósemkowo", "Szesnastkowo"};
    int podstawy[] = {2, 5, 7, 8, 16};

    cout << "N: ";
    cin >> n;
    
    if (n < 0) {
        cout << "Błąd" << endl;
        return 1;
    }
    
    for (int i = 0; i < 5; i++) {
        cout << nazwy[i] << ": ";
        przeliczRekurencyjnie(n, podstawy[i]);
        cout << endl;
    }

    return 0;
}
