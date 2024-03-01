#include <iostream>
#include <math.h>
#include <locale>


using namespace std;

// Crie um vetor com 6 números inteiros e 
// conte quantos deles são pares e maiores que 10.

        // Procedimento que limpa a tela
        void Limpa(){
            cout << "\n";
            system("pause");
            system("CLS");
            cout << "\n";
        }

        int main(){
            
            // Variaveis
            int contador, vArrayNum[6];

            setlocale(LC_ALL, "PORTUGUESE");

            // Preenche o vetor
            for(int i = 0 ; i < 6 ; i ++){
                cout << "Informe o " << i + 1 << "° valor: ";
                cin  >> vArrayNum[i];
                if (vArrayNum[i] % 2 == 0 && vArrayNum[i] > 10){
                    contador ++;
                }
            }

            Limpa();

            // Impressão do vetor de números
            for (int i = 0; i < 6 ; i++) {
                cout << "[" << i + 1 << "] " << vArrayNum[i] << "\t"; 
            }

            cout << "\n";

            // Mostra quantos deles são pares e maiores que 10
            cout << "Números pares maiores que 10: " << contador << endl;
            
            Limpa();

            return 0;
        }
