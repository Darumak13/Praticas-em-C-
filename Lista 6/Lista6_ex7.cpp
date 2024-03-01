#include <iostream>
#include <locale>
#include <math.h>

using namespace std;

// Verifique se todos os pre�os do vetor s�o m�ltiplos de 10.

int main() {

  // Inicializa��o das variaveis
  int i;
  int vPreco[5];

  setlocale(LC_CTYPE, "PORTUGUESE");

  // Usu�rio insere o pre�os
  for (i = 1; i <= 5; i++) {
    cout << "Informe o " << i << "° preço: ";
    cin >> vPreco[i];
  }

  cout << "\n";

  // Limpa a tela e pausa
  system("pause");
  system("CLS");

  for (i = 1; i <= 5; i++) {
    if (vPreco[i] % 10 == 0) {
      cout << "Multiplos de 10 [" << i << "] " << vPreco[i] << " ";
      cout << "\n";
    } else {
      cout << "Não multiplos de 10 [" << i << "] " << vPreco[i] << " ";
      cout << "\n";
    }
  }

  system("pause");

  return 0;
}
