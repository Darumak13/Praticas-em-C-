#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que pe�a ao usu�rio para inserir a idade de 5 pessoas 
// e calcule a m�dia das idades.

int main(){
	
	// Inicializa��o de variaveis
	int idade, somaIdade;
	double mediaIdade;
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// Estrutura de repeti��o que insere 5 idades
	for (int i = 0 ; i < 5 ; i ++){
		cout << "Informe uma idade: ";
		cin  >> idade;
		somaIdade += idade;
	}
	
	mediaIdade = somaIdade/5;
	
	cout << "A m�dia das idades de 5 pessoas = " << mediaIdade << endl;
	
	system("pause");
	return 0;
	
}
