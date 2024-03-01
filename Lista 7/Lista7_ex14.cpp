#include "testeLibrary.h"

// Faça um algoritmo que leia os elementos da matriz inteira 10x10 e
// escreva somente os elementos abaixo da diagonal secundária.
// Elementos abaixo da Diagonal Principal ? L + C >= ordem + 2

// Procedimento que limpa a tela
void Limpa ()
{
    cout << "\n";
    system ("pause");
    system ("CLS");
    cout << "\n";
}

int main ()
{
    int mNum_elementos[10][10];

    setlocale (LC_CTYPE, "PORTUGUESE");

    // Preenche a matriz de elementos
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            mNum_elementos[i][j] = (rand () % 30);
        }
    }

    Limpa ();

    // Impressão da matriz normal
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << mNum_elementos[i][j] << "\t";
        }
        cout << endl;
    }

    Limpa ();

    // Impressão da matriz abaixo da diagonal principal
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i + j >= 8 + 2) {
                cout << mNum_elementos[i][j] << "\t";
            }
        }
        cout << endl;
    }

    Limpa ();

    return 0;
}