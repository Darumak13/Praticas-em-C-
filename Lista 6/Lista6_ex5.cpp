#include <iostream>
#include <locale>
#include <math.h>

using namespace std;

// Crie um vetor com 8 n�meros inteiros e verifique quantos deles s�o negativos.

int main() {

  // Inicializa��o de variaveis
  int i, vNumeros[8];

  setlocale(LC_CTYPE, "PORTUGUESE");

  // Usu�rio insere os n�meros no vetor
  for (i = 1; i <= 8; i++) {
    cout << "Informe o " << i << "� n�mero: ";
    cin >> vNumeros[i];
  }

  // Pausa e limpa tela
  system("pause");
  system("CLS");

  // Verifica quantos deles s�o negativos
  for (i = 1; i <= 8; i++) {
    if (vNumeros[i] < 0) {
      cout << "[" << i << "] " << vNumeros[i] << " ";
    }
  }

  cout << "\n";
  system("pause");

  return 0;
}
