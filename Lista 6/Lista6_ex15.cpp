#include <iostream>
#include <math.h>
#include <locale>


using namespace std;

// Crie um vetor com 5 n√∫meros inteiros. 
// Multiplique por 2 todos os n√∫meros √≠mpares desse vetor.

        int main() {
            // variveis
            int i, vArrayNum[5];

            setlocale(LC_ALL, "PORTUGUESE");

            // Preenchendo o vetor de n√∫meros
            for(i  = 0; i < 5 ; i ++){
                cout << "Informe o " << i + 1 << "∞ valor: ";
                cin  >> vArrayNum[i];
            }

            cout << "\n";
            system("pause");
            system("CLS");

            // Impress√£o do vetor normal
            for (i = 0; i < 5; i ++) {
                cout << "[" << i + 1 << "] " << vArrayNum[i] << "\t";
            }

            cout << "\n";
            system("pause");
            system("CLS");

            // Impress„o do vetor multiplicando os n˙meros impares
            for (i = 0 ; i < 5; i ++) {
                if (vArrayNum[i] % 2 != 0  ) {
                    vArrayNum[i] = vArrayNum[i] * 2;
                    cout << "[" << i + 1 << "] " << vArrayNum[i] << "\t";
                }
            }

            cout << "\n";
            system("pause");
            system("CLS");

            return 0;
        }