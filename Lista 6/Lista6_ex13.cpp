#include <iostream>
#include <math.h>
#include <locale>


using namespace std;

// Crie um vetor com 6 pre√ßos de produtos. 
// Aplique um desconto de 10% em cada pre√ßo.

        int main(){

            // Variaveis
            int i;
            double desconto; 
            double vArrayPreco[6], vArrayNovoPreco[6];
            setlocale(LC_ALL, "PORTUGUESE");
            
            // Preenchendo o vetor com os preÁos
            for(i = 0 ; i < 6 ; i ++){
                cout << "Informe o " << i << "∞ preÁo: ";
                cin  >> vArrayPreco[i];
            }

            cout << "\n";
            system("pause");
            system("CLS");

            // Aplicando os descontos nos preÁos               
            for (i = 0; i < 6; i ++) {
                desconto = vArrayPreco[i] * 0.1;
                vArrayNovoPreco[i] = vArrayPreco[i] - desconto;
            }  

            // Impress„o do vetor de preÁos
            cout << "*Vetor de preÁos sem desconto*" << endl;
            cout << "****************************************************" << endl;
            for (i = 0 ; i < 6; i ++) {
                cout << vArrayPreco[i] << "\t";
            }

            cout << "\n";
            cout << "****************************************************" << endl;    
            system("pause");
            system("CLS");
            // Impress„o do vetor com os descontos no preÁo
            cout << "*Vetor com desconto nos preÁos*" << endl;
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