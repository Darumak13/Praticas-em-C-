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
// e imprima os elementos da diagonal secundária
// Elementos da Diagonal Secundária ? L + C = ordem + 1

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
    int Ordem = 10, mArray_Num[10][10];

    setlocale (LC_CTYPE, "PORTUGUESE");

    // Preenche a matriz
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            mArray_Num[i][j] = (rand () % 25);
        }
    }

    Limpa ();

    // Imprime a matriz normal
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << "[" << i << "][" << j << "] " << mArray_Num[i][j] << " ";
        }
        cout << "\n";
    }

    Limpa ();

    // Imprime apenas os valores da diagonal secundária
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i + j == Ordem + 1) {
                cout << "[" << i << "][" << j << "] " << mArray_Num[i][j] << " ";
            } else {
                cout << "\t";
            }
        }
        cout << "\n";
    }

    Limpa ();

    return 0;
}