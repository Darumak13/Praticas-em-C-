#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que pe�a ao usu�rio para digitar um n�mero de 1 a 7 e 
// mostre o dia da semana correspondente.

int main(){
	
	// Inicializa��o de variaveis
	int Semana;
				
	setlocale(LC_CTYPE, "PORTUGUESE");

	// O usu�rio informa um n�mero
	cout << "Informe uma semana: ";
	cin  >> Semana;
	
	// Condicional para mostrar o dia da semana
	if (Semana == 1) {
		cout << "Domingo \n";	
	} else 
		if (Semana == 2) {
			cout << "Segunda \n";
		} else
			if (Semana == 3) {
				cout << "Ter�a-Feira \n";
			} else
				if (Semana == 4) {
					cout << "Quarta-Feira \n";
				} else 
					if (Semana == 5) {
						cout << "Quinta-Feira \n";
					} else 
						if (Semana == 6) {
							cout << "Sexta-Feira \n";
						} else
							cout << "Sabado \n";
	
	system("pause");
	
	return 0;
	
}
