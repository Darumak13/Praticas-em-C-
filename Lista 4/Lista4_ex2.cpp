#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que fa�a uma contagem regressiva de 10 a 1 e exiba os n�meros.

int main(){
	
	// Inicializa��o de variaveis
	int cont;
	
	// Contador de 10 ate 1
	for (cont = 10 ; cont >= 1 ; cont --){
		cout << cont << " ";
	}
	
	cout << "\n";
	system("pause");
	return 0;
}
	
