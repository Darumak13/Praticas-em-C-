#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um algoritmo que armazene números em dois vetores inteiros de cinco elementos cada. 
// Gere e imprima o vetor soma.

        void Limpa(){
            cout << "\n";
            system("pause");
            system("CLS");
            cout << "\n";
        }
        
        int main(){
            
            int i, vArrayNum[5], vArrayNum_2[5], vSumArray[5];
            
            setlocale(LC_CTYPE, "PORTUGUESE");

            // Preenchimento dos vetores e soma entre eles
            for(int i = 0; i < 5; i ++){
                cout << "Informe um número no 1° vetor na posição [" << i + 1<< "]: ";
                cin  >> vArrayNum[i];
                cout << "\n";
                cout << "Informe um número no 2° vetor na posição [" << i + 1<< "]: ";
                cin  >> vArrayNum_2[i];
                cout << "\n";
                vSumArray[i] = vArrayNum[i] + vArrayNum_2[i];
            }

            Limpa();

            // Impressão do 1° vetor
            for(int i = 0; i < 5; i ++){
                cout << "[" << i + 1 << "] " << vArrayNum[i] << "\t";
            }

            Limpa();

            // Impressão do 2° vetor
            for(int i = 0; i < 5; i ++){
                cout << "[" << i + 1 << "] " << vArrayNum_2[i] << "\t";
            }

            Limpa();

            // Impressão da soma dos dois vetores
            for(int i = 0; i < 5; i ++){
                cout << "[" << i + 1 << "] " << vSumArray[i] << "\t";
            }

            Limpa();

            return 0;

        }