#include "testeLibrary.h"

// Criar um algoritmo que leia os elementos de uma matriz inteira 10x10.
// Some todos os valores da matriz

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
    int mArray_Num[10][10], somaElementos;

    setlocale (LC_CTYPE, "PORTUGUESE");

    // Preenchimento da matriz
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            mArray_Num[i][j] = (rand () % 25);
            somaElementos += mArray_Num[i][j];
        }
    }

    Limpa ();

    // Impressão da matriz
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << mArray_Num[i][j] << " ";
        }
        cout << endl;
    }

    Limpa ();

    // Impressão da soma dos elementos da matriz
    cout << "Soma de todos os elementos da matriz = " << somaElementos << endl;

    return 0;
}