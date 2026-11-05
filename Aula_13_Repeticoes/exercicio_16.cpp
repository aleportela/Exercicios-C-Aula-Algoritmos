#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double nota, soma = 0;

    for (int i = 1; i <= 10; i++) {
        cout << "Digite a nota " << i << " (0 a 10): ";
        cin >> nota;

        while (nota < 0 || nota > 10) {
            cout << "Nota invalida. Digite novamente: ";
            cin >> nota;
        }

        soma += nota;
    }

    double media = soma / 10.0;

    cout << fixed << setprecision(2);
    cout << "Media das 10 notas: " << media << endl;

    return 0;
}
