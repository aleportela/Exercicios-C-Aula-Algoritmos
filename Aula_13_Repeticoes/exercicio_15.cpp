#include <iostream>
using namespace std;

int main() {
    int n, contador = 1;
    long long soma = 0;

    cout << "Digite N: ";
    cin >> n;

    if (n <= 0) {
        cout << "N deve ser um inteiro positivo." << endl;
    }
    else {
        while (contador <= n) {
            soma += contador;
            contador++;
        }

        cout << "Soma: " << soma << endl;
    }

    return 0;
}
