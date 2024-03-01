#include "testeLibrary.h"

// Criar um algoritmo que leia os elementos de uma matriz inteira 10x10
// e imprima os elementos da matriz.
// a. Calcule e mostre a soma e a m�dia da diagonal principal
// b. Calcule e mostre a soma e a m�dia da diagonal secund�ria

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
    int mArray_Num[10][10], ordem = 10, somaDP, mediaDP, somaDS, mediaDS;

    setlocale (LC_CTYPE, "PORTUGUESE");

    // Preenchimento da matriz
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            mArray_Num[i][j] = (rand () % 60);
            if (i == j) {
                somaDP += mArray_Num[i][j];
            } else if (i + j == ordem + 1) {
                somaDS += mArray_Num[i][j];
            }
        }
    }

    Limpa ();

    mediaDP = somaDP / 10;
    mediaDS = somaDS / 10;

    // Impress�o da matriz
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << mArray_Num[i][j] << " ";
        }
        cout << "\n";
    }

    Limpa ();

    // Soma e m�dia da diagonal principal da matriz
    cout << "Soma da diagonal principal da matriz = " << somaDP << "\n";
    cout << "M�dia da diagonal principal da matriz = " << mediaDP;

    Limpa ();

    // Soma e m�dia da diagonal secundaria da matriz
    cout << "Soma da diagonal secundaria da matriz = " << somaDS << "\n";
    cout << "M�dia da diagonal secundaria da matriz = " << mediaDS;

    Limpa ();

    return 0;
}
