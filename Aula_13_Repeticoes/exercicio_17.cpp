#include <iostream>
using namespace std;

int main() {
    int numero;

    do {
        cout << "Digite um numero entre 1 e 10: ";
        cin >> numero;

        if (numero < 1 || numero > 10) {
            cout << "Valor invalido." << endl;
        }
    } while (numero < 1 || numero > 10);

    cout << "Valor aceito: " << numero << endl;

    return 0;
}
