#include <iostream>
#include <locale>
#include <math.h>
using namespace std;

//  Crie um vetor com 7 idades de pessoas. 
// Verifique quantas delas são maiores ou iguais a 18 anos.

int main(){

    // Inicialização de variaveis
    int vIdade[7];

    // Usuário informa as idades
    for (int i = 1 ; i <= 7 ; i ++) {
        cout << "Informe a " << i << "° idade: ";
        cin  >> vIdade[i];
    }

    cout << "\n";

    // Pausa e Limpa a tela
    system("pause");
    system("CLS");
    
    // Imprime as idades das pessoas
    for (int i = 1 ; i <= 7 ; i ++) {
        cout << "[" << i << "] " << vIdade[i] << " ";
    }

    cout << "\n";
    system("pause");
    system("CLS");

    // Verifica quais deles são maiores ou iguais a 18 anos
    cout << "Idades acima ou iguais 18 anos";
    cout << "\n";

    for (int i = 1 ; i <= 7 ; i ++) {
        if (vIdade[i] >= 18) {
            cout << "[" << i << "] " << vIdade[i] << " ";
        }
    }

    cout << "\n";
    system("pause");

    return 0;

}