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

// Criar um algoritmo que leia os elementos de uma matriz inteira 10x10
// e escreva somente os elementos acima da diagonal principal.
// Elementos da Diagonal Principal ? L < C

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
            // Escreve apenas acima da diagonal principal
            if (i < j) {
                mArray_Num[i][j] = (rand () % 40);
            }
        }
    }

    Limpa ();

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            // Imprime apenas acima da diagonal principal
            if (i < j) {
                cout << mArray_Num[i][j] << " ";
            } else {
                cout << "\t";
            }
        }
        cout << endl;
    }

    Limpa ();

    return 0;
}
