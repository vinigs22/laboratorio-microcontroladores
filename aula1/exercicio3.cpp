#include <iostream>
using namespace std;

void analyzeNumbers(int num1, int num2, int num3, int num4, int num5) {
    int numbers[5] = {num1, num2, num3, num4, num5};
    int evenCount = 0, oddCount = 0, positiveCount = 0, negativeCount = 0;

    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;

        if (numbers[i] > 0)
            positiveCount++;
        else if (numbers[i] < 0)
            negativeCount++;
    }

    cout << "Quantidade de numeros pares: " << evenCount << endl;
    cout << "Quantidade de numeros impares: " << oddCount << endl;
    cout << "Quantidade de numeros positivos: " << positiveCount << endl;
    cout << "Quantidade de numeros negativos: " << negativeCount << endl;
}

int main() {
    int testCount;
    cout << "Digite o numero de testes: ";
    cin >> testCount;

    for (int i = 0; i < testCount; i++) {
        int num1, num2, num3, num4, num5;
        cout << "Digite 5 numeros inteiros (teste " << (i + 1) << "): ";
        cin >> num1 >> num2 >> num3 >> num4 >> num5;

        analyzeNumbers(num1, num2, num3, num4, num5);
    }

    return 0;
}
