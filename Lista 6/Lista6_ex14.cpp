#include <iostream>
#include <math.h>
#include <locale>


using namespace std;

// Crie um vetor com 8 números inteiros e 
// verifique se algum deles é menor que 0 e maior que -10.

        int main() {
            // variveis
            int i, vArrayNum[8];

            setlocale(LC_ALL, "PORTUGUESE");

            // Preenchendo o vetor de números
            for (i = 0; i < 8; i ++) {
                cout << "Entre com " << i + 1 <<  "° número: ";
                cin >> vArrayNum[i];
            }    

            cout << "\n";
            system("Pause");
            system("CLS");

            // Impressão do vetor 
            for (i = 0; i < 8; i ++) {
                cout << "[" << i + 1 << "] "<< vArrayNum[i] << "\t";
            }

            cout << "\n";
            system("pause");
            system("CLS");
            
            // Impressão dos valores menor que 0 e maior que -10.
            for (i = 0; i < 8; i ++) {
                if ((vArrayNum[i] < 0 ) && (vArrayNum[i] > -10)) {
                    cout << "[" << i + 1 << "] "<< vArrayNum[i] << "\t";
                }
            }

            cout << "\n";
            system("pause");
            system("CLS");

            return 0;

        }