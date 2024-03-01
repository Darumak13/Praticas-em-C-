#include <iostream>
#include <math.h>
#include <locale>
#include <string>

using namespace std;

// Uma pessoa muito organizada gostaria de fazer um algoritmo para armazenar os
// seguintes dados de um talon�rio ap�s a utiliza��o total do mesmo: n� do cheque,
// valor, data e destino. Sabendo-se que o n�mero de cheques pode ser vari�vel e n�o
// ultrapassa 20, construa esse algoritmo de tal maneira que possa gerar um relat�rio no v�deo.
        void Limpa(){
            cout << "\n";
            system("pause");
            system("CLS");
            cout << "\n";
        }
        
        int main(){
            
            
            double vNCheque[3], vValorCheque[3];
            string vDataCheque[3], vDestCheque[3];
            
            setlocale(LC_CTYPE, "PORTUGUESE");

            // Preenchimento do vetor de cheques
            for (int i = 0; i < 3; i ++ ){
                cout << "Informe o número do " << i + 1 << "° cheque: ";
                cin  >> vNCheque[i];
                cin.ignore();
                cout << "\n";

                cout << "Informe o valor deste " << i + 1 << "° cheque: ";
                cin  >> vValorCheque[i];
                cin.ignore();
                cout << "\n";
                
                cout << "Informe a data deste " << i + 1 << "° cheque: ";
                getline(cin,vDataCheque[i]);
                cout << "\n";

                cout << "Informe o destinatario deste " << i + 1 << "° cheque: ";
                getline(cin,vDestCheque[i]);
                
                cout << "\n";
            }
            
            Limpa();

            // Impressão do cheque
            for (int i = 0; i < 3; i ++){
                cout << "**********************************" << endl;
                cout << i + 1 << "° cheque" << endl;
                cout << "Número: " << vNCheque[i] << " ";
                cout << " Valor: " << vValorCheque[i] << endl;
                cout << "Data: " << vDataCheque[i] << " ";
                cout << " Destinatario: " << vDestCheque[i] << endl;
                cout << "**********************************" << endl;
            }

            Limpa();

            return 0;
        }