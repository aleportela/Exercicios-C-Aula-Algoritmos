#include <iostream>
using namespace std;

int main() {
    int idade;

    cout << "Digite a idade: ";
    cin >> idade;

    if (idade < 0) {
        cout << "Idade invalida!" << endl;
    }
    else if (idade >= 18) {
        cout << "Resultado: Maior de idade." << endl;
    }
    else {
        cout << "Resultado: Menor de idade." << endl;
    }

    return 0;
}
