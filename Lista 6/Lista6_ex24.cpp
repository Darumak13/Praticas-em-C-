#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um algoritmo que armazene cinco nomes em um vetor e 
// depois possa ser digitado um número que corresponde a uma pessoa e imprimir esse nome.

        void Limpa(){
            cout << "\n";
            system("pause");
            system("CLS");
            cout << "\n";
        }
        
        int main(){
            
            int i , P = 0;
            string vArrayNome[5];
            
            setlocale(LC_CTYPE, "PORTUGUESE");

            // Preenchimento do vetor de nomes
            for (int i = 0; i < 5; i ++){
                cout << "Informe o " << i + 1 << "° nome: ";
                cin  >> vArrayNome[i];
            }

            Limpa();

            cout << "Informe um número para a pesquisa: ";
            cin  >> P;

            cout << "O nome pesquisado foi " << vArrayNome[P] << "\t" << endl;
            
            return 0;
        }