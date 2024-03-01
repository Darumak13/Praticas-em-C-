#include <iostream>
#include <locale>
#include <math.h>
#include <string>

using namespace std;

// 29. Criar um algoritmo que possa armazenar nome, duas notas e a média de 50
// alunos. A média será calculada segundo o critério: peso 3 para a primeira
// nota e peso 7 para a segunda. A impressão deverá conter nome, duas notas e a
// média. ESCOLA VIVA
// 1. Cadastra nomes
// 2. Cadastrar 1ª nota
// 3. Cadastrar 2ª nota
// 4. Calcular média
// 5. Lista no monitor
// 6. Sair
// OPÇÃO:

// Procedimento que limpa a tela
void Limpa() {
  cout << "\n";
  system("pause");
  system("CLS");
  cout << "\n";
}

// Procedimento que mostra o menu
void Menu() {
  cout << "ESCOLA VIVA \n";
  cout << "1. Cadastra nomes \n";
  cout << "2. Cadastrar 1ª nota \n";
  cout << "3. Cadastrar 2ª nota \n";
  cout << "4. Calcular média \n";
  cout << "5. Lista no monitor \n";
  cout << "6. Sair \n";
  cout << "OPÇÃO: ";
}

int main() {
  int Opcao;
  string vArrayNome_Aluno[5];
  int vArrayNota_1[5], vArrayNota_2[5], vArrayNota_Soma[5], vArrayNota_Media[5];

  setlocale(LC_CTYPE, "PORTUGUESE");

  Menu();
  cin >> Opcao;
  cin.ignore();

  do {
    switch (Opcao) {
    case 1:
      for (int i = 0; i < 5; i++) {
        cout << "Informe o " << i + 1 << "° aluno: ";
        cin >> vArrayNome_Aluno[i];
      }
      Limpa();
      Menu();
      cin >> Opcao;
      cin.ignore();
      break;

    case 2:
      for (int i = 0; i < 5; i++) {
        // Informando a 1° nota do aluno
        cout << "Informe a " << i + 1 << "° nota do aluno "
             << vArrayNome_Aluno[i] << ": ";
        cin >> vArrayNota_1[i];
        cin.ignore();
      }
      Limpa();
      Menu();
      cin >> Opcao;
      cin.ignore();
      break;

    case 3:
      for (int i = 0; i < 5; i++) {
        // Informando a 2° nota do aluno
        cout << "Informe a " << i + 1 << "° nota do aluno "
             << vArrayNome_Aluno[i] << ": ";
        cin >> vArrayNota_1[i];
        cin.ignore();
      }
      Limpa();
      Menu();
      cin >> Opcao;
      cin.ignore();
      break;

    case 4:
      for (int i = 0; i < 5; i++) {
        vArrayNota_Soma[i] += vArrayNota_1[i] + vArrayNota_2[i];
      }
      Limpa();
      Menu();
      cin >> Opcao;
      cin.ignore();
      break;

    case 5:
      for (int i = 0; i < 5; i++) {
        cout << i + 1 << "° aluno: " << vArrayNome_Aluno[i] << endl;
        cout << i + 1 << "° nota " << vArrayNota_1[i]
             << " do aluno: " << vArrayNome_Aluno[i] << endl;
        cout << i + 1 << "° nota " << vArrayNota_2[i]
             << " do aluno: " << vArrayNome_Aluno[i] << endl;
        cout << "Média do aluno " << vArrayNome_Aluno[i] << " = "
             << vArrayNota_Media[i] << endl;
      }
      Limpa();
      Menu();
      cin >> Opcao;
      cin.ignore();
      break;
    }
  } while (Opcao != 6);
}