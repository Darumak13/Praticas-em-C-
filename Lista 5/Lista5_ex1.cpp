#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que pe�a ao usu�rio para informar sua idade. 
// Em seguida, crie uma vari�vel l�gica para verificar se a idade � maior ou igual a 18 anos.

int main(){
	
	// Inicializa��o das variaveis
	int Idade;
	bool VerificaId; 
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// Usu�rio informa a sua idade
	cout << "Informe a sua idade: ";
	cin  >> Idade;
	
	// Estrutura de compora��o que verifica a idade do usu�rio
	if (Idade >= 18){
		VerificaId = true;
	} else {
		VerificaId = false;
	}
	
	// Estrutura de compara��o que verifica se o usu�rio tem mais de 18
	if ( VerificaId == true) {
		cout << "O usu�rio tem mais de 18 anos"  << endl;
	} else {
		cout << "O usu�rio n�o tem mais de 18 anos"  << endl;
	}
	
	system("pause");
	return 0;
	
}
