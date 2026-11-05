#include <iostream>
using namespace std;

int main() {
    int n;
    bool primo = true;

    cout << "Digite um numero: ";
    cin >> n;

    if (n <= 1) {
        primo = false;
    }
    else {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                primo = false;
                break;
            }
        }
    }

    if (primo) {
        cout << n << " e um numero primo." << endl;
    }
    else {
        cout << n << " nao e um numero primo." << endl;
    }

    return 0;
}
