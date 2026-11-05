#include <iostream>
using namespace std;

int main() {
    int codigo, ativo;

    cout << "Codigo de acesso: ";
    cin >> codigo;

    cout << "Usuario ativo (1-Sim / 0-Nao): ";
    cin >> ativo;

    if (codigo == 1234 && ativo == 1) {
        cout << "Acesso autorizado." << endl;
    }
    else {
        cout << "Acesso negado." << endl;
    }

    return 0;
}
