#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que pe�a ao usu�rio para informar sua nota em uma disciplina. 
// Crie uma vari�vel l�gica para verificar se o aluno foi aprovado (nota maior ou igual a 6).

int main(){
	
	// Inicializa��o de variaveis
	int Nota;
	bool verificaNota;
	
	setlocale(LC_CTYPE, "PORTUGUESE");

	// Usu�rio informa a nota
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
