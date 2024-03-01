#include <iostream>
#include <locale>
#include <math.h>
using namespace std;

// Crie um vetor com 4 notas de um aluno.
// Calcule a média e diga se o aluno foi aprovado (média maior ou igual a 6).

  int main() {
    // Inicialização de vareaveis
    int i;
    double vNotas[4], somaNotas, mediaNotas;

    setlocale(LC_ALL, "PORTUGUESE");

    // Usuário insere as notas
    for (i = 1; i <= 4; i++) {
      cout << "Informe o " << i << "� valor: ";
      cin >> vNotas[i];
      somaNotas += vNotas[i];
    }

    // Calcula a média das notas
    mediaNotas = somaNotas / 4;

    cout << "\n";

    // Pausa e limpa a tela
    system("pause");
    system("CLS");

    // Imprime a notas dos alunos
    for (i = 1; i <= 4; i++) {
      cout << "[" << i << "] " << vNotas[i] << " ";
    }

    cout << "\n";

    system("pause");
    system("CLS");

    // Condição que diz se o aluno foi aprovado
    if (mediaNotas >= 6) {
      cout << "Aluno Aprovado";
    } else {
      cout << "Aluno Reprovado";
    }

    cout << "\n";
    system("pause");

    return 0;
  }