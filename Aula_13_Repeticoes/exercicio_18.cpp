#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned long long fatorial = 1;

    cout << "Digite um numero (0 a 20): ";
    cin >> n;

    if (n < 0 || n > 20) {
        cout << "Valor invalido! Digite um numero entre 0 e 20." << endl;
    }
    else {
        for (int i = 1; i <= n; i++) {
            fatorial *= i;
        }

        cout << "Fatorial de " << n << ": " << fatorial << endl;
    }

    return 0;
}
