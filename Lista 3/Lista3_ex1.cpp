#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que peça ao usuário para digitar um número de 1 a 7 
// e mostre o dia da semana correspondente.

int main(){
	
	// Inicialização de variaveis
	int semana;
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// O usuário informa um mês desejado
	cout << "Informe um mês desejado: ";
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
		cout << "Terça-Feira \n";
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
