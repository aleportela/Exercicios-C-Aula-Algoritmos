#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double nota1, nota2, media;

    cout << "Primeira nota: ";
    cin >> nota1;

    cout << "Segunda nota: ";
    cin >> nota2;

    if (nota1 < 0 || nota1 > 10 || nota2 < 0 || nota2 > 10) {
        cout << "Nota invalida! As notas devem estar entre 0 e 10." << endl;
    }
    else {
        media = (nota1 + nota2) / 2.0;

        cout << fixed << setprecision(1);
        cout << "Media: " << media << endl;

        if (media >= 7) {
            cout << "Situacao: Aprovado." << endl;
        }
        else if (media >= 4) {
            cout << "Situacao: Recuperacao." << endl;
        }
        else {
            cout << "Situacao: Reprovado." << endl;
        }
    }

    return 0;
}
