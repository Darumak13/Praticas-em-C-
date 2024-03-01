#include <iostream>
#include <math.h>
#include <locale>
#include <string>

using namespace std;

// Faça um programa que carregue um vetor com dez números inteiros. 
// Calcule e mostre um vetor resultante ordenado de maneira decrescente.
        void Limpa(){
            cout << "\n";
            system("pause");
            system("CLS");
            cout << "\n";
        }
        
        int main(){
            
            int vArrayNum[10], aux;
            
            setlocale(LC_CTYPE, "PORTUGUESE");

            for (int i = 0; i < 10; i ++){
                cout << "Informe o " << i + 1 << "° número: ";
                cin  >> vArrayNum[i];
            }

            // Impressão do vetor normal
            cout << "Vetor Normal" << endl;
            for (int i = 0; i <10; i ++){
                cout << "[" << i + 1 << "] " << vArrayNum[i] << "\t";
            }

            Limpa();
            // Troca de elementos do vetor
            for(int i = 0; i < 10; i ++){
                for (int j = i + 1; j < 10; j ++ ){
                    if (vArrayNum[i] < vArrayNum[j]){
                        aux = vArrayNum[j];
                        vArrayNum[j] = vArrayNum[i];
                        vArrayNum[i] = aux;
                    }
                }
            }

            // Impressão do vetor decrescente
            cout << "Vetor Decrescente" << endl;
            for (int i = 0; i <10; i ++){
                cout << "[" << i + 1 << "] " << vArrayNum[i] << "\t";
            }

            Limpa();
        }