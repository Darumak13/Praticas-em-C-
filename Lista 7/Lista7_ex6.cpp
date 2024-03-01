#include "testeLibrary.h"

// Criar uma matriz inteira 10x10 que seja do tipo identidade.

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
    int mArray_Num[10][10];

    setlocale (LC_CTYPE, "PORTUGUESE");

    // Preenche a matriz identidade
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i == j) {
                mArray_Num[i][j] = (rand () % 50);
            } else {
                mArray_Num[i][j] = 0;
            }
        }
    }

    Limpa ();

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << mArray_Num[i][j] << " ";
        }
        cout << endl;
    }

    Limpa ();

    return 0;
}