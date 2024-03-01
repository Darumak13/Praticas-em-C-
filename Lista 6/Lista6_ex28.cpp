#include <iostream>
#include <locale>
#include <math.h>
#include <string>


using namespace std;

// Um sistema de controle de estoque armazena nome, quantidade em estoque e
// pre√ßo unit√°rio de 10 mercadorias. Fazer um menu que exiba as seguintes
// op√ß√µes: MENU
// 1. Cadastra mercadorias
// 2. Exibe valor total em mercadorias da empresa
// 3. Sair
// OP√á√ÉO:
void Limpa() {
  cout << "\n";
  system("pause");
  system("CLS");
  cout << "\n";
}

void Menu() {
  cout << "1. Cadastra mercadorias \n";
  cout << "2. Exibe valor total em mercadorias da empresa \n";
  cout << "3. Sair \n";
  cout << "OP«√O: ";
}

int main() {

  int Opcao, Total_Merca;
  string vArrayNome_Merca[10];
  int vArrayQuant_Merca[10], vArrayPrecou_Merca[10], vArrayValorCada_Merca[10];

  setlocale(LC_CTYPE, "PORTUGUESE");

  Menu();
  cin >> Opcao;
  cin.ignore();

  do {
    switch (Opcao) {

    case 1:
      for (int i = 0; i < 10; i++) {
        // Informa o nome das mercadorias
        cout << "Informe O nome da " << i + 1 << "∞ mercadoria: ";
        getline(cin, vArrayNome_Merca[i]);
        cout << "\n";
        // Informa a quantidade em estoque daquela mercadoria
        cout << "Informe a quantidade em estoque de " << vArrayNome_Merca[i]
             << endl;
        cin >> vArrayQuant_Merca[i];
        cin.ignore();
        // Informa o pre√ßo daquela mercadoria
        cout << "Informe o preÁo unit·rio de " << vArrayNome_Merca[i] << endl;
        cin >> vArrayPrecou_Merca[i];
        cin.ignore();
        // Faz o valor total de cada mercadoria
        vArrayValorCada_Merca[i] = vArrayQuant_Merca[i] * vArrayPrecou_Merca[i];
        Total_Merca += vArrayValorCada_Merca[i];
        // cout.ignore();
      }
      Limpa();
      Menu();
      cin >> Opcao;
      cin.ignore();
      break;

    case 2:
      // Impress„o das informaÁıes de cada mercadoria
      for (int i = 0; i < 10; i++) {
        cout << i + 1 << "∞ Mercadoria" << endl;
        cout << "Nome: " << vArrayNome_Merca[i] << "  ";
        cout << " Valor unit·rio: " << vArrayPrecou_Merca[i] << endl;
        cout << "Quant. " << vArrayQuant_Merca[i] << " ";
        cout << " Valor total: " << vArrayValorCada_Merca[i] << endl;
      }
      Limpa();
      Menu();
      cin >> Opcao;
      cin.ignore();
      break;
    }

  } while (Opcao != 3);

  // Impress√£o do total completo
  cout << " Total de toda mercadoria: " << Total_Merca << endl;

  return 0;
}