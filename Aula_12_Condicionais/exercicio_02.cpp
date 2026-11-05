#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Digite um numero: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "Resultado: Numero par." << endl;
    }
    else {
        cout << "Resultado: Numero impar." << endl;
    }

    return 0;
}
