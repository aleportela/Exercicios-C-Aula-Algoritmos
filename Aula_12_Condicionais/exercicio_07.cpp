#include <iostream>
using namespace std;

int main() {
    int idade;

    cout << "Digite a idade: ";
    cin >> idade;

    if (idade < 0) {
        cout << "Idade inválida!" << endl;
    }
    else if (idade <= 11) {
        cout << "Faixa etária: Criança." << endl;
    }
    else if (idade <= 17) {
        cout << "Faixa etária: Adolescente." << endl;
    }
    else if (idade <= 59) {
        cout << "Faixa etária: Adulto." << endl;
    }
    else {
        cout << "Faixa etária: Idoso." << endl;
    }

    return 0;
}
