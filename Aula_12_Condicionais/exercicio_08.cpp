#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double massa, altura, imc;

    cout << "Peso (kg): ";
    cin >> massa;

    cout << "Altura (m): ";
    cin >> altura;

    if (massa <= 0 || altura <= 0) {
        cout << "Massa e altura devem ser valores positivos." << endl;
    }
    else {
        imc = massa / (altura * altura);

        cout << fixed << setprecision(2);
        cout << "IMC: " << imc << endl;

        if (imc < 18.5) {
            cout << "Classificacao: Abaixo do peso." << endl;
        }
        else if (imc < 25) {
            cout << "Classificacao: Faixa usual." << endl;
        }
        else if (imc < 30) {
            cout << "Classificacao: Sobrepeso." << endl;
        }
        else {
            cout << "Classificacao: Obesidade." << endl;
        }

        cout << "O IMC e um indicador de triagem, nao um diagnostico individual." << endl;
    }

    return 0;
}
