#include <iostream>
#include <math.h>
#include <locale>


using namespace std;

// Crie um vetor com 6 preços de produtos. 
// Aplique um desconto de 10% em cada preço.

        int main(){

            // Variaveis
            int i;
            double desconto; 
            double vArrayPreco[6], vArrayNovoPreco[6];
            setlocale(LC_ALL, "PORTUGUESE");
            
            // Preenchendo o vetor com os pre�os
            for(i = 0 ; i < 6 ; i ++){
                cout << "Informe o " << i << "� pre�o: ";
                cin  >> vArrayPreco[i];
            }

            cout << "\n";
            system("pause");
            system("CLS");

            // Aplicando os descontos nos pre�os               
            for (i = 0; i < 6; i ++) {
                desconto = vArrayPreco[i] * 0.1;
                vArrayNovoPreco[i] = vArrayPreco[i] - desconto;
            }  

            // Impress�o do vetor de pre�os
            cout << "*Vetor de pre�os sem desconto*" << endl;
            cout << "****************************************************" << endl;
            for (i = 0 ; i < 6; i ++) {
                cout << vArrayPreco[i] << "\t";
            }

            cout << "\n";
            cout << "****************************************************" << endl;    
            system("pause");
            system("CLS");
            // Impress�o do vetor com os descontos no pre�o
            cout << "*Vetor com desconto nos pre�os*" << endl;
            cout << "****************************************************" << endl;
            for (i = 0; i < 6; i ++) {
                cout << vArrayNovoPreco[i] << "\t";
            }

            cout << "\n";
            cout << "****************************************************" << endl;
            system("pause");
            system("CLS");
            return 0;
        }