#include "testeLibrary.h"

// Faça um programa que carregue uma matriz 4x4, calcule e mostre uma
// matriz resultante que será a matriz digitada multiplicada pelo maior
// elemento da matriz

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
    int mArray_Num[4][4], mArray_somaelemen[10][10], maiorElemento;

    setlocale (LC_CTYPE, "PORTUGUESE");

    // Preenchendo a matriz
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            mArray_Num[i][j] = (rand () % 30);
            maiorElemento    = mArray_Num[i][j];
        }
    }

    Limpa ();

    // Estrutura de repetição e de condicional que pega o maior elemento
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (mArray_Num[i][j] > maiorElemento) {
                maiorElemento = mArray_Num[i][j];
            }
        }
    }

    // matriz resultante multiplicada pelo seu maior elemento
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            mArray_somaelemen[i][j] = mArray_Num[i][j] * maiorElemento;
        }
    }

    // Impressão da matriz normal
    cout << "Impressão da matriz normal \n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << mArray_Num[i][j] << " ";
        }
        cout << endl;
    }

    Limpa ();

    // Impressão da matriz multiplicada
    cout << "Impressão da matriz normal multiplicada \n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << mArray_somaelemen[i][j] << " ";
        }
        cout << endl;
    }

    Limpa ();

    return 0;
}