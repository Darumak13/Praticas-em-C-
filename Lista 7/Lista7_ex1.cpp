#include <iostream>
#include <locale>
#include <math.h>
#include <string>

using namespace std;

// Criar um algoritmo que leia os elementos de uma matriz inteira 10x10 e
// imprima os elementos da diagonal principal
// Elementos da Diagonal Principal → L = C

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

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << "Entre com [" << i + 1 << "][" << j + 1 << "]: ";
            mArray_Num[i][j] = rand ();
            cout << "\n";
        }
    }

    Limpa ();

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i == j) {
                cout << mArray_Num[i][j] << "\t";
            }
        }
        cout << " ";
    }

    Limpa ();

    return 0;
}