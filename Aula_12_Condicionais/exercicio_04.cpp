#include <iostream>
using namespace std;

int main() {
    int numero1, numero2, numero3, maior;

    cout << "Primeiro numero: ";
    cin >> numero1;

    cout << "Segundo numero: ";
    cin >> numero2;

    cout << "Terceiro numero: ";
    cin >> numero3;

    maior = numero1;

    if (numero2 > maior) {
        maior = numero2;
    }

    if (numero3 > maior) {
        maior = numero3;
    }

    cout << "Maior numero: " << maior << endl;

    return 0;
}
