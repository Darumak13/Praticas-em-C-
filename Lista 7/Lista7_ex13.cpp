#include "testeLibrary.h"

// Faça um algoritmo que leia os elementos da matriz inteira 10x10 e
// escreva somente os elementos acima da diagonal secundária.
// Elementos acima da Diagonal Principal ? L + C <= ordem

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
            mNum_elementos[i][j] = (rand () % 50);
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

    // Imprime os valores acima da diagonal principal
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i + j <= 8) {
                cout << mNum_elementos[i][j] << "\t";
            }
        }
        cout << endl;
    }

    Limpa ();

    return 0;
}