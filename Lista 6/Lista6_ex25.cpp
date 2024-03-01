#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Criar um algoritmo que receba a temperatura média de cada mês do ano, em
// centigrados, e armazene essas temperaturas em um vetor; imprimir as temperaturas
// de todos os meses, a maior e a menor temperatura do ano e em que mês aconteceram.

        void Limpa(){
            cout << "\n";
            system("pause");
            system("CLS");
            cout << "\n";
        }
        
        int main(){
            
            int i;
            double vArrayTemp[12], maiorTemp = 0, m = 0, menorTemp = 0, n = 0;
            
            setlocale(LC_CTYPE, "PORTUGUESE");

            // Preenchimento do vetor
            for (int i = 0; i < 12; i ++){
                cout << "Informe a temperatura do " << i + 1 << "° mês: ";
                cin  >> vArrayTemp[i];
                maiorTemp = vArrayTemp[i];
                m = i;
                menorTemp = vArrayTemp[i];
                n = i;
            }

            Limpa();

            // Loop que encontra a menor e a maior temperatura
            for (int i = 0; i < 12; i ++){
                // Condição que pega a menor e maior temperatura
                if (vArrayTemp[i] < menorTemp){
                    menorTemp = vArrayTemp[i];
                    n = i;
                } else if (vArrayTemp[i] > maiorTemp){
                    maiorTemp = vArrayTemp[i];
                    m = i;
                }
            }
            
            for(int i = 0; i < 12; i ++){
                cout << "Temperatura do " << i + 1 << "° mês: " << vArrayTemp[i] << "\t" << endl;
            }

            Limpa();

            cout << "Menor temperatura do ano " << menorTemp << " e aconteceu no " << n + 1 << "° mês do ano" <<endl;

            cout << "Maior temperatura do ano " << maiorTemp << " e aconteceu no " << m + 1 << "° mês do ano" <<endl;

            Limpa();

            return 0;
        }