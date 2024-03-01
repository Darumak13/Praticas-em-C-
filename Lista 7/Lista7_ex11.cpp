#include "testeLibrary.h"

// Faça um programa que carregue uma matriz 10 x 20 com números
// inteiros e some cada uma das linhas, armazenando o resultado das
// somas em um vetor. A seguir, multiplique cada elemento da matriz pela
// soma da linha e mostre a matriz resultante.

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
    int mArray_Num[10][20], vArray_somaE[10], somaElementoL = 0;

    setlocale (LC_CTYPE, "PORTUGUESE");

    // Preenchimento da matriz
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 20; j++) {
            mArray_Num[i][j] = (rand () % 40);
        }
    }

    Limpa ();

    // Impressão da matriz normal
    cout << "Matriz Normal \n";
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 20; j++) {
            cout << mArray_Num[i][j] << " ";
        }
        cout << endl;
    }

    Limpa ();

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 20; j++) {
            somaElementoL = somaElementoL + mArray_Num[i][j];
            if (j >= 10) {
                vArray_somaE[i]  = somaElementoL;
                mArray_Num[i][j] = mArray_Num[i][j] * vArray_somaE[i];
            }
        }
        somaElementoL = 0;
    }

    // Impressão da matriz resultante
    cout << "Matriz resultante do calculo \n";
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 20; j++) {
            cout << mArray_Num[i][j] << " ";
        }
        cout << endl;
    }

    Limpa ();

    return 0;
}