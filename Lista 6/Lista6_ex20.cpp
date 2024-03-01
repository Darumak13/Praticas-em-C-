#include <iostream>
#include <math.h>
#include <locale>


using namespace std;

// Crie um vetor com 7 números inteiros. 
// Substitua todos os números negativos por seus valores absolutos.
        
        // Procedimento que limpa a tela
        void Limpa(){
            cout << "\n";
            system("pause");
            system("CLS");
            cout << "\n";
        }

        int main(){
            
            // Variaveis
            int vArrayAltura[7];

            setlocale(LC_ALL, "PORTUGUESE");

            // Preenchimento do vetor
            for (int i = 0; i < 7; i ++){
                cout << "Informe o " << i + 1 << "° valor: ";
                cin  >> vArrayAltura[i];
                if (vArrayAltura[i] < 0){
                    vArrayAltura[i] = vArrayAltura[i] * -1;
                }
            }

            Limpa();
            
            // Impressão do vetor
            for (int i = 0; i < 7; i ++){
                cout << "[" << i + 1 << "] " << vArrayAltura[i] << "\t"; 
            }

            Limpa();

            return 0;

        }