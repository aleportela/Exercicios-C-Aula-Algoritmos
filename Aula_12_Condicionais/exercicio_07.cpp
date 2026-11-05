#include <iostream>
using namespace std;

int main() {
    int idade;

    cout << "Digite a idade: ";
    cin >> idade;

    if (idade < 0) {
        cout << "Idade invalida!" << endl;
    }
    else if (idade <= 11) {
        cout << "Faixa etaria: Crianca." << endl;
    }
    else if (idade <= 17) {
        cout << "Faixa etaria: Adolescente." << endl;
    }
    else if (idade <= 59) {
        cout << "Faixa etaria: Adulto." << endl;
    }
    else {
        cout << "Faixa etaria: Idoso." << endl;
    }

    return 0;
}
