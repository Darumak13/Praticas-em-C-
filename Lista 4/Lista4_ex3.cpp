#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que calcule a soma dos n�meros pares de 1 a 100.

int main(){

	// Inicializa��o das variaveis
	int cont, soma;
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// Contador de 1 a 100
	for (cont = 1 ; cont <= 100 ; cont ++){
		if (cont%2 == 0){
			soma = soma + cont;
		}
	}
	
	cout << "Soma dos n�mero pares de 1 at� 100: " << soma << "\n";
	system("pause");
	return 0;
}

