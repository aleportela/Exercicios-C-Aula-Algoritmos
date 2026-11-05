#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double valor, desconto, total;

    cout << "Digite o valor da compra: R$ ";
    cin >> valor;

    if (valor < 0) {
        cout << "Valor invalido!" << endl;
    }
    else {
        if (valor < 100) {
            desconto = 0;
        }
        else if (valor < 300) {
            desconto = 0.05;
        }
        else if (valor < 500) {
            desconto = 0.10;
        }
        else {
            desconto = 0.15;
        }

        total = valor - (valor * desconto);

        cout << fixed << setprecision(2);
        cout << "Valor original: R$ " << valor << endl;
        cout << "Desconto: R$ " << valor * desconto << endl;
        cout << "Valor final: R$ " << total << endl;
    }

    return 0;
}
