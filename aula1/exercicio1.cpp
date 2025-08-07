#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int x;

  cout << "Digite o numero de laranjas compradas: " << endl;
  cin >> x;
  
  cout << fixed << setprecision(2);

  if (x < 12) {
    cout << "Preco da unidade: R$0.80" << endl;
    cout << "Preco total: R$" << x * 0.8 << endl;
  } else {
    cout << "Preco da unidade: R$0.65" << endl;
    cout << "Preco total: R$" << x * 0.65 << endl;
  }

  return 0;
}
