#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que calcule a soma dos números pares de 1 a 100.

int main(){

	// Inicialização das variaveis
	int cont, soma;
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// Contador de 1 a 100
	for (cont = 1 ; cont <= 100 ; cont ++){
		if (cont%2 == 0){
			soma = soma + cont;
		}
	}
	
	cout << "Soma dos número pares de 1 até 100: " << soma << "\n";
	system("pause");
	return 0;
}

