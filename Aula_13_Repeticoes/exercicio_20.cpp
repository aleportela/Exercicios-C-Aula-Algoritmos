#include <iostream>
using namespace std;

int main() {
    int inicio, fim;
    int quantidade = 0;

    cout << "Inicio do intervalo: ";
    cin >> inicio;

    cout << "Fim do intervalo: ";
    cin >> fim;

    if (inicio > fim) {
        cout << "Intervalo invalido: o inicio nao pode ser maior que o fim." << endl;
    }
    else {
        cout << "Numeros primos: ";

        for (int numero = inicio; numero <= fim; numero++) {
            bool primo = true;

            if (numero <= 1) {
                primo = false;
            }
            else {
                for (int divisor = 2; divisor < numero; divisor++) {
                    if (numero % divisor == 0) {
                        primo = false;
                        break;
                    }
                }
            }

            if (primo) {
                cout << numero << " ";
                quantidade++;
            }
        }

        cout << endl;
        cout << "Quantidade de primos: " << quantidade << endl;
    }

    return 0;
}
