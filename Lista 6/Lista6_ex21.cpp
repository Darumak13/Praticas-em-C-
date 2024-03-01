#include <iostream>
#include <math.h>
#include <locale>
#include <string>

using namespace std;

// Crie um algoritmo que entre com 10 nomes e 
// imprima uma listagem contendo todos os nomes.
        
        // Procedimento que limpa a tela
        void Limpa(){
            cout << "\n";
            system("pause");
            system("CLS");
            cout << "\n";
        }

        int main(){
            
            // Variaveis
            string vArrayNome[10];

            setlocale(LC_ALL, "PORTUGUESE");

            // Preencheminto do vetor de nomes
            for(int i = 0; i < 10 ; i ++){
                cout << "Informe o " << i + 1 << "∞ nome: ";
                cin  >> vArrayNome[i];
            }

            Limpa();

            // Impress√£o do nomes
            for ( int i = 0; i < 10; i ++){
                cout << "[" << i + 1 << "] " << vArrayNome[i] << "\t";
            }

            Limpa();

            return 0;
        }