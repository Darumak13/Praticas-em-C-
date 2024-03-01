#include <clocale>
#include <cmath>
#include <conio.h>
#include <cstdlib>
#include <iostream>
#include <locale.h>
#include <map>
#include <math.h>
#include <ostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <vector>

using namespace std;

// Criar um algoritmo que leia os elementos de uma matriz inteira 10x10 os elementos,
// exceto os elementos da diagonal principal.

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
            // Lê apenas as diagonais principais da matriz
            if (i == j) {
                mArray_Num[i][j] = 0;
            } else {
                cout << "Entre com [" << i + 1 << "][" << j + 1 << "]: ";
                mArray_Num[i][j] = (rand () % 30);
                cout << "\n";
            }
        }
    }

    Limpa ();

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            // Imprime apenas as diagonais principais da matriz
            if (i == j) {
                cout << "\t";
            } else {
                cout << mArray_Num[i][j] << " ";
            }
        }
        cout << endl;
    }

    Limpa ();

    return 0;
}