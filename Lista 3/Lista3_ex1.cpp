#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que pe�a ao usu�rio para digitar um n�mero de 1 a 7 
// e mostre o dia da semana correspondente.

int main(){
	
	// Inicializa��o de variaveis
	int semana;
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// O usu�rio informa um m�s desejado
	cout << "Informe um m�s desejado: ";
	cin  >> semana;
	
	// Mostra a semana escolhida
	switch(semana) {
	
	case 1:
		cout << "Domingo \n";
	break;
	case 2: 
		cout << "Segunda \n";
	break;
	case 3: 
		cout << "Ter�a-Feira \n";
	break;
	case 4:
		cout << "Quarta-Feira \n";
	break;
	case 5: 
		cout << "Quinta-Feira \n";
	break;
	case 6:
		cout << "Sexta-Feira \n";
	break;
	case 7:
		cout << "Sabado \n";
	break;
	default:
		cout << "Semana invalida \n";
	break;
	}
	system("pause");
	
	return 0;
}
