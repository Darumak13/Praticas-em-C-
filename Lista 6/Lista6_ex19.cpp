#include <iostream>
#include <math.h>
#include <locale>


using namespace std;

// Crie um vetor com 5 alturas de pessoas. 
// Verifique quantas delas são maiores que 1,80 metros.
        
        // Procedimento que limpa a tela
        void Limpa(){
            cout << "\n";
            system("pause");
            system("CLS");
            cout << "\n";
        }

        int main(){
            
            // Variaveis
            double vArrayAltura[5];
            int contador;

            setlocale(LC_ALL, "PORTUGUESE");
        
            // Preenche o vetor de altura
            for ( int i = 0; i < 5; i ++){
                cout << "Informe a " << i + 1 << "� altura: ";
                cin  >> vArrayAltura[i];
                if (vArrayAltura[i] > 1.80){
                    contador++;
                }
            }

            Limpa();

            // Impressão das alturas
            for(int i = 0; i < 5; i ++){
                cout << "[" << i + 1 << "] " << vArrayAltura[i] << "\t"; 
            }

            cout << "\n";

            // Mostar quantas delas são maior de 1.80
            cout << "Maiores que 1.80 = " << contador << endl;

            Limpa();

            return 0;

        }