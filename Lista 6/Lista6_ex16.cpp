#include <iostream>
#include <math.h>
#include <locale>


using namespace std;

// Crie um vetor com 7 preços de produtos. 
// Aplique um aumento de 20% nos preços.

        void Limpa(){
            cout << "\n";
            system("pause");
            system("CLS");
            cout << "\n";
        }

        int main() {
            // variveis
            int i; 
            double aumento, vArrayPreco[7], vArrayNovoPreco[7];

            setlocale(LC_ALL, "PORTUGUESE");

            // Informando os preços
            for (i = 0; i < 7; i ++) {
                cout << "Informe o " << i + 1 << "° preço: ";
                cin  >> vArrayPreco[i];

                // Aplicação do aumento
                aumento = vArrayPreco[i] * 20/100;
                vArrayNovoPreco[i] = vArrayPreco[i] + aumento;
            }

            Limpa();

            // Impressão do preços antes do aumento
            for (i = 0; i < 7; i ++) {
                cout << "[" << i + 1 << "] R$" << vArrayPreco[i] << "\t";
            }
            
            Limpa();

            // Impressão do preços depois do aumento
            for (i = 0 ; i < 7 ; i ++) {
                cout << "[" << i + 1 << "] R$" << vArrayNovoPreco[i] << "\t";
            }

            Limpa();

            return 0;
        }