#include "testeLibrary.h"

// Construa um algoritmo que efetue a leitura, a soma e a impressão do
// resultado entre duas matrizes inteiras que comportem 25 elementos.

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
    int mArray_Num[10][10], mArray_Num2[10][10], mArray_somaelemen[10][10];

    setlocale (LC_CTYPE, "PORTUGUESE");

    // Preenche a matriz
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            mArray_Num[i][j]        = (rand () % 10);
            mArray_Num2[i][j]       = (rand () % 20);
            mArray_somaelemen[i][j] = mArray_Num[i][j] + mArray_Num2[i][j];
        }
    }

    Limpa ();

    // Impressão da 1° Matriz
    cout << "1° Matriz \n";
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << mArray_Num[i][j] << " ";
        }
        cout << endl;
    }

    Limpa ();

    // Impressão da 2° Matriz
    cout << "2° Matriz \n";
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << mArray_Num2[i][j] << " ";
        }
        cout << endl;
    }

    Limpa ();

    // Impressão da soma entre as duas matrizes
    cout << "Soma das duas matrizes \n";
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << mArray_somaelemen[i][j] << " ";
        }
        cout << endl;
    }

    Limpa ();

    return 0;
}