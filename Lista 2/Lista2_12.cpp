#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que peça um ano e determine se ele é bissexto.

int main() {
	
	// Inicialização de variaveis
	int Ano;
	
	setlocale(LC_CTYPE, "PORTUGUESE");

	// Informa um ano pelo usuário
	cout << "Informe um ano: ";
	cin  >> Ano;
	
	if (Ano % 4 == 0){
		cout << "O ano é bissexto \n";
	} else
		if (Ano / 400 ) {
			cout << "O ano é bissexto \n";
		} else
			cout << "O ano não é bissexto \n";
	 		
	system("pause");
	
	return 0;
	
}
