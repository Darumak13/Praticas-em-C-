#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que peça ao usuário para inserir a idade de 5 pessoas 
// e calcule a média das idades.

int main(){
	
	// Inicialização de variaveis
	int idade, somaIdade;
	double mediaIdade;
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// Estrutura de repetição que insere 5 idades
	for (int i = 0 ; i < 5 ; i ++){
		cout << "Informe uma idade: ";
		cin  >> idade;
		somaIdade += idade;
	}
	
	mediaIdade = somaIdade/5;
	
	cout << "A média das idades de 5 pessoas = " << mediaIdade << endl;
	
	system("pause");
	return 0;
	
}
