#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Digite um numero: ";
    cin >> numero;

    if (numero > 0) {
        cout << "Resultado: Numero positivo." << endl;
    }
    else if (numero < 0) {
        cout << "Resultado: Numero negativo." << endl;
    }
    else {
        cout << "Resultado: Numero igual a zero." << endl;
    }

    return 0;
}
