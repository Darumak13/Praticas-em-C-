#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que peça ao usuário uma letra e 
// determine se é uma vogal ou uma consoante..

int main(){
	
	// Inicialização de variaveis
	char letra;
	
	setlocale(LC_CTYPE, "PORTUGUESE");

	// Usuário informa uma letra
	cout << "Informe uma letra: ";
	cin  >> letra;
	
	switch(letra) {
		
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
			cout << "Vogal \n";
		break;
		default:
			cout << "Consoante \n";
		break;
	}
	
	system("pause");
	return 0;
}
