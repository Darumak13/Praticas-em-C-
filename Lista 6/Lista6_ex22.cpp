#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um algoritmo que armazene nome e duas notas de 5 alunos e 
// imprima uma listagem contendo nome, as duas notas e a média de cada aluno.

        void Limpa(){
            cout << "\n";
            system("pause");
            system("CLS");
            cout << "\n";
        }
        
        int main(){
            
            int i; 
            string vArrayAluno[5];
            double vArrayNota1[5],vArrayNota2[5],vArrayMedia[5];
            
            setlocale(LC_CTYPE, "PORTUGUESE");

            // Preencheminto do vetor de nomes
            for(int i = 0; i < 5 ; i ++){
                cout << "Informe o " << i + 1 << "° nome: ";
                cin  >> vArrayAluno[i];
            }

            // Preencheminto do vetor de notas
            for(int i = 0; i < 5 ; i ++){
                cout << "Informe a primeira nota do aluno " << vArrayAluno[i] << ": ";
                cin  >> vArrayNota1[i];
                cout << "Informe a segunda nota do aluno " << vArrayAluno[i] << ": ";
                cin  >> vArrayNota2[i];
            }
            Limpa();

            // Impressão do nomes e da notas do alunos
            for ( int i = 0; i < 5; i ++){
                cout << "[" << i + 1 << "] " << vArrayAluno[i] << "\t";
                cout << "1° nota: [" << i + 1 << "] " << vArrayNota1[i] << "| \t";
                cout << "2° nota: [" << i + 1 << "] " << vArrayNota2[i] << "| \t" << endl;
                vArrayMedia[i] = (vArrayNota1[i] + vArrayNota2[i]) / 2;
                cout << "Media: [" << i + 1 << "] " << vArrayMedia[i] << "| \t";
                cout << "\n";
            }
            Limpa();
            system("pause");
            system("CLS");

            return 0;
        }