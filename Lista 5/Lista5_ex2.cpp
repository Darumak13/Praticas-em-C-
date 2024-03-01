#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que peça ao usuário para informar sua nota em uma disciplina. 
// Crie uma variável lógica para verificar se o aluno foi aprovado (nota maior ou igual a 6).

int main(){
	
	// Inicialização de variaveis
	int Nota;
	bool verificaNota;
	
	setlocale(LC_CTYPE, "PORTUGUESE");

	// Usuário informa a nota
	cout << "Informe a nota: ";
	cin  >> Nota;
	
	if ( Nota >= 6 ){
		verificaNota = true;
	} else {
		verificaNota = false;
	}
	
	if (verificaNota == true){
		cout << "O aluno foi aprovado com " << Nota << " Pontos " << endl;
	} else {
		cout << "O aluno foi reprovado com " << Nota << " Pontos " << endl;
	}
	
	system("pause");
	return 0;
}
