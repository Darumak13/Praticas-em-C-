#include <iostream>
#include <math.h>
#include <locale>


using namespace std;

// Crie um vetor com 8 n√∫meros inteiros e 
// verifique se todos eles s√£o diferentes entre si.
        void Limpa(){
            cout << "\n";
            system("pause");
            system("CLS");
            cout << "\n";
        }

        int main(){

             // variveis
            int vArrayNum[8];
            bool verifica;

            verifica = false;

            setlocale(LC_ALL, "PORTUGUESE");

            // Preenchimento do vetor
            for (int i = 0; i < 8; i ++) {
                cout << "Informe o " << i + 1 << "∞ n˙mero: ";
                cin  >> vArrayNum[i];
            }

            Limpa();

            for (int i = 0; i < 8; i ++) {
                for (int j = i + 1; j < 8; j ++) {
                    if (vArrayNum[i] == vArrayNum[j]) {
                        verifica = true;
                    }
                }   
            }

            if (verifica == true) {
                cout << "Os n˙meros n„o s„o todos diferentes" << endl;
            } else {
                cout << "Os n˙meros s„o todos diferentes" << endl;       
            }

            Limpa();
            
            return 0;
        }