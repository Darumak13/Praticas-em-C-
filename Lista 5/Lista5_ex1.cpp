#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que peça ao usuário para informar sua idade. 
// Em seguida, crie uma variável lógica para verificar se a idade é maior ou igual a 18 anos.

int main(){
	
	// Inicialização das variaveis
	int Idade;
	bool VerificaId; 
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// Usuário informa a sua idade
	cout << "Informe a sua idade: ";
	cin  >> Idade;
	
	// Estrutura de comporação que verifica a idade do usuário
	if (Idade >= 18){
		VerificaId = true;
	} else {
		VerificaId = false;
	}
	
	// Estrutura de comparação que verifica se o usuário tem mais de 18
	if ( VerificaId == true) {
		cout << "O usuário tem mais de 18 anos"  << endl;
	} else {
		cout << "O usuário não tem mais de 18 anos"  << endl;
	}
	
	system("pause");
	return 0;
	
}
