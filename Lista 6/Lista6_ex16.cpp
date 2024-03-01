#include <iostream>
#include <math.h>
#include <locale>


using namespace std;

// Crie um vetor com 7 pre�os de produtos. 
// Aplique um aumento de 20% nos pre�os.

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

            // Informando os pre�os
            for (i = 0; i < 7; i ++) {
                cout << "Informe o " << i + 1 << "� pre�o: ";
                cin  >> vArrayPreco[i];

                // Aplica��o do aumento
                aumento = vArrayPreco[i] * 20/100;
                vArrayNovoPreco[i] = vArrayPreco[i] + aumento;
            }

            Limpa();

            // Impress�o do pre�os antes do aumento
            for (i = 0; i < 7; i ++) {
                cout << "[" << i + 1 << "] R$" << vArrayPreco[i] << "\t";
            }
            
            Limpa();

            // Impress�o do pre�os depois do aumento
            for (i = 0 ; i < 7 ; i ++) {
                cout << "[" << i + 1 << "] R$" << vArrayNovoPreco[i] << "\t";
            }

            Limpa();

            return 0;
        }