#include <iostream>
using namespace std;

int main() {
    int x;

    do {
        cout << "Digite um numero entre 0 e 50: ";
        cin >> x;

        if (x < 0 || x > 50) {
            cout << "Valor invalido! ";
        }
    } while (x < 0 || x > 50);

    for (int i = x - 1; i >= 1; i--) {
        int resto = x % i;
        cout << "Resto da divisao de " << x << " por " << i << ": " << resto << endl;
    }

    return 0;
}
