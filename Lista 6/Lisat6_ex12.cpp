#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um vetor com 10 números inteiros. ]
// Subtraia 5 de cada elemento.

        int main(){

            // Variaveis
            int i, vArrayNum[10];

            setlocale(LC_ALL, "PORTUGUESE");

            // Preenchendo o vetor
            for(i = 1 ; i <= 10 ; i ++){
                cout << "Informe o " << i << "� n�mero: ";
                cin  >> vArrayNum[i];
            }

            // Impressão do vetor antes de subtrair
            cout << "= Vetor antes da subtra��o =" << endl ;
            cout << "********************************************" << endl;
            for (i = 1; i <= 10; i ++) {
                cout << vArrayNum[i] << "\t";
            }
            cout << "\n";
            cout << "********************************************";
            cout << "\n";
            system("pause");
            system("CLS");

            // Impressão do vetor depois de subtrair
            cout << "= Vetor depois da subtra��o =" << endl;
            cout << "********************************************" << endl;
            for (i = 1; i <= 10 ; i ++) {
                vArrayNum[i] = vArrayNum[i] - 5;
                cout << vArrayNum[i] << "\t";
            }
            cout << "\n";
            cout << "********************************************";
            cout << "\n";
            system("pause");
            system("CLS");
            return 0;
        }