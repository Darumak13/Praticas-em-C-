#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que pe�a um ano e determine se ele � bissexto.

int main() {
	
	// Inicializa��o de variaveis
	int Ano;
	
	setlocale(LC_CTYPE, "PORTUGUESE");

	// Informa um ano pelo usu�rio
	cout << "Informe um ano: ";
	cin  >> Ano;
	
	if (Ano % 4 == 0){
		cout << "O ano � bissexto \n";
	} else
		if (Ano / 400 ) {
			cout << "O ano � bissexto \n";
		} else
			cout << "O ano n�o � bissexto \n";
	 		
	system("pause");
	
	return 0;
	
}
