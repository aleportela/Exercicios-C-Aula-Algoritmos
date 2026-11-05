#include <iostream>
using namespace std;

int main() {
    double numero1, numero2, resultado;
    char operacao;

    cout << "Primeiro numero: ";
    cin >> numero1;

    cout << "Segundo numero: ";
    cin >> numero2;

    cout << "Operacao (+, -, *, /): ";
    cin >> operacao;

    if (operacao == '+') {
        resultado = numero1 + numero2;
        cout << "Resultado: " << resultado << endl;
    }
    else if (operacao == '-') {
        resultado = numero1 - numero2;
        cout << "Resultado: " << resultado << endl;
    }
    else if (operacao == '*') {
        resultado = numero1 * numero2;
        cout << "Resultado: " << resultado << endl;
    }
    else if (operacao == '/') {
        if (numero2 == 0) {
            cout << "Erro: divisao por zero." << endl;
        }
        else {
            resultado = numero1 / numero2;
            cout << "Resultado: " << resultado << endl;
        }
    }
    else {
        cout << "Operador invalido!" << endl;
    }

    return 0;
}
